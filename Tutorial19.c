#include <stdio.h>
int sum (int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
{
     printf("%c", '*');
}


    printf("%c", '*');
}
int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()

{
    int a,b,c;
    a=7;
    b=81;
    c=sum(a,b);
    c=takenumber();
    printf("The no. Entered is : %d\n",c);
    //printstar(8);
   // printf("The Sum is %d\n",c);
     return 0;
}
int sum(int a,int b)
{
    return a+b;
}
