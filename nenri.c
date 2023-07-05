#include <stdio.h>

double main(void)
{
    double nenri;
    double nenri0;
    printf("年利を入力してください\n");
    scanf("%lf",&nenri);
    
    nenri0=nenri/100+1;

    printf("%lf\n",nenri0);

    int first,max;
    printf("初期値と上限値を入力してください\n");
    scanf("%d,%d",&first,&max);
    
    int year=0;
    while (max>first)
    {
        first*=nenri0;
        year++;    
    }

    printf("年利%0.2f%%\n初期値、上限値、%d,%d\n",nenri0,first,max);
    printf("%d年\n",year);
    return 0;
}