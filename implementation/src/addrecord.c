#include "fun.h"
#include <stdio.h>
int main()
{
     FILE *fp, *ft; /// file pointers
    char another;
 struct emp
    {
        char name[40]; ///name of employee
        int age; /// age of employee
        float bs; /// basic salary of employee
    };
 struct emp e;
    {
    printf("\nAdd another record(y/n) ");
    fflush(stdin);
    another = getche();
    return 0;
}