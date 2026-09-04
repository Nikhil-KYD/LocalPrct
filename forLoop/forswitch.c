#include <stdio.h>

int main()
{
    int prime;
    int a;

    scanf("%d", &a);

    for (int i = 2; i <= a; i++)
    {
        prime = 0;

        for (int j = 1; j <= i; j++)
        {
            switch (i % j)
            {
                case 0:
                    prime++;
                    break;
            }
        }

        switch (prime)
        {
            case 2:
                printf("%d ", i);
                break;
        }
    }

    return 0;
}