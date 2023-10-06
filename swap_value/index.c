/**
 * 
 * 输入两个变量，交换变量的值
 * 
 * 要求：
 * 
 * 1. 接受输入两个数字，使用scanf函数
 * 2. 交换两个变量的值
 * 3. 输出交换后的值，显示为：交换后的值为：a=xxx,b=xxx
 * 4. 循环执行1~3步骤，如果没有输入则退出程序
 * 
 * 知识点：
 * 
 * - 要循环接受输入，应该采用循环,是用for还是while循环？  采用while循环是不知道循环次数的，采用for循环是知道循环次数的
 * - 如何判断是否输入了数字？  scanf函数如何判断是否输入了数字？
 * - 如何接收两个数字？  scanf函数如何接收两个数字？
 * - 如何交换两个变量的值？  交换两个变量的值，需要使用第三个变量
 * 
 * 自学技巧:
 * - 查找scanf函数的介绍，看看如何使用
 * 
 * 
 * 
*/
#include <stdlib.h> 
#include <stdio.h>  





int main(int argc,char* argv[]){ 
    int a;
    int b;
    
   
    while (1)
    {   printf("Please enter a&b:\n");
        scanf("%d%d",&a,&b);
       
        if(a==0 && b==0)break;
        int c;
        c=a;
        a=b;
        b=c;
        printf("交换后a=%d,b=%d.\n",a,b);
        
        
        
    };
    return 0;







}