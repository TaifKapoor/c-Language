#include <stdio.h>

int main()
{
    int num = 8;

    switch (num)
    {
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("case 2\n");
        break;
    case 3:
        printf("case 3\n");
        break;
    case 4:
        printf("case 4\n");
        break;
    case 5:
        printf("case 5\n");
        break;

    default:
        printf("Invalid case");
    }

     
    int day;
    printf("Enter day :");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("wed\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Fri\n");
        break;
    case 6:
        printf("Sat\n");
        break;
    case 7:
        printf("Sun\n");
        break;

    default:
        printf("Invalid day");
    }

    return 0;

    int i;
    for ( i = 0; i <= 10; i++)
    {
       printf("%d\n", i);
    }


    for ( i = 10; i >= 1; i--)
    {
       printf("%d\n", i);
    }


    for ( i = 2; i <= 20; i = i + 2)
    {
       printf("%d\n", i);
    }

    int  num = 5;
    printf("%d ki table:\n", num);

    for (int i = 1; i <= 10; i++)
    {
       printf("%d * %d = %d\n",num, i , num*i);
    }
    printf("Loop finished");
    
}