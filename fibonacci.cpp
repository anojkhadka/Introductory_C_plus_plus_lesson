#include <iostream>

int main()
{
    int initial{0};
    int test_num{};
    int first_num{1};
    int x_n_plus_1{};
    int x_n_minus_1{};
    int x_n{};

/* 
Here, I used 'int' data type which is ok for fibonacci sequence until 46th number. Beyond 
 that i get wrong value because in C++ 32 bit signed integer can only store value upto 
 2,147,483,647 and beyond that it wraps around and gives wrong value. For instance, 47th
 fibonacci number is 2,971,215,073 and this is more than limit 32 bit signed integer can
 store that is 2,147,483,647. This program shows how data type can be significantly
 important in some program and mysteriously give wrong answer if not well tested out. 
 */

    std::cout<<"Please enter any integer number upto which you want to know fibonacci number. \n\n";
    std::cin>>test_num;
    std::cout<<"Serial number \t fibonacci number\n";
    for(int count{0}; count<=test_num; count++)
        {

            if(count==0)
            {
                x_n_plus_1 = x_n + x_n_minus_1;
                std::cout<<count+1<<"\t\t"<<x_n_plus_1<<"\n";
            }

            else if(count == 1)
            {
                x_n_plus_1 = initial + first_num;
                std::cout<<count+1<<"\t\t"<<x_n_plus_1<<"\n";                

            }

            else if(count == 2)
            {
                x_n= first_num;
                x_n_minus_1 = initial;
                x_n_plus_1 = first_num + initial;
                std::cout<<count+1<<"\t\t"<<x_n_plus_1<<"\n";                
                x_n = x_n_plus_1;
                x_n_minus_1 = x_n;
            }
            else
            {

                 x_n_plus_1 = x_n + x_n_minus_1;
                std::cout<<count<<"\t\t"<<x_n_plus_1<<"\n";                
                x_n_minus_1 = x_n;
                x_n = x_n_plus_1;

            }

        }
    return 0;
}