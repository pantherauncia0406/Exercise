#include <stdio.h>
#include <stdlib.h>

int main(void){
    int round[5];
    int i, H=0, T=0;

    for(i = 0; i<5; i++){
        round[i] = (rand()%2);
    }

    for(i = 0; i<5; i++){
        if(round[i] == 1){
            H++;
            printf("Round %d: Heads\n", i+1);
        }
        else{
            T++;
            printf("Round %d: Tails\n", i+1);
        }
    }
    printf("Heads: %d, Tails: %d\n", H, T);
    if(H < T)
        printf("%s win!\n", name);
    else 
        printf("%s lost!\n", name);
    
    return 0;
}
