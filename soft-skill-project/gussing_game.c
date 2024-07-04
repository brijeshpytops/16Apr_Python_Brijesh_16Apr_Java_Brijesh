#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));
    
    int win_num = rand() % 101;
    
    printf("winning number is %d \n", win_num);
    int gus_num;
    int game_status = 1;
    int gus_count = 0;

    while(game_status){
        printf("Guess a num: ");
        scanf("%d", &gus_num);
        if (win_num == gus_num){
            gus_count++;
            printf("Congrats, You are win after gussing num %d times!!!\n\n", gus_count);
            
            printf("Choose a number bellow: \n");
            printf("You want to stop the game: PRESS : 0 \n");
            printf("You want to play againg? PRESS : 1 \n");
            scanf("%d", &game_status);
            
            if (game_status){
                gus_count = 0;
            }else{
                game_status = 0;
            }
        }else{
            if(gus_num < win_num){
                printf("Too low\n\n");
            }else{
                printf("Too high\n\n");
            }
            gus_count++;
        }
        
    }

    return 0;
}