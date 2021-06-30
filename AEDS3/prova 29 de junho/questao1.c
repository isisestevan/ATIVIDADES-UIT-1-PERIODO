#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#define TAM 32
int pesquisa_binaria(int chave,int vetor[],int d,int e){
    int centro = (e+d)/2;
    if(vetor[centro] == chave){
        
        return centro;
    }
    
    if(e >= d){
        return -1;
    }else {
    if(vetor[centro] < chave){
       return pesquisa_binaria( chave,vetor,d,centro+1);
    }else {
       return pesquisa_binaria(chave,vetor,centro-1,e);
    } 
  }
}

void preenche_vetor(int vetor[]){
    for(int i=0; i<TAM; i++){
        vetor[i] = i;
    }
}
 void quicksort(int vetor[], int esq, int dir){
    int i = esq, j = dir;
    int pivo = vetor[(esq + dir) / 2];
    while (i <= j) {
        while (vetor[i] < pivo)
            i++;
        while (vetor[j] > pivo)
            j--;
        if (i <= j){
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
            i++; j--;
        }
    }
    if (esq < j)
        quicksort(vetor, esq, j);
    if (i < dir)
        quicksort(vetor, i, dir);
}

int main(){
    int chave;
    int vetor[TAM]; 
    preenche_vetor(vetor);
    quicksort(vetor,0,TAM-1);
     printf("Informe o valor que deseja encontrar\n");
     scanf("%i",&chave);
    if (pesquisa_binaria(chave,vetor,TAM-1,0) != -1){
        printf("Chave encontrada\n");
    } else {
        printf("Chave nao encontrada\n");
    } 
    return 0;
}