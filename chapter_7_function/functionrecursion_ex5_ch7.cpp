#include <iostream>

/* If some operation repeats itself in smaller version or if some action needs to be performed repeatedly but in a diminishing 
fashion that is a case for recursive function. While recursive function is useful when recursion depth is not too deep it should
be used with care. Too deep of a recusion will lead to memory overload and crash the program. Also if the base case is not well
figured out and stated recursion continues in a never ending manner and this will also crash the memory. Below is an example of 
a popular recursion function that gives a factorial of any number below 20.  */

int factorial(int n)
{
    if (n == 0)                 // Base case which puts brake on recursion
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{ 
    int test_num{};
    std::cout<<"Please enter any integer number below 20\n\n";
    std::cin>>test_num;
    std::cout<<test_num<<" factorial is "<<factorial(test_num)<<".\n\n";
    return 0;
}