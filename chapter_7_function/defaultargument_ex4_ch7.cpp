#include <iostream>
double area_circle(double r=2);     // Passing default argument 2 for variable r. Default argument value MUST be provided here
                                    // while making function declaration.
double area_circle(double r)   
{
    return 3.14*r*r;
}

int main()
{
    double a{};
    std::cout<<"Please enter the radius of a circle.\n";
    std::cin>>a;
    std::cout<<"Area of circle with radius "<<a<<" is "<<area_circle(a)<<"\n\n";     // This takes argument provided.
    std::cout<<"Area of circle without radius provided is "<<area_circle()<<"\n";    // This takes default argument.
    return 0;
}


// Couple of rules

// 1. Default value should be provided while declaring function on the top.
// 2. Default argument can't be modified later. 
// 3. Default argument must be provided from right to left. i.e. there can't be variable without default argument to the right of 
//    variable with default argument. 