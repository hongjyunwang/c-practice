#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int keys[] = {3, 4, 6, 2, 8, 10};
    int arraySize = sizeof(keys) / sizeof(int);
    int key;
    scanf("%d", &key);
    bool found = false;
    for (int i = 0; i < arraySize && !found; i++)
    {
        if (keys[i] == key)
        {
            printf("%d\n", i);
            found = true;
        }
    }
    if (!found)
    {
        printf("-1\n");
    }

    system("pause");
    return 0;
}