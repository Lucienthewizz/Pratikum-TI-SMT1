#include <stdio.h>

int main() {
  
  printf("\t\t\t\t\t+------------------------------------+\n");
  printf("\t\t\t\t\t+-------------Kalkulator-------------+\n");
  printf("\t\t\t\t\t+------------------------------------+\n\n\n");

  printf("What operator do you want to use?\n\n");
  printf("choose:\n 1. Addition(+)\n 2. Substraction(-)\n 3. Multiplication(x)\n 4. Division(/)\n 5. Mod\n");
  printf("\n");

  int operator;
  float num1, num2, result, num3, num4, hasilbagi;
  char pilih = 'n';

  do {
    printf("your choice: ");
    scanf("%d", &operator);
  
    if (operator > 6) {
      printf("You choose that's not on the list operator!");
    }
    else if(operator < 1){
      printf("You choose that's not on the list operator!");
    } 
    else {

      switch (operator) {
        case 1:
          printf("\n---- (+) ----");
          printf("\ninput first number: ");
          scanf("%f", &num1);
          printf("Input second number: ");
          scanf("%f", &num2);

          result = num1 + num2;
          printf("\nThe result %.1f + %.1f is  %.2f", num1, num2, result);
          printf("\n\n");
          break;
        case 2:
          printf("\n---- (-) ----");
          printf("\ninput first number: ");
          scanf("%f", &num1);
          printf("Input second number: ");
          scanf("%f", &num2);

          result = num1 - num2;
          printf("\nThe result %.1f - %.1f is  %.2f", num1, num2, result);
          printf("\n\n");
          break;
        case 3:
          printf("\n---- (x) ----");
          printf("\ninput first number: ");
          scanf("%f", &num1);
          printf("Input second number: ");
          scanf("%f", &num2);

          result = num1 * num2;
          printf("\nThe result %.1f * %.1f is  %.2f", num1, num2, result);
          printf("\n\n");
          break;
        case 4:
          printf("\n---- (/) ----");
          printf("\ninput first number: ");
          scanf("%f", &num3);
          printf("Input second number: ");
          scanf("%f", &num4);

          hasilbagi = num3 / num4;
          printf("\nThe result %.1f / %.1f is  %.2f", num3, num4, hasilbagi);
          printf("\n\n");
          break;
        case 5: 
          printf("\n---- mod ----");
          int num5, num6, result2;
          printf("\ninput first number: ");
          scanf("%d", &num5);
          printf("Input second number: ");
          scanf("%d", &num6);

          result2 = num5 % num6;
          printf("\nThe result %d mod %d is  %d", num5, num6, result2);
          printf("\n\n");
          break;
        default:
          printf("\nPlease restart!");
          break;
      }
    }
    printf("Apakah Ingin lanjut?");
    scanf(" %c", &pilih);
  }
  while (pilih == 'y');

  return 0;
}

