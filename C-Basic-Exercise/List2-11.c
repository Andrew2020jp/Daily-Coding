#include<stdio.h>
int main(void){
    int a,b,c;

    puts("三つの整数を入力してください。");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("整数c:"); scanf("%d",&c);

    int sum=a+b+c;
    double ave=(double)sum/3;

    printf("それらの合計は%5dです。\n",sum);//%5dは整数を少なくとも５桁の10進数で表示
    printf("それらの平均は%5.1fです。\n",ave);//小数点を少なくとも５桁で表示。だだし、小数点以下は一桁

    return 0;
}