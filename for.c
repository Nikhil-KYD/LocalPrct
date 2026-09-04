#include <stdio.h>
int main ()
{
    int prime;
    int a;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &a);

    for(int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("Its not a prime number");
            return 0;
        }
    }
            printf("Its a prime number");

        return 0;
    }
}