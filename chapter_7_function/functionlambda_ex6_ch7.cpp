#include <iostream>

int main()
{
    double x, y;
    std::cout<<"Let's do mulplication\n";

    /* This function below starting with 'auto' keyword is a lambda function named 'multiply'. [] is called a capture clause and is
    used to capture variables outside the scope of this lambda function. As you can see, this is a small snippet function used to 
    accomplish tiny task and is generally used inside some larger fucntion or line of code.  */
    
    auto multiply = [](double a, double b) {  return a*b; };

    std::cout<<"Please enter your first number\n";
    std::cin>>x;
    std::cout<<"Please enter your second number\n";
    std::cin>>y;
    std::cout<<"Product of "<<x<<" and "<<y<<" is "<<multiply(x,y)<<"\n";
    return 0;
}