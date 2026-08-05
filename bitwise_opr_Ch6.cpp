#include <iostream>

/*Though we don't see use of bitwise operator quite often it is used to program microprocessors, encoders, etc. Before we delve in to
bitwise operator it is important to know about the binary number system. Computer reads any number or character as binary digits(0 and 1).
ALSO IMPORTANT BITWISE 'AND', 'OR' OPERATORS AND LOGICAL 'AND', 'OR' OPERATORS ARE DIFFERENT.  Logical 'and operator' is represented as 
'&&' whereas bitwise 'and operator' is represented by '&'. Similarly, logical 'or operator' is represented by '||' whereas bitwise 
'or operator' is represented by '|'. 

Next thing is how it works. When we use bitwise operators program reads the input as a binary digits and then compares them as per the 
operator specified. For instance, in the example below, binary equivalent of 15 is 1111 and that of 8 is 1000. Now compare (1111) and (1000) 
for each digit pair starting from left. For the last three column 1 & 0 is 0 because and operaotr is true(i.e. 1) only if both are 1. First 
column is 1 as both the digits of 15 and 8 are 1 in the first column. So as a result we get bitwise and for '15 & 8' as 8 because the 
result of comparison is 1000 which is equivalent to 8 in decimal. Simlarly other bitwise operator can be explained. */

int main()
{

int a{15};  // binary value of a is 1111
int b{8};   // binary value of a is 1000

// 1. Bitwise and(&). True(1) only if both/all of them are true(1)

std::cout<<"\n Bitwise and operator  between 15 and 8 is: "<< (a & b);  // Should give output 8

// 2. Bitwise or(|). True(1) if any one of them is true(1).

std::cout<<"\n Bitwise or operator  between 15 or 8 is: "<< (a | b);  // Should give output 15

// 3. Bitwise xor(^). True(1) if and only if either of them is true(1) but not both. Different from 'or' operator in a sense that 
// or is true even if both are true(1) but 'xor' is true(1) only if either of them is true(1) 

std::cout<<"\n Bitwise xor operator  between 15 xor 8 is: "<< (a ^ b);  // Should give output 7

// 4. Bitwise left shift operator(<<) 

/* It will first convert left operand(number) into binary digit and then shift each digit leftward by 
an amount of step equal to the number in right. For example, 15<<8. Here 15 is 1111 and then each of these digits 1 will be moded 8 steps
leftwards and rest of the places will be replaced with 0 if no previous digits exists. In this example, after shifting each digits 1111
by 8 steps leftwards we get 111100000000 which is 3840 in decimal system. 

Remember, to not be confused with less than and greater than operator take the symbol as direction it is pointing towards to make shift.*/

std::cout<<"\n Bitwise left shift operator  between 15 and 8 is: "<< (a << b);  // Should give output 3840

// 5. Bitwise right shift operator(<<). Similar to left shift but now shift is made towards rightwards.

std::cout<<"\n Bitwise right shift  between 15 and 8 is: "<< (a >> b);  // Should give output 0

// 6. Bitwise one's replacement operator(~). 

/*Flips every bit 0 to 1 and 1 to 0.
Warning: C++ uses 32 bit system i.e. any number is represented by 32 bits so sometimes we might confuse that we are getting wrong resutl.
For example ~8(1000) should be (0111) which is 7 but that is only because we represented 8 with just 4 bits 1111. Easiest way to remember
~ operator is it follows the rule ~x = -(x+1).*/

std::cout<<"\n Bitwise ones replacement for 8 is: "<<(~b);  // Should give output 0

return 0;
}