/*4. Denir uma classe que represente um círculo. Esta classe deve possuir métodos
Privados para:
 calcular a área do círculo;
 calcular a distância entre os centros de 2 círculos;
 calcular a circunferência do círculo.
E métodos Públicos para:
 denir o raio do círculo, dado um número real;
 aumentar o raio do círculo, dado um percentual de aumento;

1
 imprimir o valor do raio;
 imprimir a circunferencia do círculo.
 imprimir a área do círculo.
Criar um programa principal para testar a classe.*/
#include<iostream>
#include<math.h>
using namespace std;

class Circle{
    protected:
    int raio;
    int area;
    int distancia;
    int circunferencia;

    void area_circle(){
        this->area=3.14*pow(raio,2);
    }

    void distancia_2circles(int raio1,int raio2){
         this->distancia=raio1+raio2;
    }
    void circunferencia_circle(){
        this->circunferencia=3.14*(2*this->raio);
    }
    public:
    void set_raio(int raio){
         this->raio=raio;
    }
    void aumenta_raio(int aumento){
        int high=(aumento/100)*this->raio; //para converter a porcentagem que a pessoa quer aumentar seu circulo
         this->raio=this->raio+aumento;
    }
    
    void show_circle(){
        cout<<"Raio:"<<this->raio<<"\n"<<"Circunferencia:"<<this->circunferencia<<"\n"<<"Area:"<<this->area<<endl;
    }
};


int main(){
    Circle c1;
    Circle c2;
    int raio;
    int aumento;
    int resp;
    c1.set_raio(3);
    cout<<"Deseja aumentar seu raio?\n"<<endl;
    cout<<"Insira 0 para nao e 1 para sim"<<endl;
    cin>>resp;
    if(resp==1){
        cout<<"Insira a porcetagem em que voce quer aumentar seu raio"<<endl;
        cin>>aumento;
       c1.aumenta_raio(aumento);
    }
    c1.show_circle();
    
    
    }