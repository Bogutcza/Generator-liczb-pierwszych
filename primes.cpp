#include <iostream>
#include <cmath>
#include "primes.h"

bool isPrime(int num) {
    if (num <= 1) return false; // Sprawdza czy 0 i 1 nie są liczbami pierwszymi
    if (num <= 3) return true;  //Sprawdza czy  2 i 3 są liczbami pierwszymi

    // Eliminacja wielokrotności 2 i 3
    if (num % 2 == 0 || num % 3 == 0) return false;


    int sqrtNum = static_cast<int>(std::sqrt(num)); // Obliczenie pierwiastka kwadratowego z num
    for (int i = 4; i <= sqrtNum; i += 1) { // Sprawdzanie podzielności przez liczby od 4 do sqrt(num)
        if (num % i == 0) return false; // Jeśli num jest podzielne przez i, zwraca false
    }
    return true; // Jeśli żaden dzielnik nie został znaleziony, liczba jest pierwsza
}

// Funkcja generująca liczby pierwsze do podanego limitu
void generatePrimes(int limit) {
    for (int num = 2; num <= limit; ++num) { // Iteracja przez liczby od 2 do limitu
        if (isPrime(num)) { // Sprawdzenie, czy liczba jest pierwsza
            std::cout << num << " "; // Wyświetlenie liczby pierwszej
        }
    }
    std::cout << std::endl; // Nowa linia po zakończeniu wyświetlania
}
