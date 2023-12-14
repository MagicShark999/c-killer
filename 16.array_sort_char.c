/**
 * 
 *   对字符串进行排序
 * 
 * 要求：
 *  1. 输入任意一个字符串
 *  2. 对字符串进行排序,按先小字再大字母的顺序排序，如输入"dacbXzy"，则输出"abcdyzX"
 * 
 * 
 * 知识点：
 * - 遍历字符串按ASCII码排序字符串数组
 * 
*/
#include <stdio.h>  
#include <string.h>

void sort_chars(char arr[]){
    char temp;  
    for (int i = 0;  arr[i] != '\0'; i++) {  
        for (int j = i+1; arr[j]!='\0'; j++) {  
            int a= 0, b = 0;  
            if (arr[i] >= 'a' && arr[i] <= 'z') a = 1;  
            else if (arr[i] >= 'A' && arr[i] <= 'Z') a = 2;  
            if (arr[j] >= 'a' && arr[j] <= 'z') b = 1;  
            else if (arr[j] >= 'A' && arr[j] <= 'Z') b = 2;
            switch (a-b)
            {
            case 0:
                  if (arr[i] > arr[j]) {  
                        temp = arr[i];  
                        arr[i] = arr[j];  
                        arr[j] = temp;  
                    }
                break;
            case 1:
                   if (arr[i] < arr[j]) {  
                        temp = arr[i];  
                        arr[i] = arr[j];  
                        arr[j] = temp;  
                    }  
                    break;  
            
                break;
            }




        }  
    }  
}

int main(){
    char arr[100];
    printf("请输入一个字符串：");  
    fgets(arr,sizeof(arr),stdin);
    sort_chars(arr);  
    printf("%s",arr);
    
    
    return 0;  
}