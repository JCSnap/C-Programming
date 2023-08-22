#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

// We put a function prototype here so that the compiler knows the parameter type and return type of the function.
// This is not necessary since the function is called before it is defined
double circle_area(double);

int main(void) {
  double d1, // outer diameter
         d2, // inner diameter
         thickness, outer_area, inner_area, volume, rim_area;

  // read input data
  printf("Enter inner diameter, outer diameter, thickness: ");
  scanf("%lf %lf %lf", &d2, &d1, &thickness);

  // compute volume of washer
  rim_area = circle_area(d1) - circle_area(d2);
  volume = rim_area * thickness;

  printf("Volume of washer = %lf\n", volume);
  return 0;
}

double circle_area(double diameter) {
  return PI * pow(diameter / 2, 2);
}
