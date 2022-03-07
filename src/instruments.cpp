#include <iostream>
#include "instruments.h"


coord read_point()
{
    coord a;
    std::cout << "Enter coordinates (x, y):"<< std::endl;
    std::cin >> a.x >>a.y;
    return a;
}

void write_point(coord& output)
{
    std::cout << "Coordinates: x: "<< output.x << " y: "<<output.y;
}

bool equal_points (const coord& a,const coord& b)
{
    return (a.x == b.x && a.y == b.y);
}

void scalpel()
{
    
}

void hemostat()
{

}

void tweezers()
{

}

void suture()
{

}
