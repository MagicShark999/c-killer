/**
 * 
 * 编写一个函数用new_array来生成一个整形数组并按每行10个元素的格式输出
 * 
 * 要求：
 * 
 * 1. 输入一个整数n(n>0 & n<1000)，生成一个长度为n的数组
 * 2. 数组中的元素是随机生成的，随机生成的范围是[0,1000)
 * 
 * 知识点：
 * 
 * 1. 如何生成随机数，使用rand函数，并且需要指定随机数种子srand(time(NULL));
 * 2. 如何生成[0,1000)的随机数，使用rand()%1000
 * 3. 数组的长度是变量，需要使用动态内存分配，使用malloc函数
 * 4. malloc函数的参数是需要分配的内存的大小，单位是字节，所以需要将数组的长度乘以每个元素的大小
 * 5. malloc函数的返回值是一个指针，指向分配的内存的首地址
 * 6. 函数返回的是一个指针，所以函数的返回值类型是一个指针，int* new_array(int n)
 * 7. 如何声明一个数组
 * 
 * 示例：
 * 
 * int* p = new_array(100)      
 * 
*/

/**
 * 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* new_array(int n){
    int* arr = (int*)malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    return arr;
}



// int main(){
//     int n;
//     printf("请输入一个整数n:");
//     scanf("%d",&n);
//     int *arr=new_array(n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//         if (i != 0 && (i + 1) % 10 == 0) {
//             printf("\n");
//         }
//     }
// }