#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int cash = 100;

void Play( int bet){
     char C[3] = {'J','Q','K'};
     printf("Shuffling...\n");

     srand(time(NULL));
     int i;
     for ( i = 0; i < 5; i++){
          int x = rand() % 3;
          int y = rand() % 3;

          int temp = C[x];
          C[x] = C[y];
          C[y] = temp;
     }

     int playerGuess;
     printf("Guess position of Queen - 1,2,3: ");
     scanf("%d",&playerGuess);

     if(C[playerGuess-1] == 'Q'){
          cash = cash + 3*bet;
          printf("You win!!!\nResult = %c %c %c \tTotal Cash = %d\n\n",
          C[0],C[1],C[2],cash);
     }
     else{
          cash = cash - bet;
          printf("You loose!!!\nResult = %c %c %c \tTotal Cash = %d\n\n",
          C[0],C[1],C[2],cash);
     }

}


int main()
{
     int bet;
     while ( cash > 0){
          printf("What is your bet? $");
          scanf("%d",&bet);

          if ( bet == 0 || bet > cash )
               break;

          printf("\n");
               Play(bet);
     }

     return 0;
}
