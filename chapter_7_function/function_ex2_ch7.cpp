#include <iostream>

// Defining a function before main() function so you don't have to make a function declaration above after include statement.
double number_squared(double x)
{
    return x*x;
}

int main()
{
    double a{};
    std::cout<<"Enter a number.\n";
    std::cin>>a;
    std::cout<<number_squared(a)<<"\n";  // 'number_squared()' function defined above is being called.
    return 0;
}