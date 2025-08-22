// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

void probarMatematicas()
{
    std::cout << "Hola, este es el programa de matematicas jaja" << std::endl;
    std::cout << "Ingresa el primer numero" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

void probarFactorial()
{
    int numero;
    std::cout << "\n--- Factorial ---\n";
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> numero;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    if (numero < 0)
    {
        std::cout << "El factorial no está definido para números negativos.\n";
    }
    else
    {
        int resultado = factorial(numero);
        std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
    }
}

void probarPotencia()
{
    int base, exponente;
    std::cout << "\n--- Potencia ---\n";
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado = potencia(base, exponente);
    std::cout << base << " elevado a " << exponente << " es: " << resultado << std::endl;
}

int main()
{
    probarMatematicas();
    probarArreglos();
    probarFactorial();
    probarPotencia();

    return 0;
}
