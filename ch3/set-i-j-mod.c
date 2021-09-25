//  餘數的正負號會與被除數相同 (都先當成正數算出值後，再看被除數決定正負號。)
//  13 % 5 = 3
//  13 % -5 = 3
//  -13 % 5 = -3
//  -13 % -5 = -3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    int k = i % j;
    printf("%d\n", k);

    scanf("%d%d", &i, &j);
    k = i % j;
    printf("%d\n", k);

    system("pause");
    return 0;
}