/* Alex Vild
SIGHTREADER Source Code version 0.1
Created: 10/24/2014
Last Updated: 10/24/2014
*/

#include "staff.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void staff::create()
{
    srand(time(NULL));
    int random_number;
    for (int i = 0; i < 16; i++) // i = column #
    {
        random_number = rand() % 11;
        for (int j = 0; j < 11; j++) // This for loop sets one quarter note randomly to the staff. j = row #
        {
            switch (j)
            {
                case 0:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                case 1:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = "-";
                    }
                    break;
                case 2:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                case 3:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = "-";
                    }
                    break;
                case 4:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                case 5:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = "-";
                    }
                    break;
                case 6:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                case 7:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = "-";
                    }
                    break;
                case 8:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                case 9:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = "-";
                    }
                    break;
                case 10:
                    if (j == random_number)
                    {
                        qtr_note[j][i] = "O";
                    }
                    else
                    {
                        qtr_note[j][i] = " ";
                    }
                    break;
                default:
                    break;
            }
        }
    }

    clef = rand() % 3 + 1; // Sets clef- Treble at 66% and bass at 33%.
}

void staff::display()
{
    // Clef Selection
    if (clef == 1 || clef == 2)
    {
        cout << "---TREBLE---" << endl;
    }
    else
    {
        cout << "---BASS---" << endl;
    }

    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "###   " << qtr_note[0][0] << "   " << qtr_note[0][1] << "   " << qtr_note[0][2] << "   " << qtr_note[0][3]
         << "    " << qtr_note[0][4] << "   " << qtr_note[0][5] << "   " << qtr_note[0][6] << "   "  << qtr_note[0][7]
            << "    " << qtr_note[0][8] << "   " << qtr_note[0][9] << "   " << qtr_note[0][10] << "   " << qtr_note[0][11]
            << "    " << qtr_note[0][12] << "   " << qtr_note[0][13] << "   " << qtr_note[0][14] << "   " << qtr_note[0][15]
            << "||" << endl;

    cout << "###---" << qtr_note[1][0] << "---" << qtr_note[1][1] << "---" << qtr_note[1][2] << "---" << qtr_note[1][3]
         << "|---" << qtr_note[1][4] << "---" << qtr_note[1][5] << "---" << qtr_note[1][6] << "---"  << qtr_note[1][7]
            << "|---" << qtr_note[1][8] << "---" << qtr_note[1][9] << "---" << qtr_note[1][10] << "---" << qtr_note[1][11]
            << "|---" << qtr_note[1][12] << "---" << qtr_note[1][13] << "---" << qtr_note[1][14] << "---" << qtr_note[1][15]
            << "||" << endl;

    cout << "###   " << qtr_note[2][0] << "   " << qtr_note[2][1] << "   " << qtr_note[2][2] << "   " << qtr_note[2][3]
         << "    " << qtr_note[2][4] << "   " << qtr_note[2][5] << "   " << qtr_note[2][6] << "   "  << qtr_note[2][7]
            << "    " << qtr_note[2][8] << "   " << qtr_note[2][9] << "   " << qtr_note[2][10] << "   " << qtr_note[2][11]
            << "    " << qtr_note[2][12] << "   " << qtr_note[2][13] << "   " << qtr_note[2][14] << "   " << qtr_note[2][15]
            << "||" << endl;

    cout << "###---" << qtr_note[3][0] << "---" << qtr_note[3][1] << "---" << qtr_note[3][2] << "---" << qtr_note[3][3]
         << "|---" << qtr_note[3][4] << "---" << qtr_note[3][5] << "---" << qtr_note[3][6] << "---"  << qtr_note[3][7]
            << "|---" << qtr_note[3][8] << "---" << qtr_note[3][9] << "---" << qtr_note[3][10] << "---" << qtr_note[3][11]
            << "|---" << qtr_note[3][12] << "---" << qtr_note[3][13] << "---" << qtr_note[3][14] << "---" << qtr_note[3][15]
            << "||" << endl;

    cout << "###   " << qtr_note[4][0] << "   " << qtr_note[4][1] << "   " << qtr_note[4][2] << "   " << qtr_note[4][3]
         << "    " << qtr_note[4][4] << "   " << qtr_note[4][5] << "   " << qtr_note[4][6] << "   "  << qtr_note[4][7]
            << "    " << qtr_note[4][8] << "   " << qtr_note[4][9] << "   " << qtr_note[4][10] << "   " << qtr_note[4][11]
            << "    " << qtr_note[4][12] << "   " << qtr_note[4][13] << "   " << qtr_note[4][14] << "   " << qtr_note[4][15]
            << "||" << endl;

    cout << "###---" << qtr_note[5][0] << "---" << qtr_note[5][1] << "---" << qtr_note[5][2] << "---" << qtr_note[5][3]
         << "|---" << qtr_note[5][4] << "---" << qtr_note[5][5] << "---" << qtr_note[5][6] << "---"  << qtr_note[5][7]
            << "|---" << qtr_note[5][8] << "---" << qtr_note[5][9] << "---" << qtr_note[5][10] << "---" << qtr_note[5][11]
            << "|---" << qtr_note[5][12] << "---" << qtr_note[5][13] << "---" << qtr_note[5][14] << "---" << qtr_note[5][15]
            << "||" << endl;

    cout << "###   " << qtr_note[6][0] << "   " << qtr_note[6][1] << "   " << qtr_note[6][2] << "   " << qtr_note[6][3]
         << "    " << qtr_note[6][4] << "   " << qtr_note[6][5] << "   " << qtr_note[6][6] << "   "  << qtr_note[6][7]
            << "    " << qtr_note[6][8] << "   " << qtr_note[6][9] << "   " << qtr_note[6][10] << "   " << qtr_note[6][11]
            << "    " << qtr_note[6][12] << "   " << qtr_note[6][13] << "   " << qtr_note[6][14] << "   " << qtr_note[6][15]
            << "||" << endl;

    cout << "###---" << qtr_note[7][0] << "---" << qtr_note[7][1] << "---" << qtr_note[7][2] << "---" << qtr_note[7][3]
         << "|---" << qtr_note[7][4] << "---" << qtr_note[7][5] << "---" << qtr_note[7][6] << "---"  << qtr_note[7][7]
            << "|---" << qtr_note[7][8] << "---" << qtr_note[7][9] << "---" << qtr_note[7][10] << "---" << qtr_note[7][11]
            << "|---" << qtr_note[7][12] << "---" << qtr_note[7][13] << "---" << qtr_note[7][14] << "---" << qtr_note[7][15]
            << "||" << endl;

    cout << "###   " << qtr_note[8][0] << "   " << qtr_note[8][1] << "   " << qtr_note[8][2] << "   " << qtr_note[8][3]
         << "    " << qtr_note[8][4] << "   " << qtr_note[8][5] << "   " << qtr_note[8][6] << "   "  << qtr_note[8][7]
            << "    " << qtr_note[8][8] << "   " << qtr_note[8][9] << "   " << qtr_note[8][10] << "   " << qtr_note[8][11]
            << "    " << qtr_note[8][12] << "   " << qtr_note[8][13] << "   " << qtr_note[8][14] << "   " << qtr_note[8][15]
            << "||" << endl;

    cout << "###---" << qtr_note[9][0] << "---" << qtr_note[9][1] << "---" << qtr_note[9][2] << "---" << qtr_note[9][3]
         << "|---" << qtr_note[9][4] << "---" << qtr_note[9][5] << "---" << qtr_note[9][6] << "---"  << qtr_note[9][7]
            << "|---" << qtr_note[9][8] << "---" << qtr_note[9][9] << "---" << qtr_note[9][10] << "---" << qtr_note[9][11]
            << "|---" << qtr_note[9][12] << "---" << qtr_note[9][13] << "---" << qtr_note[9][14] << "---" << qtr_note[9][15]
            << "||" << endl;

    cout << "###   " << qtr_note[10][0] << "   " << qtr_note[10][1] << "   " << qtr_note[10][2] << "   " << qtr_note[10][3]
         << "    " << qtr_note[10][4] << "   " << qtr_note[10][5] << "   " << qtr_note[10][6] << "   "  << qtr_note[10][7]
            << "    " << qtr_note[10][8] << "   " << qtr_note[10][9] << "   " << qtr_note[10][10] << "   " << qtr_note[10][11]
            << "    " << qtr_note[10][12] << "   " << qtr_note[10][13] << "   " << qtr_note[10][14] << "   " << qtr_note[10][15]
            << "||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
}

staff::staff()
{

}
