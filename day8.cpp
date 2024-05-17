auto n_evens = std::count_if(x.begin(), x.end(),
                           	[] (auto number) { return number % 2 == 0; });

/* 
* Este trecho de c�digo usa uma fun��o para contar n�meros pares
* os dois primeiros argumentos definem o range sobre o qual o algor�timo
* vai fazer a checagem. O terceiro argumento � a fun��o lambda. 
*/

