#include<iostream>
using namespace std;

class Relogio{ 
    private:
    int hora;
    int minuto;
    int segundo;

    public:
   
    void set_hora(int hora,int minuto,int segundo){
        this->hora=hora;
        this->minuto=minuto;
        this->segundo=segundo;
        avanaca(hora,minuto,segundo);
    }

    int get_hora(){
         cout<<"Hora:"<<hora<<":"<<minuto<<":"<<segundo<<endl;
    } 
    int avanaca(int hora,int minuto,int segundo){
        this->segundo=segundo+1;
        if(segundo>=60){
            this->segundo=00;
            this->minuto=minuto+1;
            if(minuto>=60){
                this->minuto=00;
                this->hora=hora+1;
            }
        }
    }
} ;

int main(){
    Relogio r;
    int hora,minuto,segundo;
    cout<<"Entre com o horario atual\n"<<endl;
    cout<<"Hora:"<<endl;
    cin>>hora;
    cout<<"Minuto:"<<endl;
    cin>>minuto;
    cout<<"Segundos:"<<endl;
    cin>>segundo;
    r.set_hora(hora,minuto,segundo);
    r.get_hora();
}

/* um método chamado setHora, que deve receber o horário desejado por parâmetro (hora,
minuto e segundo);
 um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas
por referência;
 um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto
e a hora, quando for o caso).*/