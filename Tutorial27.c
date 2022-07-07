#include <stdio.h>
int main()
{
    //char a='3';
    //char*ptra= &a;
    //printf("%d\n",ptra);
    //ptra--;
    //printf("%d\n",ptra);
    //printf("%d",ptra-2);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 78};
    int*arrayptr=arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The Address of first element of array is %d\n", &arr[0]);
    printf("The Address of first element of array is %d\n", arr);
    printf("The Address of second element of array is %d\n", &arr[1]);
    printf("The Address of second element of array is %d\n", arr + 1);
    //arrayptr--;//this line will throw an error;

    printf("The value at Address of first element of array is %d\n", *(&arr[0]));
    printf("The value at Address of first element of array is %d\n", arr[0]);
    printf("The value at Address of first element of array is %d\n", *(arr));
    printf("The value at Address of second element of array is %d\n",*( &arr[1]));
    printf("The value at Address of second element of array is %d\n",arr[1]);
    printf("The value at Address of second element of array is %d\n",*( arr + 1));

    return 0;
}