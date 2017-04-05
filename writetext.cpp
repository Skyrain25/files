#include <fstream>
#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream file {"abc.txt"};
   
   if (file) //file created OK
   {
	   
   file<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   }
   else 
   
   cout<<"Error opening file"<<endl;
 
   return 0;
}

