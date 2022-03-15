#include <iostream>
#include "instruments.h"


coord read_point()
{
    coord a;
    std::cout << "Enter coordinates (x, y):"<< std::endl;
    std::cin >> a.x >>a.y;
    return a;
}

void write_point(const coord& output)
{
    std::cout << "coordinates: x: "<< output.x << " y: "<<output.y;
}

bool equal_points (const coord& a,const coord& b)
{
    return (a.x == b.x && a.y == b.y);
}

void scalpel(const coord& a,const coord& b, bool& start, coord& st_a, coord& st_b)
{
    if (!start)
    {
        start = true;
        st_a = a;
        st_b = b;
        std::cout << "Operation begins!"<<std::endl;
    }
    std::cout << "Cut from ";
    write_point(a);
    std::cout << " to ";
    write_point(b);
    std::cout << " done!"<<std::endl;
}

void hemostat(const coord& a, const bool& start)
{
    if (!start)
        std::cerr << "No first cut!"<< std::endl;
    std::cout << "Hemostat in ";
    write_point(a);
    std::cout << " position"<<std::endl;;
}

void tweezers(const coord& a, const bool& start)
{
    if (!start)
        std::cerr << "No first cut!"<< std::endl;
    std::cout << "Tweezers in ";
    write_point(a);
    std::cout << " position"<<std::endl;;
}

void suture(const coord& a,const coord& b, bool& start, const coord& st_a, const coord& st_b)
{
    if (!start)
        std::cerr << "No first cut!"<< std::endl;
    std::cout << "Sewing from ";
    write_point(a);
    std::cout << " to ";
    write_point(b);
    std::cout << " done!"<<std::endl;
    if (equal_points(a, st_a) && equal_points(b, st_b) || equal_points(a, st_b) && equal_points(b, st_a))
    {
        start = false;
        std::cout << "Operation complete!"<<std::endl;;
    }
}
