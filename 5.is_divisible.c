/**
 * 
 * 编写一个is_divisible函数，该函数接受两个整数参数n和m，如果n能被m整除，则返回1，否则返回0。
 * 
 * 要求：
 * 
 * - 编写一个is_divisible函数，该函数接受两个整数参数n和m，如果n能被m整除，则返回1，否则返回0。
 * - 在main中接收用户输入的两个整数
 * - 如果可以整除，输出"n可以被m整除"，否则输出"n不能被m整除"
 * 
 * 
 * 知识点：
 *    - _Bool类型是布尔类型，只有两个值：0和1，分别代表false和true
 * 
 * 
*/

#include <stdio.h>
 


_Bool is_divisible(int n, int m) {
    if (n % m == 0) {  
        return 1;  
    } else {  
        return 0;
    }

}
int main() {
 int n, m;  
    printf("请输入两个整数：\n");  
    scanf("%d %d", &n, &m);  
  
    if (is_divisible(n, m)) {  
        printf("%d可以被%d整除\n", n, m);  
    } else {  
        printf("%d不能被%d整除\n", n, m);  
    }  
  
    return 0;  
}