#include <iostream>
#include <string>

/* This is a simple function. void function is used when we don't have any return value in a function. As here this function
named ''greeting' will only print out a statment. */

void greeting()
{
    std::cout<<"You have a good day!\n";
}

int main()
{
    std::cout<<"Please enter your first name.\t";
    std::string name{};
    std::cin>>name;
    std::cout<<"\nHi "<<name<<",\n";
    greeting();                         // Calling back the greeting() function.
    return 0;
}