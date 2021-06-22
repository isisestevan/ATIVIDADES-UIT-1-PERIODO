#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_pessoas,p_prod,m_prod,i=0;
    int tam_p,tam_m;
    printf("Entre com o numero de pessoas premiadas\n");
    scanf("%d",&num_pessoas);
    printf("Digite 1 para escolher o tam P\t Digite 2 para escolher o tam M\n");
    int tam_total[num_pessoas];
    for(i=0;i<num_pessoas;i++){
        scanf("%d",&tam_total[i]);
    } 
    for( i=0;i<num_pessoas;i++){
        if(tam_total == 1){
            tam_p++;
        }else
        if(tam_total == 2){
           tam_m++;
        }
    }
    printf("Quantas camisas de tamanho P foram produzidas ?\n");
    scanf("%d",&p_prod);
    printf("Quantas camisas de tamanho M foram produzidas ?\n");
    scanf("%d",&m_prod);
    if(tam_p == p_prod && tam_m == m_prod){
        printf("S\n");
    }else
        printf("N\n");
    
}