#include <iostream>
#include <exception>

/*In this exercise we learn about how to write mutliple catch statements. There is nothing additional special about it. In cases where we need to handle more than one type of error we use multiple catch statment. Suppose we write a
program where we ask user to enter price and quantity of a food. We want to ensure that negative price is not entered and 0 quantity is not entered as one can't have negative price or 0 quantity(let's say) Yes, yes I know we also do 
not want a person to enter some character instead of number as their age. Here, for an example I am only considering negative age and 0 age for the sake of convenience to help understand multiple catch statement. We provide required 
number of exception cases as we want and those exceptions are handled by corresponding number of catch statements. However, one thing to remember is that order of hierarchy of exception handler should be maintained. Remember that rule:
 "Always put more specific exception handlers before more general exception handlers. "*/


double foodPriceCalculator(double a, double b)
{
    if (a==0 or b ==0)                                                                    
    {
        throw std::invalid_argument("Price and quantity can't be zero!");                    // First excetpion case.
    }

    if (a<0 or b<0)
    {
        throw std::out_of_range("Price and quantity can't be negative!");                   // Second excetpion case.
    }

    return a*b;
}

int main()
{
int qty{};
double price{};

std::cout<<"Please enter the quantity of items purchased.\n";
std::cin>>qty;
std::cout<<"\nPlease enter the price of the item. \n";
std::cin>>price;

try
{
    double result = foodPriceCalculator(qty, price);
    std::cout<<"The price of "<<qty<<" items of food you purchased is "<<result<<"\n";
}
catch(const std::invalid_argument& msg1)                                                    // First catch statement will take exception.                               
{
    std::cout<<"Error! "<<msg1.what()<<"\n";
}
catch(const std::out_of_range& msg2)                                                       // Second catch statement will take next exception.
{
    std::cout<<"Error! "<<msg2.what()<<"\n";
}

return 0;

}
