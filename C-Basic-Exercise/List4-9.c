#include<stdio.h>

int main(void){
    int num;
    printf("整数は何個: ");scanf("%d",&num);
    int i=0;
    int sum=0;
    while(i<num){
        int tmp;
        printf("No.%d:",++i);
        scanf("%d",&tmp);
        sum+=tmp;
    }
    printf("合計は%d\n",sum);
    return 0;
} 
