#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char operation;
    double num1, num2, product;
    num1 = atof(argv[1]);
    operation =  *argv[2];
    num2 = atof(argv[3]);
    printf("%c\n", operation);
    switch (operation) 
    {
      case '+':
        printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
        break;
      case '-':
        printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
        break;
      case '*':
        printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
        break;
      case '/':
        printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
        break;
      default:
        printf("Error! Please retry\n");
    }
    return 0;
}
