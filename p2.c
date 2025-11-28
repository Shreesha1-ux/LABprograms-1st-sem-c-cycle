#include<stdio.h>

int main(){
    double paise10,paise20,paise50,paise100,no1,no2,no3,no4,total;
    paise10=0.1;
    paise20=0.2;
    paise50=0.5;
    paise100=1;
    printf("ENTER THE NO OF COINS OF 10 PAISE ");
    scanf("%lf",&no1);
    printf("ENTER THE NO OF COINS OF 20 PAISE");
    scanf("%lf",&no2);
    printf("ENTER THE NO OF COINS OF 50 PAISE");
    scanf("%lf",&no3);
    printf("ENTER THE NO OF COINS OF 100 PAISE");
    scanf("%lf",&no4);
    total=((paise10*no1)+(paise20*no2)+(paise50*no3)+(paise100*no4));
    printf("THE TOTAL AMOUT IS %lf$ RUPEES",total);
    return 0;
}
