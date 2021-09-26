#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("%ld\n", sizeof(i)); //  求一個int占記憶體幾個byte
    scanf("%d", &i);
    printf("%d\n", i);
    i++;
    printf("%d\n", i);

    system("pause");
    return 0;
}