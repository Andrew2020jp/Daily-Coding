#include <stdio.h>
int main(void) {
    int n;
    double x;

    n=9.99;
    x=9.99;
    printf("int型変数nの値:%d\n",n);
    printf("n/2の値:%d\n",n/2);
    
    printf("double型変数xの値:%f\n",x);
    printf("x/2の値:%f\n",x/2.0);//%f is floating number 
    return 0;
}