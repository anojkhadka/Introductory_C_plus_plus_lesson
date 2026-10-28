#include <iostream>
#include <fstream>
#include <string>

/* In this example we learn how to open and read content inside a text file. 'fstream' library is used to read/write contents inside a 
text file. It also works with binary files as well. This method of using while loop to read the content of file is OK for normal files.
However, where computational efficiency matters, especially, while working with huge data files use other efficient approaches.*/


int main()
{
    std::ifstream file("test_file.txt");                // Opening 'test_file.txt' using 'ifstream' function in 'fstream' library. 'file' is
                                                        // stream variable and can have any name. Its like 'with open(filename.txt)' in python.

    if (!file)                                          // 'if conditional' statement used to check if file is opened. It is only for sanity
    {                                                   // check to see if file exists, but important.
        std::cout<<"\n Failed to open file.\n";
        return 1;                                       // 'return 1' causes program to exit main() hence ending the program.
    }
    
    std::string line;                                   // 'line' is an empty variable of 'string' type that can store multiple words in it.

    while(std::getline(file, line))                     // 'while loop' used to read contents inside the file. 'getline' function will read from
    {                                                   // stream, defined as 'file' here, and store it to the variable 'line' until it hits the
        std::cout<<line<<"\n";                          // newline i.e. end of the line in the file. std::cout will then display whatever is 
    }                                                   // stored inside the variable line. 

    file.close();                                       // Closing file is actually not required in modern C++. It is automatically done. 
    return 0;


}
