#include <iostream>
#include "primes.h"

int main() {
    int choice;
    do {
        std::cout << "1. Generate prime numbers\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice; // Wczytanie wyboru od użytkownika

        switch (choice) {
            case 1: {
                int limit;
                std::cout << "Enter the limit up to which you want to generate prime numbers: ";
                std::cin >> limit; // Wczytanie limitu od użytkownika

                generatePrimes(limit); // Wywołanie funkcji generującej liczby pierwsze
                break;
            }
            case 0:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter 1 or 0.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}

