#include <iostream>;
/* Refer to the note for detailed explaination. In a nutsheel this is an example of a tree
recursion that has three branches for each node until it ends. */

void f(int n)
{
std::cout<<"F("<<n<<")'s stack frame pushed \n\n";
if (n>1)
{
    f(n-1);
    f(n-1);
    f(n-1);

}
std::cout<<"F("<<n<<")'s stack frame removed \n\n";

}

int main()
{
    f(3);
    return 0;
}