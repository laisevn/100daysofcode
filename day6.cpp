#include <iostream>

typedef enum days{
	SUN, MON, TUE, WED, THU, FRI, SAT
};


/* o operador ser� usado com frequ�ncia por isso o 'inline' aqui.
para evitar custo na hora de compilar para nao usar como uma chamada de
fun��o.
*/
inline days operator++(days d) {
	return static_cast<days>((static_cast<int>(d) + 1) %7);
}

/*
 Sempre que temos um operador e fazemos uma sobrecarga do operador, dando
 ao operador um outro significado, nos temos uma constrain:
 � um operador bin�rio ou un�rio? S�o os tipos de operadores no c++
 N�o � permitido fazer overload de fun��o chamando um operador tern�rio. 
 Voc� n�o pode mudar a ordem de procedencia do operador.
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
