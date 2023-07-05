#include<stdio.h>

int main(void)
{
    int nandemoii;

    printf("何番まで表示する？\n");
    scanf("%d",&nandemoii);

    int i;
    for(i=1;i<=nandemoii;i++)
    {printf("%d\n",i);}
}