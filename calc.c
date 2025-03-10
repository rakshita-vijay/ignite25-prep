#include <stdio.h>

int num1 = 0;
int num2 = 0;
char op = 'c';

void printPara() {
  printf("+ - - - - - - - - - - - - - - - + \n");
  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("\n");

  printf("Your choices for operations are: \n");
  printf("1) Addition (+) \n");
  printf("2) Subtraction (-) \n");
  printf("3) Multiplication (*) \n");
  printf("4) Division to get quotient (/) \n");
  printf("5) Division to get remainder (%%) \n \n");

  printf("Enter the operation: ");
  scanf("%c", &op);
  scanf("%c", &op);
}

float doCalc() {
  switch(op) {
    case '+':
      return (num1 + num2);
    case '-':
      return (num1 - num2);
    case '*':
      return (num1 * num2);
    case '/':
      return (num1 / num2);
    case '%':
      return (num1 % num2);
    default:
      printf("Invalid Operator Input \n");
      return 0.0;
  }
}

int main() {
  int choice = 1;

  while (choice) {
    printPara();

    float res = doCalc();

    printf("%d %c %d = %f\n", num1, op, num2, res);

    printf("+ - - - - - - - - - - - - - - - + \n");

    printf("Do you wish to do another operation? Enter 1 for yes, 0 for no: ");
    scanf("%d", &choice);

    if (choice == 1) {
      continue;
    } else {
      printf("+ - - - - - - - - - - - - - - - + \n");
    }
  }
}
