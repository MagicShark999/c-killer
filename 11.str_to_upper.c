/**
 * 
 * 输入一个字符串，将字符串转换为大写
 * 
 * Enter string: abc
 * Output: ABC
 * 
 * 要求编写:
 * 
 * - _Bool is_lower(char c)：判断字符c是否是小写字母，如果是小写字母，返回1，否则返回0
 * -  to_upper(char str[])：将输入的字符串转换为大写字母
 * 
 * 
 * 
 * 知识点：
 * 
 * 1. 接收字符串输入,scan("%s",str"),也可以使用fgets函数
 * 2. 需要声明一个字符数组，用来存储输入的字符串： 如char str[100];代表最多可以输入100个字符
 * 3. 要转换为大写，需要将小写字母转换为大写字母，可以使用ASCII码，小写字母的ASCII码比大写字母的ASCII码大32
 * 4. 需要判断输入的字符是否是小写字母，如果是小写字母，就将其转换为大写字母，如果不是小写字母，就不需要转换
   5. to_upper传参时，需要传入一个字符数组，因为需要修改数组中的元素，所以需要传入数组的地址
   6. 字符串的结束标志是'\0'，所以需要遍历字符串，直到遇到'\0'为止



 * 
*/
#include <stdlib.h> 
#include <stdio.h>  
#include <stdbool.h>


/**
 * ：判断字符c是否是小写字母，如果是小写字母，返回1，否则返回0
*/
_Bool is_lower(char c){
      if (c>='a' && c <='z') {  
        return 1;  
    } else {  
        return 0;
    }
}
/**
 * 将输入的字符串转换为大写字母
*/
void to_upper(char str[]){
  int i;
  for (i = 0; str[i] != '\0'; i++) {  
        if (is_lower(str[i])) {  
            str[i] = str[i] - 32;  
        }  
    }  
}  
  

 

int main(){
      char str[100];
      printf("请输入一串字母:");
      fgets(str,sizeof(str),stdin);
      to_upper(str);
      printf("%s",str);
      return 0;
 }