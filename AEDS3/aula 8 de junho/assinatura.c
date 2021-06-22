#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int qtd,qtd_dia;
int falso=0;
  struct Pessoa{
      char nome[20];
      char assinatura[20];
  } Pessoa; 
    
    printf("Entre com a quantidade de aluno\n");
    scanf("%d",&qtd);
    printf("Entre com as assinaturas originais\n");
    for(int i=0;i<qtd;i++){
        scanf("%s",&Pessoa.assinatura[i]);
        
    } 
    printf("Entre com a quantidade de pessoas presentes na aula\n");
    scanf("%d",&qtd_dia);
    printf("Entre com os nomes assinados na lista\n");
    for(int j=0;j<qtd_dia;j++){
        scanf("%s",&Pessoa.nome[j]);
    } 
     for(int i=0;i<qtd;i++){ 
         for(int j=0;j<qtd_dia;j++){
             printf("%s",Pessoa.nome);
      //if(strcmp(Pessoa.assinatura,Pessoa.nome)!=0){
          //falso;
      }
        } 
    } 

    //printf("A quantidade de assinaturas falsas foi %d",falso);
//} 


    



