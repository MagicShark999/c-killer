/**
 * 
 * 编写一个通用排序函数，可以任意数组进行排序
 * 
 * 在之前的sort_quick中，我们编写了一个实现快速排序的函数，可以对整形数组进行排序
 * 那么如果我们想编写实现对任意类型的数组进行排序的函数呢？
 * 
 * 
 * 要求：
 *   
 *  1. 分别声明三种不同类型的数组，如下：
  *      int list1[]={34,6,1,7,1,7,3,4,666,34,46,22,41,33}  
 *      long list1[]={4,6,341,37,11,7,3,4,66,34,46,212,421,3} 
 *      char* list1="1469bvdsdw25d"
 *  2. 使用sort函数对数组进行排序后再输出
 * 
 *  
 * 
 * 知识点：
 * 
 *  - 无论数据类型是什么，排序的逻辑是一样的
 *  - 每种数据类型的占用的字节数是不一样的，因此需要知道每个类型的字节数才能正确地进行排序
 *  - sort函数的第一个参数是一个void指针，这是因为我们不知道传入的数据类型是什么，所以使用void指针来接收任何类型的数据
 *  - sort函数的第二个参数是item_size,表示每个元素占用的字节数
 *  - 在C语言中，我们可以使用sizeof运算符来获取一个变量占用的字节数
 *  - 在sort中需要进行强制类型转换
 * 
 */
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  

void sort(void* arr,int item_size){
     int arr_len[sizeof(arr) / sizeof(arr[0])]; 
     for (int i = 0; i <item_size ; i++) {  
        arr[i] = (int) arr[i];  
    }  
    int i,j,temp;
    for ( i = 1; i < item_size; i++){
       for ( j = 0; j <item_size-i; j++){
        if (arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }
}

int main(){
    int list1[]={34,6,1,7,1,7,3,4,666,34,46,22,41,33};
    long list2[]={4,6,341,37,11,7,3,4,66,34,46,212,421,3};
    char* list3="1469bvdsdw25d";
    int length1 = sizeof(list1) / sizeof(list1[0]);  
    int length2 = sizeof(list2) / sizeof(list2[0]);  
    int length3 = strlen(list3);  
} 

