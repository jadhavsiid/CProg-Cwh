#include <stdio.h>

int main()

{
    int age, marks;
    printf("Enter your Age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The Age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your Marks are 45!");
            break;
        
        default:
             printf("Your marks are not 45!");
            break;
        }
        break;
    case 13:
        printf("The Age is 13\n");
        break;
    case 23:
        printf("The Age is 23\n");
        break;
    default:
        printf("Age is neither 3,13 nor 23");
        
    }
    return 0;
}