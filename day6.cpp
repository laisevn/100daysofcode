#include <iostream>

typedef enum days{
	SUN, MON, TUE, WED, THU, FRI, SAT
};


/* o operador será usado com frequência por isso o 'inline' aqui.
para evitar custo na hora de compilar para nao usar como uma chamada de
função.
*/
inline days operator++(days d) {
	return static_cast<days>((static_cast<int>(d) + 1) %7);
}

/*
 Sempre que temos um operador e fazemos uma sobrecarga do operador, dando
 ao operador um outro significado, nos temos uma constrain:
 É um operador binário ou unário? São os tipos de operadores no c++
 Não é permitido fazer overload de função chamando um operador ternário. 
 Você não pode mudar a ordem de procedencia do operador.
*/

std::ostream& operator<< 
(std::ostream& out, const days& d){
	switch (d) {
		case SUN: out << "SUN"; break;
		case MON: out << "MON"; break;
		case TUE: out << "TUE"; break;
		case WED: out << "WED"; break;
		case THU: out << "THU"; break;
		case FRI: out << "FRI"; break;
		case SAT: out << "SAT"; break;
	}	
	
	return out;
}

int main () {
	
	days d = MON, e;
	e = ++d;
	
	std::cout << d << '\t' << e << std::endl;
}
