#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int bingo [4][5];
  int aleatorio;
  printf("\n\t---> VAMOS SORTEAR UMA CARTELA DE BINGO!! <---");
  printf("\n\n\n");
  for(int n=0;n<4;n++){
      for (int k = 0; k <= 5; k++){
        aleatorio = rand () % 10;
          bingo[n][k]= aleatorio;
      }
    
  }
  for(int n=0;n<4;n++){
       for (int k = 0; k <= 5; k++){
        
        printf("\t| %d |", bingo[n][k]);

      }
    
  } 


  
  
  

return 0;

}