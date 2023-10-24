/**
 * 
 * 生成包括1000个元素的数组，数组中的元素为从1~1000
 * 
 * 分别统计数组中, 能被2，3，5，7，11整除的元素的个数并找印出来
 * 
 * 
 * 
 * 
 * ## 要求：
 * 
 * 1.
 * 2. 编写一个函数stat_multiple(num,value)，用来统计传入的num能否被value整除
 * 2. 分别统计数组中, 能被2，3，5，7，11整除的元素的个数并找印出来
 * 
 * ## 思路：
 * 
 * 1. 声明一个数组nums，长度为1000
 * 2. 使用for循环，生成填充1~1000数组中
 * 3. 声明一个数组multiple[5]用来保存2，3，5，7，11整除的元素的个数，如multiple[0]用来保存能被2整除的元素的个数，
 * multiple[1]用来保存能被3整除的元素的个数，以此类推
 * 4. 使用for循环，遍历数组nums，使用stat_multiple函数，判断能否被2，3，5，7，11整除,如果能则multiple对应的值加1
  *
 * ## 例如:
 * 
    stat_multiple(10,4)
 * 
*/

#include <stdlib.h> 
#include <stdio.h>  

 
/**
 * 返回num能否被value整除
 *
 *  
 * 
 * @param {int} num 
 * @param {int} value
 * 
 * @return {int} 如果可以被整除，返回1，否则返回0
 *
*/
int is_divisible(int num,int value){      
      if(num % value==0){         
         return 1;
      }else{         
         return 0;
      }
}
 
int main(int argc,char* argv[]){ 
   int nums[1000];
   int i;   
      for(i=0;i<1000;i++){
         nums[i]=i+1;
      }
   
   int results[5]= {0};
   
      for (i = 0; i < 1000; i++){
         if (is_divisible(nums[i],2)==1)
         {
            results[0]++;
         }else if(nums[i]%3==0){
            results[1]++;
         }else if(nums[i]%5==0){
            results[2]++;
         }else if(nums[i]%7==0){
            results[3]++;
         }else if(nums[i]%11==0){
            results[4]++;
         }
         
      }
   printf("1-1000中能被2整除的数有%d个\n",results[0]);
   printf("1-1000中能被3整除的数有%d个\n",results[1]);
   printf("1-1000中能被5整除的数有%d个\n",results[2]);
   printf("1-1000中能被7整除的数有%d个\n",results[3]);
   printf("1-1000中能被11整除的数有%d个\n",results[4]);



}