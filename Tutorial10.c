#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n",age);
    if(age>=18)
    {
        printf("Congrats,You can vote!");
    }
    else if (age<13)
    {
        printf("You are not even a Teenager");
    }
    else if (age>=13||age<=15)
    {
        printf("You are a Teenager");
    }
    else
    {
        printf("Oops!You Aren't Eligible");
    }
    return 0;
    

}
 