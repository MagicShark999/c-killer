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
  
/**
 * sort需要三个参数，(void* arr,int item_size,int arr_len) 
 * 
 * 数组地址，每个元素占用的字节数，数组长度
 * 
 * 
*/
void sort(void* arr,int item_size,int len){ 
    // 你这段代码的本意是想计算出数组的长度
    // 但是sizeof的用法是错误的，sizeof(arr[0])像这样是不对的,认真查一下sizeof的用法。如sizeof(int)
    
    // 为什么不能通过sizeof(arr) / sizeof(arr[0])来取得数组长度？
    // 因为你传入的arr是void，也就是无类型的，即然是无类型的，也就是不知道占多个少字节, 所以sizeof(arr)是无法计算出数组长度的
    // 如果arr是int类型的数组，那么sizeof(arr)就是sizeof(int) * 数组长度


     int arr_len[sizeof(arr) / sizeof(arr[0])]; 
    
    // 由于传入的是void，也就是未知类型，所以我们需要传入item_size这个参数
    // 如果item_size是1个字节,2个字节,4个字节,或者8个字段
    

    // 方法：如下:
    //  1. 有了item_size和len这两个参数，我们就可以对数组进行循环处理了
    // for ( i = 1; i < len; i+=item_size){ }
    //  2. 接下来，我们可以发现每次取数组成员时，取决于item_size的大小，我们需要分别取item_size个字节    
    // 由于我们item_size是不确定的，我们应该用一个最大的数据变量long来容纳item_size个字节的数据    
    // for ( i = 0; i < len; i+=item_size){ 
    //    long value = 0;       // 声明一个长整型，占8个字段
    //    然后将输入数组中的item_size个字节的数据拷贝到value中
    //    memcpy(&value, arr[i*item_size], item_size);  
    //    ==代表将数组中的第i个元素item_size个字节的数据拷贝到value中，由于value是8个字节，所以我们可以容纳任何类型的数据
    //    这样value就变成数据类型了，我们就可以对value进行比较了
    // }
    //  3. 由于我们需要频繁读取这样的操作，所以我们需要写一个函数get_item_value来进行上面的转换
    
 

     for (int i = 0; i <item_size ; i++) {  
        arr[i] = (int) arr[i];  
    }  
    int i,j,temp;
    for ( i = 1; i < item_size; i++){
       for ( j = 0; j <item_size-i; j++){
       // get_item_value(j) > get_item_value(j+1)            //
        if (arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }
}

/**
 * 
 * 获取数据中的第几个元素的值
 *     //    long value = 0;       // 声明一个长整型，占8个字段
    //    然后将输入数组中的item_size个字节的数据拷贝到value中
    //    memcpy(&value, arr[i*item_size], item_size);  
    //    ==代表将数组中的第i个元素item_size个字节的数据拷贝到value中，由于value是8个字节，所以我们可以容纳任何类型的数据
    //    这样value就变成数据类型了，我们就可以对value进行比较了

*/
long get_item_value(void* arr,int item_size,int index){
    long value = 0;

}

int main(){
    int list1[]={34,6,1,7,1,7,3,4,666,34,46,22,41,33};
    long list2[]={4,6,341,37,11,7,3,4,66,34,46,212,421,3};
    char* list3="1469bvdsdw25d";
    int length1 = sizeof(list1) / sizeof(list1[0]);  
    int length2 = sizeof(list2) / sizeof(list2[0]);  
    int length3 = strlen(list3);  

    // 像这样调用
    sort(list1,sizeof(list1[0])),length1);


} 

