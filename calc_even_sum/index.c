#include <stdio.h>


/*
计算1到x之间所有偶数的和

@param {int} x   

*/
int calc_even_sum(int x){
    int i = 0;
    int sum = 0;
    for (i = 0; i <= x; i++) {
        if (i % 2 == 0){
            sum = sum + i;
        }
    }
    return sum;
}

int main(int argc, char *argv[]){
    int b = 0;
    printf("Please enter:");
    scanf("%d", &b);
    printf("1-%d的偶数之和为%d", b, calc_even_sum(b));
}