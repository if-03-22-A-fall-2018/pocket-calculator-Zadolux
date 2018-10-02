/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:			Pocket calculator
 * Author:	  Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Calculator program, supports multiple operations
 * ----------------------------------------------------------
*/
#include <stdio.h>

#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
#define STOP -1

void showMenu()
{
  printf("Choose one of the following operations:\n");
  printf("\tAdd (1)\n");
  printf("\tSubtract (2)\n");
  printf("\tMultiply (3)\n");
  printf("\tDivide (4)\n");
  printf("\tStop program (-1)\n");
}

void readNumbers(double* number1, double* number2)
{
  printf("Number 1: ");
  scanf("%lf", number1);
  printf("Number 2: ");
  scanf("%lf", number2);
}

int getOperationInput()
{
  int input;

  printf("Enter your choice: ");
  scanf("%d", &input);

  return input;
}

void executeOperation(int operation)
{
  double number1 = 0;
  double number2 = 0;

  if(operation != STOP)
  {
    readNumbers(&number1, &number2);
  }

  switch(operation)
  {
    case ADD:
      printf("%lf + %lf = %lf\n", number1, number2, number1 + number2);
    break;
    case SUBTRACT:
    printf("%lf - %lf = %lf\n", number1, number2, number1 - number2);
    break;
    case MULTIPLY:
      printf("%lf * %lf = %lf\n", number1, number2, number1 * number2);
    break;
    case DIVIDE:
      if(number2 != 0)
      {
        printf("%lf / %lf = %lf\n", number1, number2, number1 / number2);
      }
      else
      {
        printf("Error: Division by zero.\n");
      }
    break;
    case STOP:
      printf("Program stopped.\n");
    break;
  }
}

int main(int argc, char const *argv[]) {
  int input;

  while(input != -1)
  {
    showMenu();
    input = getOperationInput();
    executeOperation(input);

    if(input != -1)
    {
      printf("\n");
    }
  }
  return 0;
}
