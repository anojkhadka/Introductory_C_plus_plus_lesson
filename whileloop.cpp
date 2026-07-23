#include <iostream>

int main()
{
    int count{0};
    int test_num{};
    std::cout<<"Please enter a number. \n";
    std::cin>>test_num;

    while(test_num<=10)
    {
        std::cout<<"Loop "<<test_num++<<"\n";
        if(count>10)
        {
            break;
        }

    }

    return 0;
}