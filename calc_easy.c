#include <stdio.h>

int main() {
  int choice = 1;
  int num1, num2;
  char op;

  while (choice) {
    printf("+ - - - - - - - - - - - - - - - - - - + \n");
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
    scanf(" %c", &op);

    float res;
    int valid = 1;

    switch(op) {
      case '+':
        res = num1 + num2;
        break;
      case '-':
        res = num1 - num2;
        break;
      case '*':
        res = num1 * num2;
        break;
      case '/':
        if (num2 != 0)
          res = (float)num1 / num2;
        else {
          printf("Undefined (division by zero)\n");
          valid = 0;
        }
        break;
      case '%':
        if (num2 != 0)
          res = num1 % num2;
        else {
          printf("Undefined (modulo by zero)\n");
          valid = 0;
        }
        break;
      default:
        printf("Invalid Operator Input \n");
        valid = 0;
    }

    if (valid) {
      if (op == '/') {
        printf("\n%d %c %d = %d\n", num1, op, num2, (int) res);
      } else {
        printf("\n%d %c %d = %f\n", num1, op, num2, res);
      }
    }

    printf("+ - - - - - - - - - - - - - - - - - - + \n");

    printf("\nDo you wish to do another operation? Enter 1 for yes, 0 for no: ");
    scanf("%d", &choice);
    printf("\n");
  }

  printf("+ - - - - - - - - - - - - - - - - - - + \n");
  return 0;
}
