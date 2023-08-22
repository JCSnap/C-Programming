#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(void) {
  double d1, // outer diameter
         d2, // inner diameter
         thickness, outer_area, inner_area, volume, rim_area;

  // read input data
  printf("Enter inner diameter, outer diameter, thickness: ");
  scanf("%lf %lf %lf", &d2, &d1, &thickness);

  // compute volume of washer
  outer_area = PI * pow(d1 / 2, 2);
  inner_area = PI * pow(d2 / 2, 2);
  rim_area = outer_area - inner_area;
  volume = rim_area * thickness;

  printf("Volume of washer = %lf\n", volume);
  return 0;
}
