#include <iostream>

class Medida
{
	private:
		int metro;
		float centimetro;
		
	public:
		void setMedida(int m, double c)
		{
			metro = m;
			centimetro = c;
		}
		
		void getMedida()
		{
			std::cout << "\nDigite a parte de metros da medida: ";
			std::cin >> metro;
			std::cout << "\nDigite a parte de centimetro da medida: ";
			std::cin >> centimetro;
		}
		
		void mostraMedida() 
		{
			std::cout << (metro + centimetro/100) << "metros \n";
		}
};

int main () {
	Medida m1, m2;
	m1.setMedida(25,50);
	m2.getMedida();
	
	std::cout << "\nMedida 1 = "; m1.mostraMedida();
	std::cout << "\nMedida 2 = "; m2.mostraMedida();
	std::cout << std::endl;
	
	return 0;
}
