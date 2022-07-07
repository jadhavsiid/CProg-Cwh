// To find factorial of a number accepting from user, using recursion
#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
}

int main()

{
    int num;
    printf("Enter the number you want the factorial of ?:\n");
    scanf("%d",&num);
    printf("The Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
