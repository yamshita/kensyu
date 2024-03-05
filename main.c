#include <stdio.h>
int main(void)
{
    int a;
    
    printf("数字を入力してください：");
    scanf("%d", &a);

    double r = a;
    double pi = 3.14;
    double area = pi * r * r;

    printf("円の面積は %fです。\n", area);

    double s = 2 * a;
    double circle = 2 * a * pi;

    printf("円周の長さは %fです。\n", circle);

    return 0;
}