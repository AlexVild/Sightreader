/* Alex Vild
SIGHTREADER Source Code version 0.1
Created: 10/24/2014
Last Updated: 10/24/2014
*/

#ifndef STAFF_H
#define STAFF_H
#include <string>

class staff
{
    public:
        staff();
        void create();
        void display();
    private:
        std::string qtr_note[11][16];
        int clef;
};

#endif // STAFF_H
