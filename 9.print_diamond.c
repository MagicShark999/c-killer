/**
 *
 * 输入一个菱形的边长正整数N,1<=N<=300
 *
 * 输出菱形由大写字母组成,首字符为Z,依次Y,X,....A,Z,Y,X...A...
 *
 * 例:
 *
 * n=6
 *
 * 输出:
           Z
         Y   X
       W        V
     U            T
   S                R
 Q                    P
   O                N
     M            L
        K       J
          I   H
            G
 *
*/

/**
 * 输出n个空格
 *
 * 例: output_backspace(5)代表输出5个空格
 *
 */
#include <stdio.h>

/**
输出n个空格
*/
void output_space(int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  { // n=1会输出两个空格？
    printf("  ");
  }
}

int main()
{
  int line, k, a, b, d;
  int side_len = 8; // 取一个有意义的名字

  char c = 'Z';       //
  int char_index = 0; // 用于计算字母的索引,每输出一个字符,索引+1，到A时，索引为26

  // 先这样将上半部分打印出来，下半部分类似，只是反过来了

  // 先备份一下

  for (line = 0; line <= 2 * side_len - 2; line++){

    // 输出字符
    if (line == 0){ // 第一行，只有一个字符
      // line==0的时候，输出的是一个字符，这里输出的是side_len个空格
      output_space(side_len - 1);
      printf("%c\n", c);
      c--; // 从Z->Y
      if (c == 64) c = 'Z';
    }else { // 接下来处理两个字符的情况
      // 前置空格
      if (line < side_len){
        output_space(side_len - line - 1); //??
        // 第一个字符
        printf("%c", c);
        c--; // 从Z->Y
        if (c == 64) c = 'Z';
        // 中间空格
        output_space(2 * line - 1 +1 ); //  这是中间空格的个数
        // 第二个字符
        printf("%c", c);
        c--; // 从Z->Y
        if (c == 64)  c = 'Z';
        printf("\n");
      }else if (line>side_len-1&&line!=(2*side_len-2)){
         // 注意缩进
        output_space(line - side_len+1 );
        printf("%c", c);
        c--; // 从Z->Y
        if (c == 64) c = 'Z';
        output_space(2 * (2 * side_len - line )-(side_len-3)+1); // 这是中间空格的个数
        printf("%c", c);
        c--; // 从Z->Y
        if (c == 64) c = 'Z';
        printf("\n");
      
      }else if (line==2*side_len-2){
        output_space(line - side_len+1); //??
        // 第一个字符
        printf("%c", c);
        c--; // 从Z->Y
        if (c == 64) c = 'Z';
      }
      
      
    }
  }
    return 0;

}


























  // if (line == 0){
  //   printf("%c\n", c);
  //   line++;
  // }else{
  //   printf("%c", c - (2 * line) % 26 + 3);
  //   for (a = 0; a < 2 * line - 1 && line <= side_len; a++)
  //   {
  //     printf(" ");
  //   }
  //   for (d = 0; d <= 2 * side_len - line + 1 && line > side_len; d++)
  //   {
  //     printf(" ");
  //   }
  //   printf("%c", c - (2 * line) % 26 + 2);
  //   printf("\n");
  //   for (b = side_len; b <= line; b++)
  //   {
  //     printf(" ");
  //   }
  // }

  // 也可以换一种更简单的思路：
  // 1. 第一行有 6*2个空格，1个字符
  // 2. 接下第二行有 前置空格比上一行少2个空格,中间空格比上一行多2个空格

  // scanf("%d", &side_len);  先不考虑输入，先写死一个值，调试好了再考虑输入

  // 问题分解：先处理上半部分，再处理下半部分
  // 将复杂问题分解为简单问题，逐个击破，这是解决问题的常用方法
  // 由于菱形的上半部分和下半部分是对称的，所以只需要处理上半部分，下半部分的处理类似，只是反过来了，这可以简化问题的处理

  // // 处理上半部分:, line代表行号，从0开始，side_len结束
  // for (line = 0; line < side_len ; line++){

  //   // 输出字符
  //   if(line == 0){//第一行，只有一个字符
  //   // line==0的时候，输出的是一个字符，这里输出的是side_len个空格
  //     output_space(side_len-1);
  //     printf("%c\n", c);
  //     c--;  // 从Z->Y
  //     if(c==0) c='Z';
  //   }else{  // 接下来处理两个字符的情况  ，这是从第2行开始的情况
  //         output_space(side_len-line-1);  // 每一行均有两个字符
  //         // 第一个字符
  //         printf("%c", c);
  //         c--;  // 从Z->Y
  //         if(c==0) c='Z';
  //         // 中间空格
  //         output_space(2*line-1);  //??
  //         // 第二个字符
  //         printf("%c", c);
  //         c--;  // 从Z->Y
  //         if(c==0) c='Z';
  //         printf("\n");
  //   }
  //   // 注意：变量取一个有意义的名字，不要用a,b,c,d这样的名字，你看到a,b,c,d就不知道它们的意义了，容易出错，不利于阅读，容易看花眼
  //   // 适当的空行和注释，可以让代码更清晰，更容易阅读，也有利于自己理解
  // }