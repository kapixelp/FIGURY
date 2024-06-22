//
// Created by kacpe on 09.06.2024.
//

#include "Square.h"
int Square::numberOfSquare = 0;
Square::Square() {
    Square::numberOfSquare++;
    printf("utworzono z konstruktora domyslnego\n");
}

Square::Square( const std::string &name, int a, int b){
    this->name = name;
    this->a = a;
    this->b = b;
    Square::numberOfSquare++;
    printf("utworzono o nazwie %s\n", name.c_str());
}

int Square::getArea() {
    return a*b;
}

int Square::getB() const {
    return b;
}

void Square::setB(int b) {
    Square::b = b;
}

int Square::getA() const {
    return a;
}

void Square::setA(int a) {
    Square::a = a;
}

int Square::getNumberOfSquare() {
    return Square::numberOfSquare;
}

Square::~Square() {
    printf("usuwanie klasy\n");
    Square::numberOfSquare--;
}
