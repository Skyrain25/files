#include <fstream>
#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream file {"abc.bin", ios::binary};
   
   if (file) //file created OK
   {
	   
   file.write(reinterpret_cast<char*>(&a), sizeof(a));
   file.write(reinterpret_cast<char*>(&b), sizeof(b));
   file.write(reinterpret_cast<char*>(&c), sizeof(c)); 
   }
   else 
   
   cout<<"Error opening file"<<endl;
 
   return 0;
}


