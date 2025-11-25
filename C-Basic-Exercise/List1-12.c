#include <stdio.h>
int main() {
    int no;
    printf("整数を入力してください:");
    scanf("%d",&no);//整数値を読み込む

    printf("その数の５倍は%dです。\n",5*no);
    return 0;
}