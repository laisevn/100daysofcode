#include <iostream>

template<class T1, class T2>
void copy (const T1 source[], T2 destination[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		destination[i] = static_cast<T2>(source[i]);
	}
}

int main () { 

	int size = 5;
	int matriz1[] = {1, 2, 3, 4, 5};
	int matriz2[size];
	
	std::cout << "Copia o valor da matriz 1:  { ";
	
	for (int i = 0; i < size; ++i) 
	{
		std::cout << matriz1[i];
	}
	
	std::cout << " }" << std::endl;
	
	std::cout << "Para a matriz 2:  { ";
	copy(matriz1, matriz2, size);
		
	for (int i = 0; i < size; ++i) 
	{
		std::cout << matriz2[i];
	}
	std::cout << " }" << std::endl;
	
	return 0;
}
