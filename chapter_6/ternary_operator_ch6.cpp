#include <iostream>

/*Lets write a function that says whether a given integer number is odd or even using ternary operator. 
Syntax:
Expression 1 to evaluate ? Expression 2 : Expression 3

Ternary operator is so named because there are three condition. Initial expression is for evaluation/calculation. It the evaluation is 
true(1) second expression will be executed else third expression gets executed.*/

int main()
{
int a{};
std::cout<<"\nOdd Even Number Test\n";
std::cout<<"Please enter any integer number.\n";
std::cin>>a;
std::cout<<(a%2 == 0 ? "Even Number" : "Odd Number");  //Ternary operator inside braces().
return 0;

}
