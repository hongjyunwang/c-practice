#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);

    int k = 3, l = 4;
    if ((k = i) > 0 || (l = j) > 0)
    {
        printf("%d\n", k);
        printf("%d\n", l);
        //  因(k=i)>0為true，所以(l=j)>0不會執行。
        //  應避免在複雜的邏輯運算中改變變數值，以免快捷運算造成意外執行結果。
    }

    system("pause");
    return 0;
}