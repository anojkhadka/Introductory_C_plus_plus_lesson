#include <iostream>
#include <string>

/* Here we learn about the simple use of string library which is very useful in manipulating string variable type. */

std::string first_name{};         // Every time you initialize string use 'std::string' before the string name variable.
std::string last_name{};          // You can enter number as string variable and it will still treat is as string variable.
std::string replace_name{};       // However, entering numbers as string variable won't let you do arithmetical operation. 

int main()
{
std::cout<<"Please enter your first name.\n";
std::cin>>first_name;
std::cout<<"Please enter your last name.\n";
std::cin>>last_name;

std::cout<<"Your name is  "<<first_name<<" "<<last_name<<".\n";

// String library has several built-in function. 'string_name.replace()' is one of them. Check notes for other functions or this link below.
// https://www.geeksforgeeks.org/cpp/strings-in-cpp/


std::cout<<"Let's replace the first name with a different name.\n";
std::cout<<"Please enter a name again to replace previous name.\n"; 
std::cin>>replace_name;
first_name.replace(0,8, replace_name);   // Replace character in 'first_name' string starting from first(0 index) character until 8th character.
std::cout<<"Your name is  "<<first_name<<" "<<last_name<<".\n";


return 0;

}