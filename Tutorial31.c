#include <stdio.h>
void changevalue(int *address)
{
    *address = 354;
}
int main()
{
    int a = 24, b = 85;
    printf("The value of 'a' now is %d\n", a);
    changevalue(&a);
    printf("The Value of 'a' now is %d\n", a);
     return 0;
}