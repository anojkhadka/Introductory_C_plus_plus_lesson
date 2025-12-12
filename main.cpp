#include <iostream>
#include <string>

int main()
{

float num1, num2;
int option;
std::string name;

std::cout<<"Please enter your name \n";
std::getline(std::cin, name);
std::cout<<"\nHi "<<name<<" please enter your first number\n";
std::cin>>num1;
std::cout<<"\nPlease enter your second number \n";
std::cin>>num2;
std::cout<<"\nChoose one of the following arithmetic operation you want to perform by pressing the number of operation. \n";
std::cout<<" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n\n";
std::cin>>option;

if (option == 1) 

{
std::cout<<"\n Sum of two numbers is: "<<num1 + num2<<"\n";
}

else if (option == 2)
{
std::cout<<num1<<" minus "<<num2<<" is: "<<num1 - num2<<"\n";

}

else if (option == 3)
{
std::cout<<"\n Product of two numbers is: "<<num1 * num2<<"\n";

}
else if (option == 4)
{
if (num2 == 0)
{
    std::cout<<"\n Can't divide by 0\n";
}
else
{
std::cout<<num1<<" divided by "<<num2<<" is "<<num1 / num2<<"\n";
}
}
else
{
std::cout<<"\n Invalid Operation! Please try again. \n";
}

    return 0;
}