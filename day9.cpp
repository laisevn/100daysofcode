#include <iostream>
// Script para calcular a média

//Criação de uma template como um  operador natural, ou seja
// pode ter overloading e receber mais de um tipo 
template <typename T, std::size_t N>
T average(const T (&array)[N]) {
    T sum = 0;
    for (std::size_t i = 0; i < N; ++i) {
        sum += array[i];
    }
    return sum / N;
}

int main() {
double doubles[2] = {1.0, 2.0};
    std::cout << "Average: " << average(doubles) << std::endl;
	
	double moreDoubles[] {1.0, 2.0, 3.0, 4.0 };
    std::cout << "Average: " << average(moreDoubles) << std::endl;
	
	// Usar initializer list para calcular a média
    double array1[] = {1.0, 2.0, 3.0, 4.0};
	std::cout << "Average: " << average(array1) << std::endl;
	
    // Array de inteiros
    int ints[] = {1, 2, 3, 4};
    std::cout << "Average: " << average(ints) << std::endl;
}
