#include <stdio.h>
int main(void) {
    int x,y;

    puts("二つの実数を入力してください。");
    printf("整数x:"); scanf("%d",&x);
    printf("整数y:"); scanf("%d",&y);

    printf("x+y=%d\n",x+y);//和
    printf("x-y=%d\n",x-y);//差
    printf("x*y=%d\n",x*y);//積
    printf("x/y=%d\n",x/y);//商
    printf("x%%y=%d\n",x%y);//余剰（よじょう）
    return 0;
}