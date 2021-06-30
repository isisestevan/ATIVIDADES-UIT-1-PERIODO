#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ispalindromo(char linha[]){ 
    int i, tam, diferentes = 0;
    tam = strlen(linha);
    tam--;
    i = 0; 
    while(tam >= i){
        if(linha[i] != linha[tam]) 
            diferentes ++;
        i++;
        tam--;
    }
        if(diferentes == 0)
        printf("SIM\n");
    else
        printf("\nNAO");
 

}

int main (){
    char linha[100];
    
    scanf("%[^\n]s", linha);
    ispalindromo(linha);
    
} 