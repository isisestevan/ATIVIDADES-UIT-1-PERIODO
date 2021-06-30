#include <iostream>
using namespace std;

/*Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:
 Abastecer o carro com uma certa quantidade de gasolina;
 Mover o carro em uma determinada distância (medida em km);
 Retornar a quantidade de combustível e a distância total percorrida.
 No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida
e o total de combustível restante para cada um.*/
class Carro{
    private:
    float tanque;
    int consumo;
    int quilometragem;

    public:
    Carro(){
        tanque=tanque;
        consumo=consumo;
        quilometragem=0;
    }
    //função para setar o consumo que o carro tem, no caso foi dado no enunciado 15km/l
    void set_consumo(int consumo){
        this->consumo=consumo;
    }
    //função para fazer o carro percorrer a distancia e alterar a litragem no tanque
    void move(int km){
        this->quilometragem+=km;
        float litros=km/consumo;
        this->tanque=this->tanque-litros;
    }
    //função para encher o tanque
    void abastece(int gas){
        this->tanque=gas;
    }
    //função para mostrar a quilometragem percorrida e o restante do tanque
    void show_status(){
        cout<<"Tanque:"<<this->tanque<<"\t"<<"Quilometragem total:"<<this->quilometragem<<endl;
    }

};

int main(){
    Carro c1;
    Carro c2;
    int km,gas;
    c1.abastece(20);
    c2.abastece(30);
    c1.set_consumo(15);
    c2.set_consumo(15);
    c1.move(200);
    c2.move(400);
    c1.show_status();
    c2.show_status();
}
