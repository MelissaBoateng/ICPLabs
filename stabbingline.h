
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500
using namespace std ;
typedef int PointId ;
typedef int LineId ;

struct point     //define a Point struct
{
  private:
        int x, y;
    public:
        Point() : x(0), y(0) {}
        Point(int x, int y) : x(x), y(y) {}   
};   
PointId Pid; // Point Id
int ... ; // x-coordinate of a point
int ... ; // y-coordinate of a point
};


struct Line {
     private:   // define a Line by its 2 End points
        Point p1;
        Point p2;
    public:
        Line(const Point & p1, const Point & p2 ) : p1(p1), p2(p2) {}

        void setPoints( const Point & ap1, const Point & ap2)
        {
            p1 = ap1;
            p2 = ap2;
        }
    
LineId Lid ; // Line Id
PointId ... ; // first Point
PointId ... ; // second Point
};
// Declaring the prototype functions
void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints);
void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines);
void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);
void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines);
