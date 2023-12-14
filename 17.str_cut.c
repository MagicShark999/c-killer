/**
 * 
 * 输入一个字符串，返回该字符串的一个子串
 * 
 * 如：
 * 
 *   char *s = "abcdef"
 * 
 *   char *s2 str_cut(s,1,2) 代表截取字符中的的第1个字符开始的2个字符，新建一个字符串，
 * 
 *   str_cut(s,1,2)  // s2 == bc
 * 
 * 
 *  知识点：
 * 
 *   - 如何在一个函数中返回一个新的字符串?
 *   - 使用malloc为新的字符串分配一个空间
 *   - 然后将源字符串中复制到新的位置，使用memcpy进行复制
 *   - 注意字符串的未尾是\0
 * 
 * 
 */

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

char* str_cut(char* s,int start,int len){
     char* s2 = (char*)malloc((len + 1) * sizeof(char));
     memcpy(s2, s + start - 1, len);  
     return s2;    
}


int main(){
    char s[100]; 
    printf("请输入一个字符串：\n");  
    scanf("%s", s);  
    int start, len;  
    printf("请输入想要截取的起始位置和个数:\n");  
    scanf("%d%d", &start, &len); 
    char* s2 = str_cut(s, start, len);
    printf("s2 = %s\n", s2);  
}