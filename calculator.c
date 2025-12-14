#include <stdio.h>
#include <string.h>
void displayMenu();
void Add();
void Multiply();
void Subtract();
void Divide();
void Modulus();
void strong();
void Factorial();
void numberOfdigits();
void main()
{
  int answer, i, u, yourChoose = 0;
  int j = 1;
  char action;
  displayMenu();
  printf("what you choose:\n");
  scanf("%d", &yourChoose);
  switch (yourChoose){case 1: Add(); break;
  case 2: Subtract(); break;
  case 3: Multiply(); break;
  case 4: Divide(); break;
  case 5: Modulus(); break;
  case 6: strong(); break;
  case 7: Factorial(); break;
  case 8: numberOfdigits(); break;
  default: printf("write agine!\n"); break;}
  return;
}
void displayMenu()
{
  printf("write 1 for make Add.\n");
  printf("write 2 for make Subtract.\n");
  printf("write 3 for make Multiply.\n");
  printf("write 4 for make Divide.\n");
  printf("write 5 for make Modulus.\n");
  printf("write 6 for make strong.\n");
  printf("write 7 for make Factorial.\n");
  printf("write 8 for make number of digits.\n");
  return;
}
void Add()
{
  int numberOne, numberTwo = 0;
  printf("write the first number for add:\n");
  scanf("%d", &numberOne);
  printf("write the secand number for add:\n");
  scanf("%d", &numberTwo);
  printf("%d + %d = %d\n", numberOne, numberTwo, numberOne + numberTwo);
  return;
}
void Subtract()
{
  int numberOne, numberTwo = 0;
  printf("write the subtracting number:\n");
  scanf("%d", &numberOne);
  printf("write the subtracted number:\n");
  scanf("%d", &numberTwo);
  printf("%d - %d = %d\n", numberOne, numberTwo, numberOne - numberTwo);
  return;
}
void Multiply()
{
  int numberOne, numberTwo = 0;
  printf("write the first multiplier number:\n");
  scanf("%d", &numberOne);
  printf("write the secand multiplier number:\n");
  scanf("%d", &numberTwo);
  printf("%d * %d = %d\n", numberOne, numberTwo, numberOne * numberTwo);
  return;
}
void Divide()
{
  int numberOne, numberTwo = 0;
  printf("write the divider number:\n");
  scanf("%d", &numberOne);
  printf("write the divided number:\n");
  scanf("%d", &numberTwo);
  printf("%d / %d = %d\n", numberOne, numberTwo, numberOne / numberTwo);
  return;
}
void Modulus()
{
  int numberOne, numberTwo = 0;
  printf("write the first Modulu number:\n");
  scanf("%d", &numberOne);
  printf("write the secand Modulu number:\n");
  scanf("%d", &numberTwo);
  printf("%d\n", numberOne % numberTwo);
  return;
}
void strong()
{
  int numberOne, numberTwo, answer = 0;
  printf("write the up strong number:\n");
  scanf("%d", &numberOne);
  printf("write the secand strong number:\n");
  scanf("%d", &numberTwo);
  answer = pow(numberOne, numberTwo);
  printf("%d ^ %d = %d\n", numberOne, numberTwo, answer);
  return;
}
void Factorial()
{
  int numberOne, numberTwo, u = 0;
  int j = 1;
  printf("write number for the Factorial\n");
  scanf("%d", &numberTwo);
  if (numberTwo == 0 || numberTwo == 1)
  {
    printf("1\n");
  }
  for (u = 1; u <= numberTwo; u++)
  {
    j = u * j;
  }
  printf("%d\n", j);
  return;
}
void numberOfdigits()
{
  int numberOne, count = 0;
  printf("Enter number:\n");
  scanf("%d", &numberOne);
  while (numberOne != 0)
  {
    numberOne = numberOne / 10;
    count++;
  }
  printf("the size of the number is: %d\n", count);
}