#include <iostream>
#include <string>
#include <fstream>     // This library is used for file handling.

/*In this exercise we learn how to open and write text in a new text file. We also do small test to
check if the file we are trying to write already exists. This, however, is not absolute check. 
Remember you can also handle other kind of files(e.g. binary) as well besides text files.*/

int main()

{
    std::string filename = "test.txt";           // Naming the text file. 

    std::ofstream file(filename);     // Opening file using 'ofstream' function from 'fstream' library

    if (!file.is_open())              // Simple check to see if file opening fails.
    {
        std::cerr<<"Error opening file!";

        return 1;                      // return value of 1 will exit the code.
    }

    file<<"This is wonderful\n";      // Writing text to the file
    file<<"Let's learn C++\n";

    return 0;

}
