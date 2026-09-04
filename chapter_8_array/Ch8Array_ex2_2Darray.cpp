#include <iostream>
#include <string>      // Need this library to defind string(words) data type below.


/* Below we create two dimensional array with two rows and three columns. As in numpy we keep our element inside nested brackets.
The only difference is here we use curly brackets. Even if we put elements inside a single bracket array of specified dimension
will still be created until the total number of elements(6 in this case) is equal or less than the product of dimension
(2 times 3 here) of array.   Indexing starts from 0. Remember C++ regular array can't have different type of elements. All the element 
in an array should be of same data type. */

int matrix_arr[2][3] = {{2, 5, 11},{7, 5, 9}};  //2 by 3 array.
std::string fruits_arr[3][2] = {{"Apple", "Orange"}, {"Kiwi", "Dragonfruit"}, {"Banana", "Grapes"}};  //3 by 2 array


int main()
{
    std::cout<<"\nElement in second row second column is: "<<fruits_arr[1][1]<<"\n"; //Accesing element in an array.

    fruits_arr[1][1] = "Papaya";   // We changed the element of array. 
    
    std::cout<<"\nElement in second row second column now is: "<<fruits_arr[1][1]<<"\n"; //Changing element in an array.


    std::cout<<"\nThis is an example of 2D array.\n\n";

    for (int i = 0; i<2; i++)                   // Using nested for loop to access the elements of array defined above. 
    {
        for (int j = 0; j< 3; j++)
        {
            std::cout<<matrix_arr[i][j]<<"  ";   //array element above accessed by indexing.
        }
        std::cout<<"\n";
    }
    return 0;
}