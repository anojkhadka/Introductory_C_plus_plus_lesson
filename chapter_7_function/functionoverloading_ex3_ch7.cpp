#include <iostream>
int student_avg(int age1, int age2,int age3);
double student_avg(double subject1, double subject2, double subject3);

/* This is a simple function. void function is used when we don't have any return value in a function. As here this function
named ''greeting' will only print out a statment. */

int student_avg(int age1, int age2, int age3)
{
    return (age1 + age2 + age3)/3;
}

double student_avg(double subject1, double subject2, double subject3)
{
    return (subject1 + subject1 + subject1)/3;
}

int main()
{
    int stdnage1{}, stdnage2{}, stdnage3{};
    std::cout<<"Pleae enter age of first student\n";
    std::cin>>stdnage1;
    std::cout<<"Pleae enter age of second student\n";
    std::cin>>stdnage2;
    std::cout<<"Pleae enter age of third student\n";
    std::cin>>stdnage3;
    double age_avg = student_avg(stdnage1, stdnage2, stdnage3);
    std::cout<<"Average age of student is "<<age_avg<<" years.\n";

    double stdnum1{}, stdnum2{}, stdnum3{};
    std::cout<<"Pleae enter mark obtained by first student\n";
    std::cin>>stdnum1;
    std::cout<<"Pleae enter mark obtained by second student\n";
    std::cin>>stdnum2;
    std::cout<<"Pleae enter mark obtained by third student\n";
    std::cin>>stdnum3;
    double num_avg = student_avg(stdnum1, stdnum2, stdnum3);
    std::cout<<"Average mark obtained by student  is .\t"<<num_avg<<"\n";

    return 0;
}