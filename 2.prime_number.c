#include <stdio.h>

int is_prime_number(int x){
    int i=0;
    for (i=2; i<x; i++)
    {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(int argc,char* argv[]){
    int b=0;
    printf("Please enter:");
    scanf("%d",&b);
    if(is_prime_number(b)==0){
        printf("%d不是素数",b);
    }else{
        printf("%d是素数",b);
    } 
}