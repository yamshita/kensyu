#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;
    int i = 0;

#if 1
    while(num != 0)
    {
        printf("数字を入力して下さい。(0で終了します)\n");
        scanf("%d",&num );  

        if (num != 0)
        {
            printf("入力した数字は%dです。\n", num);
            sum += num;
            printf("合計は%dです。\n", sum);
            i++;
        }
    }
#endif

#if 0
    do
    {
        printf("数字を入力して下さい。(0で終了します)\n");
        scanf("%d", &num);  

        if(num == 0)
        {
            break;
        }

        printf("入力した数字は%dです。\n", num);
        sum += num;
        printf("合計は%dです。\n", sum);
        i++;

    } while (num != 0);
#endif

#if 0
    while (1)
    {
        printf("数字を入力して下さい。(0で終了します)\n");
        scanf("%d", &num); 

        if (num == 0)
        {
            break;
        }
    
        printf("入力した数字は%dです。\n", num);
        sum += num;
        printf("合計は%dです。\n", sum);
        i++;
    }
#endif

    printf("0が入力されました。\n");
    printf("平均値は%dです。", sum/i);

    return 0;
}