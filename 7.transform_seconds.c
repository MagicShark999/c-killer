/**
 
 输入任意一个秒数,转换为小时数,分钟数和秒数,并以如下格式输出:
 
 例如:
 
  -  60,转换为 0 hours 1 minute 0 seconds
  -  3600,转换为 1 hours 0 minutes 0 seconds
  -  3601,转换为 1 hours 0 minutes 1 seconds

 知识点:

   - 如何获取用户输入的数字? 秒数可能很大,应该使用什么类型? float? double? long long?
   - 如何计算小时数? 如何计算分钟数? 如何计算秒数?
   - 如何格式化输出? 例如: 1 hours 0 minutes 1 seconds
   - 除法运算符/和取余运算符%的区别?
   - 进行强制类型转换时,为什么要加上(int)前缀?

   
 * 
*/

#include <stdio.h>



int main() {
  long h,m,s,total;
  printf("please input the total second:");
  scanf("%d",&total);
  h=total/3600;
  m=(total/60)%60;
  s=total%60;
  printf("%02d:%02d:%02d",h,m,s);
  return 0;
}