#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    double num4;
    double num5;
    char shape0;
    char shape1='1';
    char shape2='2';
    char shape3='3';
    char shape4='4';
    char shape5='5';
    char shape6='6';

    printf("求める図形を入力してください\n");
    scanf(" %c",&shape0);

    if(shape0==shape1)
    {
        printf("底辺と高さを入力してください\n");
        scanf("%d,%d",&num1,&num2);
        printf("%d",num1*num2/2);
    }

    if(shape0==shape2)
    {
        printf("底辺と高さを入力してください\n");
        scanf("%d,%d",&num1,&num2);
        printf("%d",num1*num2);
    }

    if(shape0==shape3)
    {
        printf("上底と下底と高さを入力してください\n");
        scanf("%d,%d,%d",&num1,&num2,&num3);
        printf("%d",(num1+num2)*num3/2);
    }

    if(shape0==shape4)
    {
        printf("底辺と高さを入力してください\n");
        scanf("%d,%d",&num1,&num2);
        printf("%d",num1*num2);
    }

    if(shape0==shape5)
    {
        printf("半径を入力してください\n");
        scanf("%d",&num1);
        printf("%d",num1*num1*3);
    }

    if(shape0==shape6)
    {
        printf("半径と中心角を入力してください\n");
        scanf("%lf,%lf",&num4,&num5);
        printf("%lf",(num4*num4)*(num5/360));
    }





}