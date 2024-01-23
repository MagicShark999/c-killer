/**
 * 
 * 栈
 * 
 * 堆 栈
 * 
 * 
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define STACK_FULL 1       // 栈已满
#define STACK_EMPTY 2      // 栈为空
#define STACK_INVALID 3      // 栈不可用，无效

typedef struct{
    int caps;       // 栈的容量
    int maxCaps;    // 栈的容量
    int stepCaps;    //每次扩容的大小
    int size; // 栈里面保存的元素的数量 
    int item_size; // 栈的元素大小 
    void *data; // 栈的数据     
    // 
   //int (*push)(Stack* stack, void* item);    
    
} Stack;   

/**
 * 判断栈是否可用
*/
int is_stack_active(Stack* stack){
    if(stack->data == NULL){
        return STACK_INVALID;
    }
    return 0;
}



/**
 * 向栈中添加元素
*/
int push_stack(Stack* stack,void* item){

    //判断栈是否可用
    if (is_stack_active(stack) == STACK_INVALID)
    {
        return STACK_INVALID;
    }
    
    
    // 判断栈是否已满
    if(stack->size == stack->maxCaps){
        return STACK_FULL;
    }else{
        if(stack->size == stack->caps){
            size_t newSize =(size_t)((stack->caps + stack->stepCaps)*stack->item_size);
            void* newData = realloc(stack->data,newSize);
            stack->caps = stack->caps + stack->stepCaps;
            stack->data = newData;
        }
    }

    // 计算item的地址
    void* addr = (void *)((int *)stack->data + stack->size * stack->item_size);
    // // 将item的值拷贝到addr的地址
    memcpy(addr,item,stack->item_size);
    // 栈的元素数量加1
    stack->size++;

    return 0;
}
/**
 * 从栈弹出元素到item
 * 
 * int x
 * pop_stack(mystack,(void*)&x)
 * 
 * 检查一下stack.size>0
 * 
 * 1. 从栈中弹出一个元素,复制到item指向的地址
 * 2. 栈的元素数量减1
 * 
 * 自动扩容的功能:
 * 
 * 1. 指定栈初始大小,栈的最大容量，
 * 
 * 
 * 
*/
int pop_stack(Stack* stack,void* item){    
    if(stack->size == 0){
        return STACK_EMPTY;
    }
    stack->size--;
    // 计算item的地址
    void* addr = (void *)((int *)stack->data + stack->size * stack->item_size);
    // // 将item的值拷贝到addr的地址
    memcpy(item,addr,stack->item_size);
    
    return 0;

}

int destory_stack(Stack* stack){
    free(stack->data);
    stack->data = NULL;
    stack->caps = 0;
    stack->size = 0;
    stack->item_size = 0;
    return 0;
}
/**
 
 Stack myStack = create_stack(10,sizeof(int)) // 创建一个容量为100的栈，栈里面保存的元素的大小为int

 push_stack(myStack,1);
 push_stack(myStack,2);
 push_stack(myStack,3);


*/

Stack create_stack(int caps,int item_size){
    // 分配内存，栈的大小占用内存
    void* data = calloc(caps,item_size);
    Stack stack = {caps,65535,64,0,item_size,data}; 

    return stack;
}

int main(){

    Stack my_stack = create_stack(10,sizeof(int));
    int item1 = 1,item2 = 2,item3 = 3;;
    push_stack(&my_stack,&item1);
    push_stack(&my_stack,&item2);
    push_stack(&my_stack,&item3);


    printf("栈的容量为：%d\n",my_stack.caps);
    printf("栈里面保存的元素的数量为：%d\n",my_stack.size);
    printf("栈的元素大小为：%d\n",my_stack.item_size);
    printf("栈的地址为：%p\n",my_stack.data);


    int item11,item12 ,item13;




    for (int i = 0; i < 10000; i++)
    {
        int item1 =i;
        push_stack(&my_stack,&item1);
    }
    printf("栈的容量为：%d\n",my_stack.caps);
    printf("栈里面保存的元素的数量为：%d\n",my_stack.size);
    printf("栈的元素大小为：%d\n",my_stack.item_size);
    printf("栈的地址为：%p\n",my_stack.data);





    printf("--- pop ----------\n");
    // memcpy(&item11,my_stack.data,my_stack.item_size);
    // memcpy(&item12,(void *)((int*)my_stack.data+1*my_stack.item_size),my_stack.item_size);
    // memcpy(&item13,(void *)((int*)my_stack.data+2*my_stack.item_size),my_stack.item_size);

    pop_stack(&my_stack,&item11);
    pop_stack(&my_stack,&item12);
    pop_stack(&my_stack,&item13);


    printf("栈里面的元素为：%d,%d,%d\n",item11,item12,item13);

    destory_stack(&my_stack);

}

