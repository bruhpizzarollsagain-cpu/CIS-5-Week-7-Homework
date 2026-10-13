#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Mason Ayala
// CIS 5 Week 07 · Odd and Even

int main() {
    const int N = 20;

    int values[N];
    int evens[N];
    int odds[N];

    int evenCount = 0;
    int oddCount = 0;

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }

        for (int i = 0; i < N; ++i) {

            std::cout << "[" << i << "] " << values[i] << "\n";

            if (values[i] % 2 == 0) {
                evens[evenCount] = values[i];
                evenCount = evenCount + 1;
            }
            else {
                odds[oddCount] = values[i];
                oddCount = oddCount + 1;
            }
        }
        std::cout << "Even: ";

        for (int i = 0; i < evenCount; ++i) {
            std::cout << evens[i] << " ";
        }

        std::cout << "\n";
        std::cout << "Odd: ";

        for (int i = 0; i < oddCount; ++i) {
            std::cout << odds[i] << " ";
        }

        std::cout << "\n";
    return 0;
}
