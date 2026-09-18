#include <iostream>
#include <string>

int main()

{
int num1 = 22;                   // Any integer variable defined.
std::string name = "Jessica";    // Defining a string variable.

int* pointer1 = &num1;           // Pointer to num1 variable defined.
std::string* pointer2 = &name;   // Pointer to name variable defined.

std::cout<<"\nValue in 'pointer1' is: "<<pointer1<<".\n\n";
std::cout<<"\nValue in 'pointer2' is: "<<pointer2<<".\n\n";
std::cout<<"\n Size of pointer1 is: "<<sizeof(pointer1)<<".\n\n";  // 'sizeof()' function tells memory size in bytes.

//Acessing value via pointer.
// *pointer ----> will access the value at the memory location of pointer.


std::cout<<"Value of variable num1 can also be accessed via pointer as *pointer: "<<*pointer1<<"\n\n";


return 0;

}