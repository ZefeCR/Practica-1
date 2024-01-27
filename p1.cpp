#include <iostream>

// Declaración de las funciones
int sumar(int a, int b);
void imprimirResultado(int resultado);

int main() {
    // Ejemplo de uso de las funciones
    int num1, num2;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Llamada a la función de suma
    int resultado = sumar(num1, num2);

    // Llamada a la función de impresión
    imprimirResultado(resultado);

    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

// Definición de la función de impresión
void imprimirResultado(int resultado) {
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
}