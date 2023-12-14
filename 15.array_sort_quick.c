/**
 * 
 *   实现对一个数组进行快速排序 
 * 
 * 要求：
 *  1. 调用示例中编写的new_array函数,输入一个正整数n，生成一个长度为n的数组，数组中的元素是随机生成的，随机生成的范围是[0,1000)
 *  2. 编写一个show_array函数，用来打印输出数组中的元素，每行10个元素
 *  3. 编写一个quick_sort函数，用来对数组进行快速排序
 *  4. 调用show_array显示排序后的数组
 * 
 * 知识点：
 * - 什么是快速排序?
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


void quick_sort(int arr[],int low,int high){
    int i,j,c,temp;
    i=low;
    j=high;
    c=arr[low];
    if (i>j)
    {
        return;
    }
    while(i!=j){
        while (arr[j]>=c&&j>i)
        {
            j--;
        }
        while (arr[i]<=c&&j>i)
        {
            i++;
        }
        if(j>i){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;

        }
    }
    arr[low]=arr[i];
    arr[i]=c;
    quick_sort(arr,low,i-1);
    quick_sort(arr,i+1,high);
}

int main(){
    int n;
    printf("请输入一个整数n:");
    scanf("%d",&n);
    printf("随机生成的数组为：");
    int *arr=new_array(n);
    show_array(arr,n);
    quick_sort(arr,0,n-1);
    printf("排序后的数组为：");
    show_array(arr,n);
}
