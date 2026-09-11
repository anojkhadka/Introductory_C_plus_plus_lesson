#include <iostream>
#include <string>

/* In this example I will show some commonly used string functions.*/

int main()
{

// str.length() - Returns number of character inside the string variable

std::string fname = "Rebecca";
std::cout<<" Rebecca has "<<fname.length()<<" characters in it.\n\n";

// str.at(i) - Returns character at index position i.

std::cout<<" Character in third position in variable Rebecca is "<<fname.at(2)<<"\n\n";

// Concatenating strings: Strings can be joined either using + operator or using str.append() function

std::string lname = "Smith";
std::cout<<"Her full name is "<<fname + lname<<".\n\n";      
std::cout<<" Her name is "<<fname.append(lname)<<". \n\n";

// str.erase(start, end) -- erases characters starting from index position specified by 'start' until
// index position 'end' from str variable :

std::cout<<"Lets keep only initial from last name:  "<<lname.erase(1,5)<<"\n";
return 0;

}