#include<stdio.h>

int main(void){

    int n1,n2;
    puts("2つの整数を入力してください。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    int max=n1>n2?n1:n2;//大きいほうの値でmaxを初期化
    printf("大きいほう値は%dです。\n",max);
    return 0;
}