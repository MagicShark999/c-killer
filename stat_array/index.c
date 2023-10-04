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
 * 3. 声明一个数组multiple[5]用来保存2，3，5，7，11整除的元素的个数，如multiple[0]用来保存能被2整除的元素的个数，multiple[1]用来保存能被3整除的元素的个数，以此类推
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
int stat_multiple(int num,int value){


}
 
int main(int argc,char* argv[]){ 

}