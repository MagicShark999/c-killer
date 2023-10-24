/**

1. 关卡描述
  
循环输入，每组输入数据为一个字符，如果字符不是小写英文字母则原样输出；如果是小写英文字母则转换成大写字母后输出。当没有输入时，程序结束。

- 编写isLower函数，该函数接受一个字符参数c，如果c是小写英文字母，则返回1，否则返回0。
- 编写isUpper函数，该函数接受一个字符参数c，如果c是大写英文字母，则返回1，否则返回0。
- 编写toUpper函数，该函数接受一个字符参数c，如果c是小写英文字母，则返回对应的大写英文字母，否则返回c本身。
- 在main中循环接收用户输入的字符，如果是小写英文字母，则转换成大写字母后输出，否则原样输出。


2. 通关思路

这个问题考验的是对C语言的 ASCII码的理解。

查看这里的ASCII表:  https://jisuan5.com/ascii/


在C语言中，字符char对应的是[−128,127] 的码值，但是实际上我们不需要关心每个字母的 ASCII码 是多少。我们只需要把它当成一个符号。并且满足两种规则：
1）加减法；
2）关系比较；
加减法

例如'A' + 2和'C'等价，'z' - 1和'y'等价。原因是大写字母的 ASCII码 值是连续的，小写字母的 ASCII码 值也是连续的。
关系比较

*/


/**
 * 判断一个字符是否是小写字母
*/



#include <stdlib.h> 
#include <stdio.h>  
#include <stdbool.h> // bool类型的头文件
_Bool isLower(char c) { // Lower 小写的,Lowwer 错别字
    if (c>='a' && c <='z') {  
        return 1;  
    } else {  
        return 0;
    }
}
/**
 * 判断一个字符是否是大写字母
*/
_Bool isUpper(char c) {
    if (c>='A' && c <='Z') {  
            return 1;  
    } else {  
            return 0;
    }

}

char toUpper(char c) {
    if (isLower(c)) {   // 你外面已经判断过了，这里就不用再判断了
        return c - 32;  
    } else {  
        return c;  
    }  
}

// 看看你写的对不对
int main() {
    char c;   
    while (1)   // 1 为真，无限循环，因为1永远为真，所以循环永远不会结束，除非遇到break语句
    {
        
        printf("请输入一个字符(a-z,A-Z):\n");  
        scanf(" %c", &c);
         //不输入任意字符，直接按下回车键，此时c=='\n'，结束循环 \n 是换行符也就是回车键
        if (c == 'x') break;// 要指定一个退出条件，否则会无限循环下去，你可以试试输入x时退出循环
        if (isLower(c)){ 
            printf("%c\n ", toUpper(c));
        }else if(isUpper(c)){
            printf("%c\n ", c);
        }
    
    };


}