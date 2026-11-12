#include <iostream>

/*In exercise 1 we learnt the basic idea behind exception handling. Below is one more example with user asked to input his/her age and if negative value is entered it displays message. Of course, we could make this program to 
avoid other exceptions such as user giving character input or decimal input but lets keep it simple here to just get the idea on how exception handling works.*/


void test_negative(double age)                          // This function checks the age. If the age is negative it throws error message and if non-negative will display the message. 
{
   
    if (age<0)
    {
        throw "Age can't be negative.\n";            // 'throw' alerts the program if entered age is negative.
    }

    std::cout<<"You are "<<age<<" years old.\n";     //  Display this message if age is non-negative.

}

int main()
{
    double age_var{};                                 // Variable declaration.
    std::cout<<"\nPlease enter your age.\n";          
    std::cin>>age_var;                                // Take user input.

    try                                               // try-block of statement will make a function call to 'test_negative()' function above with user input age. 
    {
        test_negative(age_var);
    }
    catch (const char *disp_msg)                      // catch-block will execute if 'throw' statment in try-block gets alerted. Remember throw statement(string characters) matches with the catch variable type which it should.
    {
        std::cout<<disp_msg<<"\n";
    }

    return 0;
}
