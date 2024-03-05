#include <stdio.h>

int main(void)
{
    int num;
    
    printf("数字を入力してください：");
    scanf("%d", &num);
    
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

    return 0;
}
