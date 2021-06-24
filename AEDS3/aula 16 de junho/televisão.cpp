/*Implemente uma classe televisão. A televisão tem um controle de volume do som e um controle
de seleção de canal. O controle de volume permite aumentar ou diminuir a potência do volume
de som em uma unidade de cada vez. O controle de canal também permite aumentar e diminuir
o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco
o volume, e exiba o valor de ambos os atributos.*/
#include<iostream>
using namespace std;

class Televisao{
    private:
    int volume=0;
    int canal[10];
    int canal_atual;

    public:
  
    void set_canal(int channel[],int i){
        for(i=0;i<10;i++){
        this->canal[i]=channel[i];
        }
    }

    void aumentar(){
        this->volume++;
    }

    void diminuir(){
        this->volume--;
    }

    int avanca_canal(int i){
        this->canal_atual=this->canal[i]++;
        return this->canal_atual;
    }

    int volta_canal(int i){
       this->canal_atual=this->canal[i]=i--;
       return this->canal_atual;
    }

    int procura_canal(int i,int chave){
         for(i=0;i<10;i++){
             if(canal[i]==chave){
                 canal_atual= this->canal[i];
             }
         }
    }

    void show_status(){
        cout<<"Canal:"<<this->canal_atual<<"Volume"<<this->volume<<endl;
    }
};
void menu(){
    cout<<"MENU"<<endl;
    cout<<"Se deseja aumentar volume digite 1"<<endl;
    cout<<"Se deseja diminuir volume digite 2"<<endl;
    cout<<"Se deseja mudar de canal digite 3"<<endl;
    
};

int main(){
    Televisao t1;
    int canal[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0,op,op_canal,canal_atual,channel;
    t1.set_canal(canal,i);
    menu();
    cin>>op;
    switch (op)
    {
    case 1:
        t1.aumentar();
        break;
    case 2:
        t1.diminuir();
        break;
    case 3:
        cout<<"Deseja avançar ou voltar o canal?\n DIgite 1 para avanço e 2 para voltar"<<"Deseja procurar canal?\nDigite 3"<<endl;
        cin>>op_canal;
        if(op_canal==1){
           canal_atual= t1.avanca_canal(i);
        }else
        if(op_canal==2){
            canal_atual=t1.volta_canal(i);
        }else
        if(op_canal==3){
            cout<<"Informe o canal que deseja acessar"<<endl;
            cin>>channel;
         for(i=0;i<10;i++){
             if(canal[i]==channel){
                 canal_atual=canal[i];
             }
           
    }
        }
    default:
        break;
    }
    
}