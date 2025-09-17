/*
* Chris
* Lab 1
* Cosc 1436 Fall 2025
*/
#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World " << "" << "Chris\n";
    std::cout << "You are " << 20 << " years old" << std::endl;
    std::string name;
    name = "Chris";
    std::cout << "Hello World " << name;
    int age;
    age = 20;
    std::cout << "You are " << age << " years old";
    int length, width;
    length = 10;
    width = 20;
    int area;
  area=length * width;
    std::cout << "Area of a rectangle is " << area << std::endl;
    double pi;
    pi = 3.14159; 
    char letterGrade;
        letterGrade = 'A';
        bool isPassing;
        isPassing = true;
        area = length * width; 
      //length = 100;
        //width = 100;
        length = width = 100;
        //std::cout << length; //Verify length is correct]
        length = length + 10; 
        width = width - 20;

        int result = 10 / 3; // = 3 
        
        int  remainder = 10 % 3; // = 1 

        int negativeLength = -length;

        //- lifetime of a variable
        {//Starting a new block 
            int newVariable1 = 10;
            double newVariable2 = 45.7;
        };

        {
            char newVariable1 = "A";
        }
        //std::cout << newVariable1; 

        //Strings C++
        //  Assign value using assignment operator 
        std::string studentName;
        studentName = "Bob";

        studentName = studentName + "Wilson";

        //Literal - great for static values 
        //Variables - great for writable values 
        //Named constant- variable that has a constant value 
        const double pi = 3.14159;

            // A = Pi * R2
            double areaCircle = pi * (radius * radius);

        const int numberOfLabGrades = 5;
        const int numberOfExamGrades = 4;



}

