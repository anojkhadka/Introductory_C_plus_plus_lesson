#include <iostream>
#include <string>      // Need this library to defind string(words) data type below.


/* Below we create two simple array. One is with 'double' data type and other is with 'string' data type.*/

double price_arr[5] = {10.5, 25, 5.75, 1.25, 3.95};
std::string goods_arr[5] = {"cake", "JackDaniel", "Brocolli", "Candy", "Gas"};


int main()
{
    std::cout<<"\nItem\t\tPrice($)\n\n";

    for (int i = 0; i<5; i++)
    {
        std::cout<<goods_arr[i]<<"\t\t"<<price_arr[i]<<"\n";   //array element above accessed by indexing.
    }
    return 0;
}