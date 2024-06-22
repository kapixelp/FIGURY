#include <iostream>
#include "Square.h"

int main() {

    printf("liczba instancji = %d \n", Square::getNumberOfSquare());
    Square tab[5];
    printf("liczba instancji = %d \n", Square::getNumberOfSquare());
    Square kwadrat = Square("cos");
    return 0;
}
