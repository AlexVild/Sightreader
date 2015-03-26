/* Alex Vild
SIGHTREADER Source Code version 0.1.1
Created: 10/24/2014
Last Updated: 10/24/2014
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "staff.h"

using namespace std;

int main()
{
// Initialization
    staff new_staff; // Creates staff object to be used and randomized.
    char choice; // Choice used to continue program and generate more bars.

    // Startup
    cout << "           _______________________________________  " << endl
         << "           |  | | | |  |  | | | | | |  |  | | | |  |" << endl
         << "           |  | | |S| i| g|h|t|r|e|a| d| e|r| | |  |" << endl
         << "           |  | | | |  |  | | | | | |  |  | | | |  |" << endl
         << "           |  |_| |_|  |  |_| |_| |_|  |  |_| |_|  |" << endl
         << "           |   |   |   |   |   |   |   |   |   |   |" << endl
         << "           |   | A | L | E | X |   | V | I | L | D |" << endl
         << "           |___|___|___|___|___|___|___|___|___|___|" << endl << endl << endl;


    cout << "Welcome to Sightreader! This program will generate random bars of quarter notes that"
         << " you can use to hone your sightreading abilities!" << endl
         << "===============================================================" << endl;

    system("pause");

    do
    {
        new_staff.create();
        new_staff.display();
        cout << endl << endl << "Generate 4 new bars? (Press Enter to continue, anything else to quit)";
        cin.get(choice);

    }
    while (choice == '\n');

    // Exiting statement and pause

    cout << "Thanks for using Sightreader version 0.1.1! See you next time!" << endl << endl << "-------------" << endl;
    system("pause");
    return 0;
}
