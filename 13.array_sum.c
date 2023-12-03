/**
 * 
 * 编写一个函数用来计算数组元素之和
 * 
 * 要求:
 * - 编写sum_array函数, 用来计算数组元素之和
 * - 在main函数中
 *   - 输入任意数字n(n>0 && n<1000),
 *   - 调用上一个示例中编写的new_array函数, 生成长度为n的数组
 *   - 将生成的数组传入sum_array函数, 计算数组元素之和并打印输出
 *   {1,2,3,4,....,100} = 5050
 * 
 * 知识点:
 * 
 * 1. 如何调用保存的12.array_generate.c中编写的new_array函数
 *    include "12.array_generate.c"        // 这样就可以调用12.array_generate.c中的函数了
 *    int* p = new_array(100)   
 * 2. 如何传入数组作为函数的参数
 *    int sum_array(int arr[])
 * 3. 如何得到数组的长度? sizeof(arr)/sizeof(arr[0])??
 * 
 *    
 * 
 * 
*/



/**
 * 计算数组元素之和
 * 
 * arr: 数组
 * 
*/
#include "12.array_generate.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sum_array(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++){
       sum=sum+arr[i];
    }
    return sum;
}


int main(){
    int n;
    printf("请输入一个整数n:");
    scanf("%d",&n);
    int *arr=new_array(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i != 0 && (i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    sum_array(arr,n);
    printf("%d",sum_array(arr,n));
    return 0;
}