#include <stdio.h>

int main()

{
    printf("Let's Learn Pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2;
    int *ptr3 = NULL;
    printf("The adress of pointer to a is %p\n", &ptra);
    printf("The adress of a is %p\n",&a);
    printf("The adress of a is %p\n",ptra);
    printf("The vaue of a is %d\n",*ptra);
    printf("The adress of some garbage is %p\n",ptr2);
    printf("The adress of some garbage is %p\n",ptr3);
    printf("The value of a is %d\n", a);
      return 0;
}
