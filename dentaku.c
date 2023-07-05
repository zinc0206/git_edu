#include <stdio.h>
#include<math.h>
int num1;
int num2;
int num3;

int sum(void);

int main(void)
{
    
    char symbol0;
    char symbol1 = '+';
    char symbol2 = '-';
    char symbol3 = '*';
    char symbol4 = '/';
    char symbol5 = '%';
    char symbol6 = '^';
    int a;
    a = pow(num1 , num2);
    printf("数字を入力\n");

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("演算子を入力\n");

    scanf(" %c",&symbol0);

    if(symbol0 == symbol1) printf("%d\n",num1+num2);
    if(symbol0 == symbol2) printf("%d\n",num1-num2);
    if(symbol0 == symbol3) printf("%d\n",num1*num2);
    if(symbol0 == symbol4) printf("%d\n",num1/num2);
    if(symbol0 == symbol5) printf("%d\n",num1%num2);
    if(symbol0 == symbol6) printf("%d\n" , a);
    printf("%d",num3);
    return 0;
}


int sum(void)
{
    for (num3=1;num3>=num2;num3++,num1*=num3);
    return num3;
}