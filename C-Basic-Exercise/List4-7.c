#include<stdio.h>
int main(void){
    int no;
    printf("正の整数を入力してください: ");scanf("%d",&no);
    int i=0;
    while(i<=no)
        printf("%d",i++);
    printf("\n");//改行
    return 0;
}