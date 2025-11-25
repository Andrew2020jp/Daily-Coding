#include <stdio.h>
int main() {
    int no;
    printf("整数を入力してください:");
    scanf("%d",&no);//整数値を読み込む

    printf("あなたは%dと入力しましたね。\n",&no);
    return 0;
}