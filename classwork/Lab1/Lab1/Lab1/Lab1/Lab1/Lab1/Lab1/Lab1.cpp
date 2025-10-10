/*
* Christopher Brink
* Lab 1
* COSC 1436 Fall 2025
*/


#include <iostream> 
#include <string>
#include <iomanip>

int main()
{
//show info at start  
    std::cout << "COSC 1436 Fall 2025" << std::endl;
    std::cout << "Lab 1 - Grade Calc" << std::endl;
    std::cout << "StudentName" << std::endl;

    //declare variable for the name of the students 
    std::string StudentName;

    // ask the user/student for their name 
    std::cout << "please enter name";
    std::getline(std::cin, StudentName);

    //Use Variables for the lab grades when complete
    double lab1, lab2, lab3, lab4;

    //tell user/student to intr the grades in the space below 
    std::cout << "Please enter lab 1 ";
    std::cin >> lab1;
    std::cout << "Please enter lab 2";
    std::cin >> lab2;
    std::cout << "Please enter lab 3 ";
    std::cin >> lab3;
    std::cout << "Please enter lab 4";
    std::cin >> lab4;



    //Exam Grades 
    double exam1, exam2, exam3;

 //ask user-student to inter exam grades;

    std::cout << "Please enter exam 1";
    std::cin >> exam1;
    std::cout << "Please enter exam 2";
    std::cin >> exam2;
    std::cout << "Please enter exam 3 ";
    std::cin >> exam3;



  //Participation and Final Exam are right here 
    double participation, FinalExam;

    //Tell the user for their participation and Final exam grades

    std::cout << "Enter Final Exam Grades";
    std::cin >> participation;
    std::cout << "Enter participation Grades";
    std::cin >> FinalExam;


        //Averages and class final
    double labaverage = (lab1 + lab2 + lab3 + lab4) / 4;
    double examaverage = (exam1 + exam2 + exam3) / 3;
    double classaverage = (labaverage * 0.65) + (examaverage * 0.2) + (participation * 0.05) + (FinalExam * 0.10);


// Set  to show 2 decimal places
    std::cout << std::fixed << std::setprecision(2);


    // Display lab grades and average
    std::cout << std::endl << StudentName << " The lab grades are" << std::endl;
    std::cout << "lab 1=" << lab1 << std::endl;
    std::cout << "lab 2=" << lab2 << std::endl;
    std::cout << "lab 3=" << lab3 << std::endl;
    std::cout << "lab 4 =" << lab4 << std::endl;


    //Show exam grades and averages 
    std::cout << std::endl << StudentName << " The exam grades are" << std::endl;
    std::cout << "exam 1 =" << exam1 << std::endl;
    std::cout << "exam 2 =" << exam2 << std::endl;
    std::cout << "exam 3 =" << exam3 << std::endl;

    //Show participation and final exam 
    std::cout << std::endl << StudentName << "The other grades are" << std::endl;
    std::cout << "Participation = " << participation << std::endl;
    std::cout << "FinalExam" << FinalExam << std::endl;
    //Show averages and final class grade
    std::cout << std::endl << StudentName << ", Class grade is" << std::endl;
    std::cout << "Lab average (65%) = " << labaverage << "%" << std::endl;
    std::cout << "Exam average (20%)= " << examaverage << "%" << std::endl;
    std::cout << "Participation (5%)= " << participation << "%" << std::endl;
    std::cout << "Final exam (10%)= " << FinalExam << "%" << std::endl;
    std::cout << "Class average =" << classaverage << "%" << std::endl;
}
