#include <iostream>

#include "rectangle.h"

using std::cout;

int Rectangle::findArea() 
{
    return length * breadth;
}

Rectangle::Rectangle(int p_length, int p_breadth)
{
    length = p_length;
    breadth = p_breadth;
}

void Rectangle::print()
{
    cout << "[length=" << length << " ft, breadth=" << breadth << " ft]";
}
