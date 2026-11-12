#include <iostream>
#include <stdexcept>             // C++ standard exception handling library.

/* In our previous two exercises we dealt exception handling in a generic way. Now, we start to deal with "standard exception handling". C++ language has standard library to handle exception. In this exercise we will deal with 
standard exception handling. */

void test_negvalue(double age)
{
    if (age<0)
    {
        throw std::invalid_argument("Negative value not excepted!");            // 'invalid_argument()' is standard exception handling library
    }

    std::cout<<"You are "<<age<<" years old.\n";    
}

int main()
{
    double num{};
    std::cout<<"Please enter your age!\n";
    std::cin>>num;
    
    try
    {
        test_negvalue(num);
    }

   catch(const std::exception& msg)                                            // std::exception is standard C++ inbuilt library and here is referenced(& used for referencing)
   {
        std::cout<<"Error: "<<msg.what()<<"\n";                                // *.what() is a function from standard exception which will extract the message in the 'throw' statement above.
   }

return 0;

}
