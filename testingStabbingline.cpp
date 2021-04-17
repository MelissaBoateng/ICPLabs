#include <iostream>
#include "stabbingline.h"
#include <cstdlib>


 
int main() {
 
   Point p1;     
   Point p2(3, 4); 
                  
   p1.print();     
   cout << endl;
   p2.print();     
   cout << endl;
 

   Point * ptrP3, * ptrP4; 
   ptrP3 = new Point();    
 
 

   Point ptsArray1[4];    
                           
   ptsArray1[0].print();  
   cout << endl;
   ptsArray1[1].setXY(6, 6);
   (ptsArray1 + 1)->print(); 
                            
   cout << endl;
 
   Point ptsArray2[4] = {Point(11, 11), Point(11, 11), Point()};
                           
   ptsArray2[0].print(); 
   cout << endl;
   (ptsArray2 + 2)->print(); 
                             
   cout << endl;
 
  
   Point * ptrPtsArray3 = new Point[2];
   ptrPtsArray3[0].setXY(13, 13);
   ptrPtsArray3->print();  
                          
   cout << endl;
   (ptrPtsArray3 + 1)->setXY(11, 11); 
   ptrPtsArray3[1].print();           
   cout << endl;
 
  