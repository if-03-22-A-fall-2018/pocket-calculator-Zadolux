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

double readNumber(int number)
{
  double input;
  printf("Number %d: ", number);
  scanf("%lf", &input);

  return input;
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
    number1 = readNumber(1);
    number2 = readNumber(2);
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
    printf("%lf / %lf = %lf\n", number1, number2, number1 / number2);
    break;
    case STOP:
      printf("Program stopped.\n");
    break;
  }
}

int main(int argc, char const *argv[]) {
  int input;

  showMenu();
  input = getOperationInput();
  executeOperation(input);

  return 0;
}
