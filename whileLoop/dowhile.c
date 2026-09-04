#include <stdio.h>
int main() {
 int sum;
 int number;
 scanf("%d", &sum);
 scanf("%d", &number);
 
 do {
   sum = sum + number;
   number = number + 2;
   printf("Sum is: %d\n", sum);
   printf("Num is: %d\n", number);
 } while (number <= 50);

 printf("Total of all the Sum up there: %d\n", sum);
 return 0;

}