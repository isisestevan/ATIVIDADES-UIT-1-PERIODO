#include<iostream>
using namespace std;



class Empresa{ 
    protected:
      string nome;
      string endereco;
      string cidade;
      string estado;
      int cep;
      int tel;
    public:
      Empresa(){

      } 
      Empresa(string nome,string endereco,string cidade,string estado,int cep,int tel){
          this->nome=nome;
          this->endereco=endereco;
          this->cidade=cidade;
          this->estado=estado;
          this->cep=cep;
          this->tel=tel;
      }
      string get_nome(){
          return this->nome;
      }
      string get_endereco(){
          return this->endereco;
      }
      string get_cidade(){
          return this->cidade;
      }
      string get_estado(){
          return this->estado;
      }
      int get_cep(){
          return this->cep;
      }
      int get_tel(){
          return this->tel;
      }
      void show_empresa(){
          cout<<"Nome:"<<this->nome<<"\tEndereco:"<<this->endereco<<"\tCidade:"<<this->cidade<<"\tEstado:"<<this->estado<<"\tCep:"<<this->cep<<"\tTelefone:"<<this->tel<<endl;
      }
};

class Restaurante:public Empresa{
    private:
    string tipo;
    float preco_medio;
    public:
    Restaurante(){

    };
    Restaurante(string nome,string endereco,string cidade,string estado,int cep,int tel):Empresa(nome,endereco,cidade,estado,cep,tel){

    };
    string get_tipo(){
        return this->tipo;
    }
    float get_preco_medio(){
        return this->preco_medio;
    }
    void set_tipo(string tipo){
        this->tipo=tipo;
    }
    void set_preco(float preco){
        this->preco_medio;
    }
    void show_restaurante(){
        system("cls || clear");
        show_empresa();
        cout<<"Tipo de Comida:"<<this->tipo<<"\tPreco Medio:\n"<<this->preco_medio<<endl;   
        }
};

int main(){
    Restaurante r1("Sabor de Minas","Barbacena","Para de Minas","Minas Gerais",35661201,37999637996);
    string tipo;
    float preco;
    cout<<"Informe o tipo de comida de seu Restaurante:\n"<<endl;
    cin>>tipo;
    cout<<"Informe o preco medio:\n"<<endl;
    cin>>preco;
    r1.set_tipo(tipo);
    r1.set_preco(preco);
    r1.show_restaurante();
    
    
    





}