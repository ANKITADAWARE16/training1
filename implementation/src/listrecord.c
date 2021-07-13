#include "fun.h"
#include <stdio.h>
int main()
{
    struct emp
    {
        char name[40]; ///name of employee
        int age; /// age of employee
        float bs; /// basic salary of employee
    };
    struct emp e;
                printf("\n%s %d %.2f",e.name,e.age,e.bs); /// print the name, age and basic salary
                return 0;
            } 