#include <iostream>

/*
    GPA Calculator
    --------------------
    Takes 8 grades from the user
    calculates the average (GPA)
    and prints a message based on the result
*/

int main()
{

    int note[8];
    double GPA;

     // Input section
     std::cout << "Enter 1st note: ";
     std::cin >> note[0]; // Note 1

     std::cout << "Enter 2nd note: ";
     std::cin >> note[1]; // Note 2

     std::cout << "Enter 3rd note: ";
     std::cin >> note[2]; // Note 3

     std::cout << "Enter 4th note: ";
     std::cin >> note[3]; // Note 4

     std::cout << "Enter 5th note: ";
     std::cin >> note[4]; // Note 5

     std::cout << "Enter 6th note: ";
     std::cin >> note[5]; // Note 6

     std::cout << "Enter 7th note: ";
     std::cin >> note[6]; // Note 7

     std::cout << "Enter 8th note: ";
     std::cin >> note[7]; // Note 8

     // Calculate GPA (average)
     GPA = (note[0] + note[1] + note[2] + note[3] + note[4] + note[5] + note[6] + note[7]) / 8.0;


     std::cout << "\nYour GPA is: " << GPA << std::endl; // print GPA to screen


     // Evaluate result
     if (GPA >= 90)
        std::cout << "Excellent! You got an A." << std::endl;
     else if (GPA >= 80)
        std::cout << "Great job! You got a B." << std::endl;
     else if (GPA >= 70)
        std::cout << "Good effort! You got a C." << std::endl;
     else if (GPA >= 60)
        std::cout << "You passed with a D." << std::endl;
     else
        std::cout << "You failed (F). Try harder next time." << std::endl;


   return 0; // end
}
