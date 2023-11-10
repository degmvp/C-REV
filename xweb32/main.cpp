#include <iostream>

using namespace std;

class Vetor2d{
private:
  float x, y;
public:
  Vetor2d(float x_=0, float y_=0){
    x=x_; y=y_;
}
  void setX(float x_){
	x = x_;
  }
  float getX(void){
	return x;
  }
  void setY(float y_){
	y = y_;
  }
  float getY(void){
	return y;
  }
};

int main(void){
  Vetor2d v1;
  v1.setX(4.5);
  v1.setY(-1.3);
  cout << "Classe Vetor2d\n"  << endl;
  cout << "Vetor2d(float x_=0, float y_=0)\n"  << endl;
  cout << "A criacao de um objeto sempre e feita pela\n"  <<
          "invocacao de seus metodos construtores\n" << endl;
  cout << "O encapsulamento esconde os detalhes\n"  <<
          "de implementacao do objeto\n" << endl;
  cout << "Metodo de uma classe - Vetor2d v1 - instancia da class\n" << endl;
  cout << "scope resolution operator  ::" << endl;
  cout << "determina a qual classe pertence o metodo" << endl;
  cout << "void Vetor2d::setX(float x_) setX pertence a classe Vetor2d\n" << endl;
  cout << v1.getX() << " " << v1.getY() << "\n";

  system("pause");
  return 0;
}
