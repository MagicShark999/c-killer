/**
 * 
 * 在上例中，通过时间来控制进度条的显示
 * 在本例中，我们要实现能通过左右键来控制进度的的显示 
 * 
 * 要求：
 *  - 显示一个进度条，初始值为50%
 *  - 按左键，进度条减少1%，直至0%
 *  - 按右键，进度条增加1%，直至100%
 *  
 * 
*/
#include <stdio.h>  
#include <string.h>  
int main(){
    int i;
    char k;
    char arr[101]="###############################################################";
    printf("%s", arr);  
    fflush(stdout);     
        while (1)
        {
            scanf("%c",&k);
            if (k==77)
            {
               printf("\b ");
            }else if (k==75)
            {
                 printf("#");
            }else
                break;
            
            
                
    }  
        
       
        

    
   

}
