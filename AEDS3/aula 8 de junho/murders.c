#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int IsaMurder (char linha []){ 
    char linha_impar[50],linha_par[50];
    int tam = strlen(linha);
    for(int i=0;i<tam;i++){ 
        linha_impar[i]=linha;
        i++;
        
    } 
    for(int i=1;i<tam;i++){
        linha_par[i]=linha;
        i++;
    }
    for(int i=0;i<tam;i++){
        if(strcmp(linha_impar[i],linha_par[i])==0){
            
        }
    }
}
struct Murder{
    char assasino[10];
    char vitima[10];
}Murder;

int main(){
    char linha[20];
    scanf("%[^\n]s",linha);
    while(strcmp(linha,"FIM") != 0){

    }
}