#include <iostream>
int main()
{


//  *******************-------- Simple introduction--------- ******************
//  ***************************************************************************

/* In this code we introduce how to create reference and use it to access and modify value of varialbe it aliases or 
references to.  */


int num{10};    // Defining an integer varialbe

int& ref_var = num;   // Creating a reference variable 'ref_var' that aliases 'num' variable.

std::cout<<"\nActual variable "<<num<<".\n\n";
std::cout<<"Accessing via reference "<<ref_var<<".\n\n";

ref_var = 20;   //modifying the value of num via reference

std::cout<<"Value of reference variable after modification is: "<<ref_var<<".\n\n";  //Printing new value.
std::cout<<"Value of original variable after changing reference variable is: "<<num<<".\n\n";  //Modification of reference variable also impacts actual varaible.
return 0;
}