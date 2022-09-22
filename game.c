#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=1;
    printf("*************Guess The Mumber Between 1-100*************\n");
   
    srand(time(0));
    number = rand()%100+1;
      
do{  

    scanf("%d",&guess);
     if (guess>number)
    {
        printf("\n");
        printf("********************Try Smaller Number*******************\n");
    }
    else if (guess<number)
    {
        printf("\n");
       printf("********************Try Grater Number*******************\n");
    }
    else {printf("Yes You Got it Right\n You got it in %d Attempts\n", nguess);
    }
    nguess++;

    } while (guess!=number);
     
    
    return 0;
}