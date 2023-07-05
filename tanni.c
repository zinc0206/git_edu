#include <stdio.h>

int main(void)
{
    int perk,perc,pere;
    printf("課題、中間、定期の評価割合\n");
    scanf("%d,%d,%d",&perk,&perc,&pere);

    int maxk,maxc,maxe;
    printf("それぞれの満点の点数\n");
    scanf("%d,%d,%d",&maxk,&maxc,&maxe);

    int getk,getc,gete;
    printf("それぞれの獲得した点数\n");
    scanf("%d,%d,%d",&getk,&getc,&gete);

    int basA,basB,basC;
    printf("A,B,C,Fの基準値\n");
    scanf("%d,%d,%d",&basA,&basB,&basC);

    double kadai;
    kadai=(getk*100)/maxk*perk/100;

    double chukan;
    chukan=(getc*100)/maxc*perc/100;

    double teiki;
    teiki=(gete*100)/maxe*pere/100;

    int resurt;
    resurt=kadai+chukan+teiki;

    if(resurt>=basA)
        {printf("A\n");}
    if(resurt>=basB,resurt<basA)
        {printf("B\n");}
    if(resurt>=basC,resurt<basB)
        {printf("C\n");}
    if(resurt<basC)
        {printf("F\n");}

    printf("%d",resurt);

return 0;

}