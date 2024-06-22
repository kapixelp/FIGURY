//
// Created by kacpe on 09.06.2024.
//

#ifndef FIGURY_SQUARE_H
#define FIGURY_SQUARE_H


#include <iostream>

class Square {
private:
    static int numberOfSquare;
    std::string name;
    int a;
    int b;
public:
    Square();
    Square(const std::string &name, int a = 0, int b = 0);
    ~Square();

    int getArea();
    int getB() const;
    void setB(int b);
    int getA() const;
    void setA(int a);
    static int getNumberOfSquare();
};


#endif //FIGURY_SQUARE_H
