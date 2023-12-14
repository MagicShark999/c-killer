/**
 * 
 *   实现对一个数组进行冒泡排序 
 * 
 * 要求：
 *  1. 调用示例中编写的new_array函数,输入一个正整数n，生成一个长度为n的数组，数组中的元素是随机生成的，随机生成的范围是[0,1000)
 *  2. 编写一个show_array函数，用来打印输出数组中的元素，每行10个元素
 *  3. 编写一个bubble_sort函数，用来对数组进行冒泡排序
 *  4. 调用show_array显示排序后的数组
 * 
 * 知识点：
 * - 什么是冒泡排序?
 * 
*/

#include "12.array_generate.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void show_array(int arr[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i != 0 && (i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}


void bubble_sort(int arr[],int n){
    int i,j,temp;
    for ( i = 1; i < n; i++){
       for ( j = 0; j < n-i; j++){
        if (arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }
    
}

int main(){
    int n;
    printf("请输入一个整数n:");
    scanf("%d",&n);
    printf("随机生成的数组为：");
    int *arr=new_array(n);
    show_array(arr,n);
    bubble_sort(arr,n);
    printf("排序后的数组为：");
    show_array(arr,n);
}