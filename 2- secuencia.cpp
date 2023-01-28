#include <iostream>

// Declaramos la funci�n "imprimir_secuencia" con un par�metro de entrada "n"
void imprimir_secuencia(int n) {
  // Imprimimos el valor de "n"
  std::cout << n << " ";
  // Si "n" es mayor que 0, invocamos recursivamente la funci�n con "n-1"
  if (n > 0) {
    imprimir_secuencia(n-1);
  }
}

int main() {
	int n;
	std::cout<<"Ingrese un valor: ";
	std::cin>>n;
  // Llamamos a la funci�n "imprimir_secuencia" con un argumento de 9
  imprimir_secuencia(n);
  // Imprimimos una l�nea en blanco al final
  std::cout << std::endl;
  return 0;
}

