#include <iostream>
#include <string>
#include <fstream>

/*Here I write a simple program where I take user input of their name and age and write them into a text file. This is just a simple program to learn how to write user input into a file. There are lots of things that 
can be improved. For example, we can add guardrail to test user's input is valid. */

int main()

{
    std::string name;
    
    int age;                                         // Defining age variable
    int count=0;                                     // Defining counter to restrain while loop later

    std::ofstream file("namerecords.txt");           // Opening a file named 'namerecords.txt' to write text in it. 
    
    
    // This section is just test if file does not open for some reason.
    if (!file.is_open())
    {
        std::cerr<<"Error opening file\n";
        return 1;                                     // This will cause program to exit if file does not open. 
    }

    
    file<<"Name\t\tAge\n";                            // Creating columns 'Name' and 'Age' in the text file

    
    // While loop initiated to as five users to input their name and age
    while(count<5)
    {
        std::cout<<"Please enter your name: \t";      // Display message asking to enter their name
        std::cin>>name;                               // Getting input from user and saving it to name variable
        file << name<<"\t";                           // Writing that name into file
        std::cout<<"Please enter your age: \t";
        std::cin>>age;
        file << "\t"<<age<<"\n\n";
        count+=1;                                     // Increasing count value by 1 to stop while loop as the count value exceeds 4.
    }

return 0;
}
