#include <stdio.h>

/**
输出n个空格
*/
void output_space(int n){
  int i = 0;
  for (i = 0; i < n; i++){ 
    printf(" ");            // 这里只输出一个空格
  }
}



int main() {
    int N=8;
 
 
    int i, j, k;
    char c = 'Z';

    // 打印上半部分菱形
    for (i = 0; i < N; i++) {
        // 打印前置空格
        // 为什么是N-1? ,因为边长是N
        if(i==0){       // 第一行，只有一个字符
            // line==0的时候，输出的是一个字符，这里输出的是side_len个空格
            output_space((N - 1)*2);
            printf("%c\n", c);
            c--; // 从Z->Y
            if (c == 64) c = 'Z';
        }else{
            // 前置空格 
            output_space((N - i - 1)*2);
            // 第一个字符
            printf("%c", c);
            c--; // 字符减一
            if (c == 64) c = 'Z';
            // 中间空格
            output_space((2*(i-1)+1)*2+1); // 这是中间空格的个数怎么来的？ 仔细观察，这个数列是等差数列，从第二行开始，依次介3,5,7,9,11,13,15,17,19, 所以公式就很简单了 2*(i-1)+1
            // 第二个字符
            printf("%c\n", c);
            c--; // 字符减一
            if (c == 64) c = 'Z';
        }
    }

    // 打印下半部分菱形
    for (i = N-2; i >= 0; i--) {
        // 打印前置空格
        // 为什么是N-1? ,因为边长是N
        if(i==0){       // 第一行，只有一个字符
            // line==0的时候，输出的是一个字符，这里输出的是side_len个空格
            output_space((N - 1)*2);
            printf("%c\n", c);
            c--; // 从Z->Y
            if (c == 64) c = 'Z';
        }else{
            // 前置空格 
            output_space((N - i - 1)*2);
            // 第一个字符
            printf("%c", c);
            c--; // 字符减一
            if (c == 64) c = 'Z';
            // 中间空格
            output_space((2*(i-1)+1)*2+1);
            // 第二个字符
            printf("%c\n", c);
            c--; // 字符减一
            if (c == 64) c = 'Z';
        }
    }



    return 0;
}