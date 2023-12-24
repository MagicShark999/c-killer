/**
 * 
 * 显示一个动态进度条
 * 
 * 在指定的时间内，在屏幕上显示一个动态进度条从0-->100%
 * 如：
 * 
 * ## 1%
 * ###### 32%
 * ########## 63%
 * ############## 78%
 * ################# 81%
 * ####################### 90%
 * ############################# 94%
 * ################################ 100%
 * 
 * 要求：
 *  - 指定进度条宽度字符数为80
 *  - 指定更新进度条的时间间隔，如100ms，可以控制进度条的显示快慢
 *  - 在指定的时间内，进度条从0%更新到100%
 * 
 * 知识点：
 *  - 为了实现动态效果，在滚动条从0-100的过程中，需要使用Sleep函数来进行延时
 *  - 打印进度条需要每次都从头开始打印，哪个ASCII是回到行头开始打印？ 回车\r？换行\n？
 *   
 * 
 *  
 * 
 * 
*/
#include <stdio.h>  
#include <unistd.h>


  
void jdt(int per, int width, int max) {  
    int a = width * per / max;   
    printf("\r"); 
    for (int i = 0; i < a; i++) {  
        printf("#"); 
    }  
    for (int i = a; i < width; i++) {  
        printf(" "); 
    }  
    printf(" %d%%", per); 
    fflush(stdout); 
}  
  
int main() {  
    int width = 80; 
    int max = 100; 
    int sjjg = 1000000; 
  
    for (int i = 0; i <= max; i++) {  
        jdt(i, width, max);  
        usleep(sjjg);   
    }  
    printf("\n");  
    return 0;  
}