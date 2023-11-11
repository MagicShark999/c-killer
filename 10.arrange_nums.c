/**
 * 
 * 声明一个整数数组并初始化为1-5，然后输出所有不重复的排列组合
 * 
 * 例:当数组长度为3时，输出：
 * 1 2 3
 * 1 3 2
 * 2 1 3
 * 2 3 1
 * 3 1 2
 * 3 2 1
 * 
 * 知识点：
 * 
 * - 如何声明一个数组：  int a[3];
 * - 如何初始化一个数组  int a[3] = {1,2,3};
 * - 如何输出一个数组 
 * - 循环嵌套输出?
 * 
 * 
 * 
*/
#include<stdio.h>


int main(){
    int a[5]={1,2,3,4,5};
    int b,c,d,e,g;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5 ; j++){
            if (j!=i){
                for (int h = 0; h < 5 ; h++){
                    if (h!=i && h!=j){
                        for (int k = 0; k < 5 ; k++){
                            if (k!=i && k!=h && k!=j){
                                for (int r = 0; r < 5 ; r++){
                                    if (r!=i && r!=h && r!=j && r!=k){
                                        printf("%d%d%d%d%d\n",a[i],a[j],a[h],a[k],a[r]);
                                    }
                                }
                            }
                        }
            
                    }
                }
            }
        }
        
    }
    
}