#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int number,guess,nguesses=0;
    srand(time(0));
    number=rand()%100 +1;
    //printf("The number is %d \n",number);
    do{
        printf("Guess the number between 1 and 100 \n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please \n");
        }
        else if(guess <number){
            printf("Higher number please \n");
        }
        else{
            printf("Congratulations! you guessed  it in %d guesses",nguesses);
        }
        nguesses+=1;
    }while(guess!=number);
    return 0;
    
    
    
    
}