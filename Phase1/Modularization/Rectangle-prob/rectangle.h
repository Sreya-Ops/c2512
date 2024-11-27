#pragma once

class Rectangle
{
    public:
        // attributes [member data]
        int length;
        int breadth;
        // behaviours [member functions]
        int findArea();
        // constructors 
        Rectangle(int p_length, int p_breadth);
        //
        void print();
};
