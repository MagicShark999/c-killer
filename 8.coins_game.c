/**
 * 
 * 编写一个程序，模拟你进入赌场玩硬币游戏
 *  
 *   
 * 
 * 步骤:
 * 
 * 1. 输入你携带的多少钱
 * Enter your money: 100↙︎            
 * 2. 输入抛硬币的次数
 * Enter the count of coins: 3↙︎            
 * 3. 输入每次抛硬币的需要花费用的金额,比如输入2,表示每次抛硬币需要花费2元,也就是从总金额中减去2元 
 * Enter the cost of coins: 2↙︎            
 * 4. 输入每次抛硬币的赔率,比如输入5,代表你赢了就可以得到5元奖金,输了什么都不得到,rate>cost
 * Enter the rate of coins: 5↙︎
 * 5. 输入你需要玩多少次? 比如输入100,代表你需要玩100次,超过100次则退出程序
 * Enter the count of games: 100↙︎
 * 
 * 6. 编写一个函数flip_coin(),
 *     - 该函数使用随机函数来模拟抛硬币，返回值大于0.5代表正面,返之代表反面
 * 
 * 7. 如果钱输完了,则退出程序,并打印输了多少钱
 *    如果达到指定的玩的次数,则显示赢了多少钱(You won 100.)或者输了多少钱(You lost 100.)
 * 
 *     
 * 知识点:
 * 
 * - 学习随机函数的使用
 * 
 * 
*/

/**
 * 该函数用来模拟抛硬币,如果正面返回1,反面返回0
*/
#include <stdio.h>
#include <stdlib.h>  
#include <time.h> 
#include<stdbool.h>

_Bool flip_coin(){
    int coin = (int)rand() % 2;  // rand是一个随机函数,返回一个0-1随机数
        if (coin ==1) {  
            return 1; 
        } else {  
            return 0;   
        }  
}

int main(){
    int money, count, cost, rate, games;  
    int won = 0, lost = 0;  
    _Bool bet_again = 1;  
    // srand(time(NULL));  
    
    printf("Enter your money: ");  
    scanf("%d", &money);  
    // printf("Enter the count of coins: ");  
    // scanf("%d", &count);   这个参数不需要了
    printf("Enter the cost of coins: ");  
    scanf("%d", &cost);  
    printf("Enter the rate of coins: ");  
    scanf("%d", &rate);  
    printf("Enter the count of games: ");  
    scanf("%d", &games);  
    
    // 记住原先的钱,用来判断你赢了还是输了
    int old_money = money;

    for (int i = 0; i < games; i++) {      // 你要玩多少次,就循环多少次      
        if(money<cost){        // 如果钱还不够抛硬币的花费,则退出循环
            printf("你的钱不够了,不能再玩了!\n");
            break;
        }
        // 无论你赢了还是输了,你的钱都要减去每次抛硬币的花费,就像你买彩票2块钱,你要先减去买彩票的钱      
        money-=cost; // 你的钱要先减去每次抛硬币的花费,就像你买彩票2块钱,你要先减去买彩票的钱
        if (flip_coin()) { // 正面代表赢了，所以你的钱要加上赔率                    
            // 赢了就可以得到赔率的奖金,就像你买彩票中奖5块了,你要加上奖金
            money += rate;  // 因为你赢了,所以你的 要加上赔率，就像你买彩票中奖5块了,你要加上奖金
            printf("你赢了一次,余额%d!\n",money);   
        } else { //  反面代表输了，所以你的钱要减去赔率                    
            printf("你输了一次,余额%d!\n",money);   // 输了
        }  
    }    

    // 退出循环后,如果你的钱大于原先的钱,则代表你赢了,否则代表你输了

    if (money > old_money ) {  
        printf("You won %d!\n", money - old_money);  
    } else if(money <old_money ){  
        printf("You lost %d!\n", old_money-money);  
    }else{
        printf("你白忙活了\n");  
    }
        return 0;  
    }

