#include <iostream>
#include <string>

// ************************------Creating a 'struct' variable------******************
// **********************************************************************************

/* There are standard variable types in C++ such as int, double, char, etc. But imagine you write a program where certain quantities
keep occuring regularly as a group. For instance, in a store you have thousands of goods with three things common. They all have name,
quantity and price rate. Instead of creating a separate variable for each individual quantity we could bunch them up into a one 
single variable type that defines item, price and quantity as single entity. This means we can define our own 'item' variable type.
Similarly, imageine a spherical polar co-ordinate system where radiu, polar angle and azimuthal angle represent co-ordinat location
in a spherical system. Instead of creating separate three different variable types we could bunch them up into one single variable
type. This is the main idea behind 'struct'. Every time you come up with a thought that certain quantities can be grouped into one 
single entity you are probably looking to create a struct variable type.

We can also define a member function inside a structure. It can be acessed similar to individual quantitites defined inside struct 
variable. So, structure in C++ can be useful when we want to bunch up quantities into a single umbrella. 
*/



struct items{std::string goods; double price; int quantity;             // Defining a structure variable of its own type

    
    double total_price()                                                // Defining a member function within structure.
    {
        return price*quantity;
    }
};         

int main()
{
    items food{"VegPizza", 16.99, 10};                                  // Declaring a struct variable of type 'items'.

    std::cout<<"\nItem name is: "<<food.goods<<"\n\n";                  // Accessing a struct variables defined above
    std::cout<<"Price of the item is: "<<food.price<<"\n\n";
    std::cout<<"Amount of item is: "<<food.quantity<<"\n\n";
    std::cout<<"Total price is: "<<food.total_price()<<"\n\n";          // Accessing a member function from structure. 

    return 0;
}