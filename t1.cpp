#include<stdio.h>
#include<string.h>

struct employee 
{
    int id ;
    char name [20];
    
}
e1;
int main() {

    e1.id =10;
    strcpy (e1.name, "thor");
    printf("employee id=%d\n", e1.id);
    printf("employee name: %s\n", e1.name);
    return 0;
}