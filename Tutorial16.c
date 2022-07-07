#include <stdio.h>

int main()

{
    printf("Hello Siddhesh\n");
    int i,age;
    for ( i = 0; i <10; i++)
    {
       printf("%d\nEnter your age\n",i);
       scanf("%d",&age);
       //if (age>10)
       //{
       //    break;
       // }
       if (age>10)
       {
           continue;
       }
       
       printf("We haven't came across any continue statments\n");
       printf("Siddhesh is good boy\n");
       
    }
    
    return 0;
}
