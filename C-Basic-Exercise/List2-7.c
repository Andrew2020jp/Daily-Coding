#include <stdio.h>
int main(void) {
    double x,y;
    puts("二つ整数を入力してください。");
    printf("実数x:"); scanf("%lf",&x);//%d becoma %lf because this is for floating number to regonize the floating number  
    printf("実数y:"); scanf("%lf",&y);
 
    printf("x+y=%f\n",x+y);//和 
    printf("x-y=%f\n",x-y);//差
    printf("x*y=%f\n",x*y);//積
    printf("x/y=%f\n",x/y);//商

    return 0;
}