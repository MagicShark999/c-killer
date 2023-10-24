/**
# 计算1到n的所有偶数的和


## 要求

- 输入任意数字n
- 编写一个函数`calc_even_sum(n)`，计算从1到n的所有偶数的和。


## 示例


```c

int calc_even_sum(int n){
    // 此处编写代码
}

// 例: n =10 , calc_even_sum(10) = 2 + 4 + 6 + 8 + 10 = 30

printf("1-%d所有偶数之和=",calc_even_sum(10) ) 

```


*/
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