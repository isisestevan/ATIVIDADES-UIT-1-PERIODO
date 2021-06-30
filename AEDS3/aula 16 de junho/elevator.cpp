#include<iostream>
using namespace std;
#define CAP 6

class Elevador{
    private:
    int atual;
    int total;
    int capacidade;
    int qtd_pessoas;
    
    public:
    void incializa(){
        this->atual=0;
        this->capacidade=0;
    }
    int entra(int entrou){
        this->capacidade=entrou;
    }
    int sai(int saiu){
        this->capacidade=capacidade--;
    }
    int sobe(int subiu){
        this->atual=atual++;
    }
    int desce(int desceu){
        this->atual=atual--;
    }
    int get_atual(){
        return this->atual;
    }
    int get_total(){
        return this->total;
    }
    int get_capacidade(){
        return this->capacidade;
    }
    int get_qtd_pessoas(){
        return this->qtd_pessoas;
    }
    
}; 
void menu(){
    system("cls||clear");
    cout<<"MENU\n"<<endl;
    cout<<"Digite 1: Para incializar o elevador\n"<<endl;
    cout<<"Digite 2: Para entrada de uma pessoa\n"<<endl;
    cout<<"Digite 3:Para saida de uma pessoa\n"<<endl;
    cout<<"Digite 4:Para descer um andar\n"<<endl;
    cout<<"Digite 5:Para subir um andar\n"<<endl;

}
int main(){
    Elevador Elevator[CAP];
    int count,op;
    int atual,total,capacidade,qtd_pessoas;
    menu();
    cin>>op;
    switch (op){
        case 1:
            Elevator[0].incializa();
            break;
        while(count<CAP){
        case 2:
            Elevador[count].entra();
            break; 
        case 3:
            if()
            break; 
        case 4:
            break;
        case 5:
            
            break;
        }
        }
}






/* inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de
andares no prédio (os elevadores sempre começam no térreo e vazios);
 entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
 sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
 sobe: para subir um andar (não deve subir se já estiver no último andar);
 desce: para descer um andar (não deve descer se já estiver no térreo);
 get....: métodos para obter cada um dos os dados armazenados.*/