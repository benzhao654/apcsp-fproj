#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int argc, char *argv[]) {
/*  enter example:
    ./main 10 4 NA
    order: sides, length, radius
    solves a regular polygon with 10 sides, a side length of 4, and the radius is not given
*/  
  int sides;
  double length, radius, peri, apo, area, angle;
  //side length, radius length, perimeter, apothem, area, and angle
  sides = atoi(argv[1]);
  angle = 360 / sides;

  if (strncmp (argv[2], "NA", 2) != 0)
  //runs if length exists
  {
    length = atof(argv[2]);

    peri = sides * length;
    apo = length / (2 * tan( M_PI / sides));
    radius = length / (2 * sin(M_PI / sides));
    area = peri * apo / 2;
  }
  else if (strncmp (argv[3], "NA", 2) != 0)
  {
    radius = atof(argv[3]);
    length = 2 * radius * sin(M_PI / sides);
    peri = sides * length;
    apo = length / (2 * tan(M_PI / sides));
    area = peri * apo / 2;
  }

  printf("The number of sides is %d\n", sides);
  printf("The side length is %f\n", length);
  printf("The radius length is %f\n", radius);
  printf("The apothem length is %f\n", apo);
  printf("The central angle is %f degrees\n", angle);
  printf("The perimeter is %f\n", peri);
  printf("The area is %f\n", area);
  return 0;
}
