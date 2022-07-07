#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, siddhesh, shubham;
//struct student harry, siddhesh, shubham;

void print()
{
    printf("%s",siddhesh.name);
}
int main()
{
    harry.id = 1;
    siddhesh.id = 2;
    shubham.id = 3;
    harry.marks = 420;
    siddhesh.marks = 520;
    shubham.marks = 201;
    harry.fav_char = 'p';
    siddhesh.fav_char = 'p';
    shubham.fav_char = 'o';
    strcpy(harry.name, "harry potter student of the year\n");
    printf("Siddhesh's marks is %d\n", siddhesh.marks);
    printf("Siddhesh's id is %d\n", siddhesh.id);
    printf("harry's name is %s\n ", harry.name);
    return 0;

}
    