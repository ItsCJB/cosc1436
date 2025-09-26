#include <iostream>
#include <string>
#include <iomanip>
int main()
{
//display main menu 
std::cout << "Movie Library" << std::endl;
std::cout << "_______________" << std::endl;
std::cout << "A)dd Movie" << std::endl;
std::cout << "V)iew Movies" << std::endl;
std::cout << "E)dit Movie" << std::endl;
std::cout << "D)elete Movie" << std::endl;
std::cout << "Q)uit" << std::endl;

char choice
std::cin >> choice;
//Validate Input 
if (choice == "A" || choice == "v")

    std::cout << " Add not implmented" << std::endl;
else if (choice == 'V' || choice 'v')

std::cout << " View not implmented" << std::endl;
else if (choice == 'E' || choice 'e') 

std::cout << " Edit not implmented" << std::endl;
else if (choice == 'D' || choice 'd')
std::cout << " Quit not implmented" << std::endl;
else if (choice == 'Q' || choice 'q')
switch (choice)
{
    case 'A':std::cout << " Add not implmented" << std::endl; break;
    case 'a': std::cout << " Add not implmented" << std::endl; break;

    case 'V': std::cout << " View not implmented" << std::endl; break;
    case 'v': std::cout << " View not implmented" << std::endl; break;

    case 'D': std::cout << " Delete not implmented" << std::endl; break;
    case 'd': std::cout << " Delete not implmented" << std::endl; break;

    case 'E':std::cout << " Edit not implmented" << std::endl; break;
    case 'e':std::cout << " Edit not implmented" << std::endl; break;
         
    case 'Q': return 0;
    case 'q': return 0;
    default: std::cout << "Invaid Choice" << std::endl; break;
};



 //Movie details
    std::string title;          //Required
    std::string description;    //Optional
    int runLength;              //Required, 0
    int releaseYear;            //Optional, but between 1900-2100
    double userRating;          //Optional, 1.0-10.0
    bool isClassic;             //Required, false

    //Get movie details
    std::cout << "Enter movie title: ";
    std::getline(std::cin, title);

    //Title is required
    bool isEmpty = title == "";
    if (isEmpty)
        std::cout << "Title is required" << std::endl;

    std::cout << "Enter the run length (in minutes): ";
    std::cin >> runLength;
    if (runLength < 0)
 
        std::cout << "Run length must be at least 0" << std::endl;
        runLength = 0;
   

    std::cout << "Enter the release year (1900-2100): ";
    std::cin >> releaseYear;
    /*if (releaseYear < 1900)
    
        std::cout << "Release year must be at least 1900" << std::endl;
        releaseYear = 1900;
     else if (releaseYear > 2100)
    
        std::cout << "Release year must be between 1900 and 2100" << std::endl;
        releaseYear = 1900;
    */

    // Logical AND &&   Eb && Eb => bool
    // Logical OR ||    Eb || Eb => bool
    // Logical NOT !    !Eb => bool
    if (releaseYear < 1900 || releaseYear > 2100)
   
        std::cout << "Release year must be between 1900 and 2100" << std::endl;
        releaseYear = 1900;
    

    std::cout << "Enter the optional description: ";

    std::getline(std::cin, description);

    // Validate userRating
    std::cout << "Enter the optional user rating (1.0-10.0): ";
    std::cin >> userRating;
    if (userRating < 1.0 || userRating > 10.0)
    
        std::cout << "Rating must be between 1.0 and 10.0" << std::endl;
        userRating = 1.0;
    
    /*if (userRating < 1.0)
    
        std::cout << "Rating must be between 1.0 and 10.0" << std::endl;
        userRating = 1.0;
     else if (userRating > 10.0)
    
        std::cout << "Rating must be between 1.0 and 10.0" << std::endl;
        userRating = 1.0;
    */

    std::cout << "Is this a classic (Y/N)? ";
    std::string input;
    std::cin >> input;

    // if (Eb) S [ else S ] ;
    // Else associates with nearest preceding if
    // Nested if
      // if (E1) 
         //if (E2) 
  //  if (E3)
            // S (E1, E2 and E3 must be true)
    //if-else-if
      // if (E1)
       //  S
      // else if (E2)
       //  S  (E1 is false and E2 is true)


    //if (_strcmpi(input.c_str(), "Y") == 0)
       // isClassic = true;
    //if (_strcmpi(input.c_str(), "N") == 0)
     //   isClassic = false;
   /// else
      // std::cout << "You must enter either Y or N";*/
  // if (_strcmpi(input.c_str(), "Y") == 0)
      //  isClassic = true;
  //  else
     //   if (_strcmpi(input.c_str(), "N") == 0)
           // isClassic = false;
     //   else
           // std::cout << "You must enter either Y or N";
    //view movie 
    // title(year)
    //run length( min)
    // User rating = ##
    //IS classic?
        // [Dscription]
    std::cout << std::fixed << std::setprecision(1) << std::endl;
    std::cout << title << " (" << releaseYear << ")" << std::endl;
    std::cout << "Run Length " << runLength << "mins" << std::endl;
    std::cout << "User rating " << runLength << std::endl;
    //std::cout << "is Classic? " << isClassic << std::endl;
    std::cout << "is Classic? Yes" << std::endl;
    std::cout << "is Classic? No" << std::endl;
    if (description != "")
        std::cout << description << std::endl;
    std::cout << std::endl;
    if (isClassic)
       // classicIndicator = "Yes";
    //else
        //classicIndicator = "No";
        //Conditional_expression ::= Eb? Et : Ef
      // std::string classicIndicator = isClassic ? "yes" : "No";
               // std::cout << "Is Classic?" << classicIndicator << std::endl;
}