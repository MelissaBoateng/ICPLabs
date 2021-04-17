#include <iostream>
#include "stabbingline.h"
#include <cstdlib>



using namespace std;
void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints);


Point::Point(int x, int y) : x(x), y(y) { }
 
// Getters
int Point::getX() const { return x; }
int Point::getY() const { return y; }

void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
 
void Point::setXY(int x, int y) { this->x = x; this->y = y; }
 
void Point::print() const {
   cout << "Point @ (" << x << "," << y << ")";
}


void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines);
int main()
{
    const int MAXLnsSIZE = 100;
    PLines Lines[MAXLnsSIZE];

    ifstream file1("Line.txt");
    if (!file1)
    {
        cout << "Could not open file\n";
        return 1;
    }
    
    int count = 0;
    
    while (count < MAXLnsSIZE && readLine(file1, Line[count]) )
        ++count;
        
    cout << "Number of Lines : " << count << '\n';  
    
    for (int i=0; i<count; ++i)
    {
        cout << Line[i].ap1 << ' '
             <<Line[i].ap2 << '\n';
    }      
        
}

void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);

