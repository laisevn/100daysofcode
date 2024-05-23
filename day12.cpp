#include <iostream>

class estoqueCelular {
  private:
    int codigoFabricante;
    int codigoModelo;
    double custo;

  public:
    void setdados(int codigoFabricante, int codigoModelo, double custo) {
      codigoFabricante = this->codigoFabricante;
      codigoModelo = this->codigoModelo;
      custo = this->custo;
    }

  void mostraDados() {
      std::cout << "\nCodigo do Fabricante:" << codigoFabricante;
      std::cout << "\nCodigo do modelo:" << codigoModelo;
      std::cout << "\nCusto de aparelho:" << custo;
      std::cout << std::endl;
    }
};


int main () {
  estoqueCelular obj1, obj2;

  obj1.setdados(12345, 777, 105.6);
  obj2.setdados(25364, 455, 405.32);

  obj1.mostraDados();
  obj2.mostraDados();

  return 0;
}