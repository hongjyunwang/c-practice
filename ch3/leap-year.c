#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int year;
    scanf("%d", &year);
    bool k = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    printf("%d\n", k);

    system("pause");
    return 0;
}