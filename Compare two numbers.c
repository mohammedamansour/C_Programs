#include <stdio.h>
main ()
{
    printf("This is a programe to compare two numbers\n");
    int N1, N2;
    printf("Type the first number : "); scanf("%d", &N1);
    printf("\nType the second number : "); scanf("%d", &N2);
    printf("\n");
    if (N1 > N2)
    {
        printf("The first number is bigger");
    }
    else if (N1 < N2)
    {
        printf("The second number is bigger");
    }
    else
    {
        printf("The two numbers are equal");
    }
}
