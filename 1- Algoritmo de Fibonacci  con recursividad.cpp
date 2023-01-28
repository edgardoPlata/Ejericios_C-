#include <iostream>

// Declaramos la funci�n "fibonacci" con un par�metro de entrada "n"
int fibonacci(int n) {
  // Si "n" es 0, devolvemos 0
  if (n == 0) {
    return 0;
  }
  // Si "n" es 1, devolvemos 1
  else if (n == 1) {
    return 1;
  }
  // En cualquier otro caso, devolvemos la suma de los dos t�rminos anteriores
  // de la serie, que se calculan llamando recursivamente a la funci�n con "n-1" y "n-2"
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  // Imprimimos el resultado de la funci�n "fibonacci" con un argumento de 6
  std::cout << fibonacci(6) << std::endl;
  return 0;
}


