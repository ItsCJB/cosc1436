/*
 * Lab 3 - Falling Distance
 * Chris Brink
 * COSC 1436 Fall 2025
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const double g = 9.8; // gravity in m/s^2

// Function Prototypes
void DisplayProgramInfo();
int GetFallingTime();
char GetUnits();
double FallingDistance(double time);
double ConvertToFeet(double meters);
void DisplayTable(int seconds, char unit);

// Main function
int main()
{
    DisplayProgramInfo();

    int seconds = GetFallingTime();
    char unit = GetUnits();

    DisplayTable(seconds, unit);

    cout << endl << "Done. Have a nice day!" << endl;
    return 0;
}

// Display program info
void DisplayProgramInfo()
{
    cout << "Falling Distance Calculator" << endl;
    cout << "Chris Brink" << endl;

    cout << "COSC 1436 "<< endl;
    cout << "Fall 2025" << endl;
}

// Prompt user for falling time
int GetFallingTime()
{
    int time = 0;
    cout << "Enter falling time in seconds (1-60): ";
    cin >> time;

    while (time < 1 || time > 60)
    {
        cout << "ERROR: Time must be between 1 and 60. ";
        cout << "Try again: ";
        cin >> time;
    }

    return time;
}

// Prompt user for units
char GetUnits()
{
    char unit;
    cout << "Do you want the results in meters or feet? (m/f): ";
    cin >> unit;

    while (unit != 'm' && unit != 'M' && unit != 'f' && unit != 'F')
    {
        cout << "ERROR: Enter m for meters or f for feet: ";
        cin >> unit;
    }

    return unit;
}

// Calculate falling distance in meters
double FallingDistance(double time)
{
    double distance = 0;
    distance = 0.5 * g * time * time;

    return distance;
}

// Convert meters to feet
double  ConvertToFeet(double meters)
{
    double feet = meters * 3.28084; // extra decimal, could be rounded later
    
    return feet;
}

// Display table of falling distance and velocity
void DisplayTable(int seconds, char unit)
{
    cout << "\nSeconds    Distance    Velocity" << endl;
    cout << "=============================" << endl;

    double distance = 0;
    double velocity = 0;
    for (int t = 1; t <= seconds; t++)
    {
        distance = FallingDistance(t);
        velocity = g * t;
        if (velocity > 90) velocity = 90; // terminal velocity

        if (unit == 'f' || unit == 'F')
        {
            distance = ConvertToFeet(distance);
            velocity = ConvertToFeet(velocity); // small mistake: shouldn't convert velocity, but student did
        }

        cout << t << "          "
            << fixed << setprecision(2) << distance
            << " " << unit
            << "       " << velocity
            << " " << unit << "/s" << endl;
    }
}
