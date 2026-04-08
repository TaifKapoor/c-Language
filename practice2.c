#include <stdio.h>
int main()
{

    int num[4] = {66, 90, 87, 23};

    printf(" first value =>%d\n", num[2]);
    printf(" sec value =>%d\n", num[0]);

    num[3] = 77;
    printf("new update%d\n", num[3]);

    for (int i = 0; i < 4; i++)
    {
        printf(" %d\n", num[i]);
    }
}