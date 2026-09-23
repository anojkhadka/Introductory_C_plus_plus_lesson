#include <iostream>
#include <string>

// ************************------Passing function argument by constant reference------******************
// *****************************************************************************************************
/* This is very important especially while working with numerically intensive program or any other program where large data is used. Normally,
every time we pass argument inside a function call it creates a separate copy of the argument. This is not an issue in simple small program. 
However, for program where function argument calling is made to large data set, it will creat a copy every time it need to make a call. This 
will demand huge space in the memory and put strain of the program. Remedy to this is we use "const reference" to avoid making copy of variable
durig function call. This way we don't provide any strain to the memory space and hence the program becomes efficient. 

It may not be evident in this example code below. But imagine a program where you need to access million data points during every function call
and you do that more often.  If we don't use 'const varname&' i.e. constant variable referencing, everytime we make a function call 
printName(fname) will make a copy of those million data point while passing the argument inside function. This will straing the memory space.
However, if we pass our function argument 'name_var' as constantly referenced variable('const std::string&') as done here no copies of it will
be made while making a function call as printName(fname). Instead it will directly reference the variable 'fname'. */



void printName(const std::string& name_var)                 // Constant referencing of function parameter created.
{
    std::cout<<"\nYour name is: "<<name_var<<".\n\n";
}

int main()
{
std::string fname = "Jessica Berry";
printName(fname);                      // In this case no copy of function argument 'fname' is created. Instead it directly references to variable.
return 0;
}