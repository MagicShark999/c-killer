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


_Bool flip_coin(){
    int coin = (int)rand() % 2;  
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
    srand(time(NULL)); 
    
    printf("Enter your money: ");  
    scanf("%d", &money);  
    printf("Enter the count of coins: ");  
    scanf("%d", &count);  
    printf("Enter the cost of coins: ");  
    scanf("%d", &cost);  
    printf("Enter the rate of coins: ");  
    scanf("%d", &rate);  
    printf("Enter the count of games: ");  
    scanf("%d", &games);  
    
        
    while (bet_again && games > 0) {  
        int bet = money - cost;  
        if (bet <= 0) {  
            printf("Game over.\n");  
            bet_again = 0;   
        } else {  
            for (int i = 0; i < count; i++) {  
                if (flip_coin()) { 
                    printf("You win %d!\n",rate);  
                    won += bet + rate;  
                } else { 
                    printf("You lose %d!\n", rate-cost);  
                    lost += bet;  
                }  
            }  
            money = lost - won;   
            games--;  
            printf("All you have left is %d.If you want to play again, please enter one; otherwise, please enter zero\n", money);  
            scanf("%d", &bet_again); 
        }  
    }  
    

    if (bet_again) {  
        printf("You won %d!\n", won);  
    } else {  
        printf("You lost %d!\n", lost);  
    }  
        return 0;  
    }

