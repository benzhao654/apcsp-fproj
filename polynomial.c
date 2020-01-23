#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
double func(double x, double* coeff, int degree);
int main(int argc, char* argv[]) {
    if ( argc < 3){
      printf("Error! Please reenter\n");
      return 0;
    }
    int degree, i;
    degree = argc - 1;
    double coeff[100];
    double xcord = atof(argv[degree]);
    for (i = 0; i < degree; i++)
    {
        
        coeff[i] = atof(argv[i + 1]);
        
    }
    printf("%f\n", func(xcord, coeff, degree));
}
double func(double x, double* coeff, int degree)
{
    double sum;
    int len = degree - 1;
    sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += coeff[i] * pow(x, (degree - i - 2));
    }
    return sum;
}
