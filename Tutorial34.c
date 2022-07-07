#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //char str[] = {'S', 'i', 'd', 'd', 'h', 'e', 's', 'h', '\0'};
    //char str[9] = "Siddhesh";
    char str[34];
    printf("Enter a Stirng : ");
    gets(str);
    printf("using custom function printstr : ");
    printstr(str);
    printf("Using printf: %s\n",str);
    printf("Using puts: ");
    puts(str);
    return 0;
}