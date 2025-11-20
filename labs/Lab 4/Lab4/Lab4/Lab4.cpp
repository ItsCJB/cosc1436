#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 100;
    int numbers[MAX];
    int count = 0;
    int input;
    char choice;

    // Display program info
    cout << "Lab 4 - COSC 1436" << endl;
    cout << "Student: Your Name" << endl;
    cout << "Spring 2025" << endl;

    // Get numbers from user
    cout << "Enter numbers (0 to stop):" << endl;
    while (count < MAX)
    {
        cout << "Enter a number: ";
        cin >> input;

        if (input == 0)
            break;
        else if (input < 0)
            cout << "You must enter a value >= 0" << endl;
        else
        {
            numbers[count] = input;
            count++;
        }
    }

    // Main menu loop
    do
    {
        cout << endl;
        cout << "Main Menu" << endl;
        cout << "A)dd Numbers" << endl;
        cout << "L)argest" << endl;
        cout << "S)mallest" << endl;
        cout << "M)ean" << endl;
        cout << "V)iew Numbers" << endl;
        cout << "Q)uit" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 'A' || choice == 'a')
        {
            while (count < MAX)
            {
                cout << "Enter a number to add (0 to stop): ";
                cin >> input;
                if (input == 0)
                    break;
                else if (input < 0)
                    cout << "You must enter a value >= 0" << endl;
                else
                {
                    numbers[count] = input;
                    count++;
                }
            }
        } else if (choice == 'L' || choice == 'l')
        {
            int largest = numbers[0];
            for (int i = 1; i < count; i++)
                if (numbers[i] > largest)
                    largest = numbers[i];
            cout << "Largest = " << largest << endl;
        } else if (choice == 'S' || choice == 's')
        {
            int smallest = numbers[0];
            for (int i = 1; i < count; i++)
                if (numbers[i] < smallest)
                    smallest = numbers[i];
            cout << "Smallest = " << smallest << endl;
        } else if (choice == 'M' || choice == 'm')
        {
            int sum = 0;
            for (int i = 0; i < count; i++)
                sum += numbers[i];
            double mean = (double)sum / count;
            cout << fixed << setprecision(4);
            cout << "Mean = " << mean << endl;
        } else if (choice == 'V' || choice == 'v')
        {
            for (int i = 0; i < count; i++)
            {
                cout << numbers[i] << "\t";
                if ((i + 1) % 10 == 0)
                    cout << endl;
            }
            cout << endl;
        } else if (choice == 'Q' || choice == 'q')
        {
            cout << "Exiting program..." << endl;
        } else
            cout << "Invalid choice!" << endl;

    } while (choice != 'Q' && choice != 'q');
    return 0;
}
