#include <iostream>
#include "Pnt_Type.h"
#include "Crcl_Type.h"
#include "Cyl_Type.h"

using namespace std;

int main()
{
  Pnt_Type<double> cen_pnt;
  Pnt_Type<double> out_pnt;
  Crcl_Type<int> Crcl;
  Cyl_Type<int> Cyl;
  double x, y, h;
  
  cout << "Center x-axis: "; cin >> x;
  cout << "Center y-axis: "; cin >> y;
  Cyl.set_cen_pnt(x, y);
  cout << "Outer x-axis: "; cin >> x;
  cout << "Outer y-axis: "; cin >> y;
  Cyl.set_out_pnt(x, y);
  cout << "Height of Cylinder: "; cin >> h;
  Cyl.set_height(h);
  Cyl.print_cyl();
  return 0;
}