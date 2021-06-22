#include <iostream>
using namespace std;
#define TAM 10
/*Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura.
Crie os métodos públicos necessários para sets e gets e também um métodos para imprimir os
dados de uma pessoa.*/
class Pessoa{
    private:
    
    string nome;
    int idade;
    float altura;
    
    public:
    Pessoa(){
       altura=0;
       idade=0;
       nome="";
    } 
    Pessoa(string nome,int idade,float altura){
        this->nome=nome;
        this->idade=idade;
        this->altura=altura;
    }
    void set_nome(string name){
        this->nome=name;
    } 
    void set_idade(int age){
        this->idade=age;
    }
    void set_altura(float high){
        this->altura=high;
    } 
    string get_nome(){
        return this->nome;
    } 
    int get_idade(){
        return this->idade;
    }
    float get_altura(){
        return this->altura;
    }
    void show_pessoa(){
        cout <<"Nome:"<< nome<<"\tIdade:"<<idade<<"\t Altura:"<<altura<<endl;
    }


};

void menu(){
    system("cls||clear");
    cout<<"MENU\n"<<endl;
    cout<<"Digite 1: Para adicionar um cadastro\n"<<endl;
    cout<<"Digite 2: Para imprimir na tela o nome dos cadastrados\n"<<endl;
    cout<<"Digite 3:Para sair\n"<<endl;
}

int main(){ 
    Pessoa pessoas[TAM];
    int i,count = 0,op;
    string nome;
    int idade;
    float altura; 
    menu();
    cin>>op;
    while(op != 3){
    switch (op)
    {
    case 1:
    if(count<TAM){
        cout<<"Informe o nome do usuario\n"<<endl;
        cin>>nome;cin.ignore();
        pessoas[count].set_nome(nome);
        cout<<"Informe a idade\n"<<endl;
        cin>>idade;cin.ignore();
        pessoas[count].set_idade(idade);
        cout<<"Informe a altura\n"<<endl;
        cin>>altura;cin.ignore();
        pessoas[count].set_altura(altura);
        count++;
    }else {
        cout<<"Numero suficiente de cadastrados\n"<<endl;
    }
        getchar();
        break; 
    case 2:
       for(i=0;i<count;i++)
           pessoas[i].show_pessoa();
           getchar();
           break;
    
    } 
    menu();
        cin>>op; cin.ignore();
    }
    
       return 0;
}