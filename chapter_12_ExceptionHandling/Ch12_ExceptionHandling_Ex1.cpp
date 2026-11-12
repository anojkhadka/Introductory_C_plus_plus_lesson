#include <iostream>


/* A very simple program to explain the concept of exception handling in C++. Exception handling in C++ involves use of three keywords: 'try', 'throw' and 'catch'. try-block will look if any unexpected behavior in the code exists.
If it detects any unexpected exception than will alert the program via 'throw' statement. Once it alerts with throw statement anything beyond 'throw' statement inside try block will be skipped. It will then try to look for matching
throw variable in the catch-blcok. For instance in this code,  throw has strings("No thank you!"). It will try to match with the catch block that refers to similar variable type. In this case there is only one catch statement so it's
no brainer that it will has one place to look at. However, there can be multiple catch-blocks in a program. Once the variable type match in the catch block it will assign the throw value with the variable defined in the catch block.
throw value in this cdoe is "No thank you!" and catch block has character type variable refered as pointer in this case with 'txtvar'.  As these are matching types statements inside catch-block will now be exectued and txtvar will
store value thrown by throw .i.e to say 'txtvar' will store "No thank you!" in its memory address. Remember pointers refer to the memory address of the variable rather than variable itself. After the statements inside catch-block
is executed program exits out of the catch block and rest of the code will be executed as usual. Here in this example, last cout statement will be executed. 

What happens if throw value does not have a matching catch value? In that case compiler will abort the program so its important to have a matching catch block for the throw statement.  */
int main()
{
    try
    {
    std::cout<<"Let's try this buddy.\n";                    // This like will execute.
    throw "No thank you!";                                   // Alerts with throw statement.
    }
    catch(const char* txtvar)                                // Matching catch with the throw in try block.
    {
        std::cout<<"Error: "<<txtvar<<"\n";                  // Display the message:  Error: No thank you!
    }

    std::cout<<"Program continues as usual.\n";              // From here on program executes as usual.

    return 0;
    
}
