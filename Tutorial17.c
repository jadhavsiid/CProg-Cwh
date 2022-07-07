#include <stdio.h>

int main()

{
   // label:
   // printf("We are inside Label\n");
   // goto end;
   // printf("Hello Siddhesh\n");
   // goto label;
   // end:
   // printf("We are at the end bro!");
   int num;
   for (int i = 0; i <8 ; i++)
   {
    printf("%d\n",i);
    for (int j = 0; j < 8; j++)
    {
        printf("Enter the no or Enter 0 to Exit\n");
        scanf("%d", &num);
        if (num==0)
        {
            goto end;
        }
        
    }
    
   }
   end:
   
    return 0;
}
