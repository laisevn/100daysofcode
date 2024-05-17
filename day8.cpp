auto n_evens = std::count_if(x.begin(), x.end(),
                           	[] (auto number) { return number % 2 == 0; });

/* 
* Este trecho de código usa uma função para contar números pares
* os dois primeiros argumentos definem o range sobre o qual o algorítimo
* vai fazer a checagem. O terceiro argumento é a função lambda. 
*/

