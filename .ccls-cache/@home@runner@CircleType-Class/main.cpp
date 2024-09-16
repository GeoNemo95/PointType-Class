#include <iostream>
#include "Pnt_Type.h"
#include "Crcl_Type.h"

using namespace std;

int main()
{
  Pnt_Type<double> p1;
  Pnt_Type<double> p2;
  double x, y;
  
  cout << "p1 x-axis: "; cin >> x;
  cout << "p1 y-axis: "; cin >> y;
  p1.set_pnt(x, y);
  cout << "p2 x-axis: "; cin >> x;
  cout << "p2 y-axis: "; cin >> y;
  p2.set_pnt(x, y);
  p1.print();
  p2.print();
  double distance = p1 - p2;
  cout << "The distance between the two points is: "<< distance << endl;
}