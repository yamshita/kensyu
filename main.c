#include <stdio.h>

int main(void)
{
    int num, i;
    
    printf("数字を入力してください：");
    scanf("%d", &num);
    
    // 判定１の処理
    if(num == 0)
    {
        printf("入力された数字は0です。\n");
    }
    else
    {
        if (num > 0 ) 
        {
            printf("入力した数字%dは正の整数です。\n", num);
        }
        else
        {
            printf("入力した数字%dは負の整数です。\n", num);
        }
    }

    // 判定２の処理 
    if(num != 0)
    {
        if ((num % 2) == 0)
        {
            printf("入力した数字%dは偶数です。\n", num);
        }
        else
        {
            printf("入力した数字%dは奇数です。\n", num);
        }
    }
    else
    {
        printf("-------------\n");
    }

    // 判定３の処理
    for(i = 2; i < num; i++) 
    {
        if(num % i == 0) 
        {
            printf("%d は素数ではありません。\n", num);
            return 0;
        }
    }

    printf("%d は素数です。\n", num);
    return 0;
}
