#include <iostream>

int main()
{
    int option{};
    std::cout<<"Please enter number to choose what arithmetic operation you want to perform.\n\n";
    std::cout<<"1) Add\n";
    std::cout<<"2) Subtract\n";
    std::cout<<"3) Multiply\n";
    std::cout<<"4) Divide\n\n";
    
    std::cin>>option;
    

    double num1{};
    double num2{};
    std::cout<<"Please enter your first number.\n";
    std::cin>>num1;
    std::cout<<"Please enter your second number.\n";
    std::cin>>num2;

    switch (option)
    {
        case 1:
        std::cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num1+num2<<" \n";
        return 0;
        case 2:
        std::cout<<"Difference of "<<num1<<" and "<<num2<<" is: "<<num1 - num2<<" \n";
        return 0;
        case 3:
        std::cout<<"Product of "<<num1<<" and "<<num2<<" is: "<<num1*num2<< "\n";
        return 0;
        case 4:
            if (num2 == 0)
            {
            std::cout<<"Zero division error.\n";
            break;
            }

            else{
            std::cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num1/num2<< "\n";
            return 0 ;
            }

        default:
        std::cout<<"Invalid entry! Try again. \n";
        return 0;


    }



    return 0;
}