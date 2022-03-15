#include <iostream>
#include "instruments.h"

#define forever while(true)

int main() {
    bool startcut = 0;
    coord startpoint_a;
    coord startpoint_b;
    forever
    {
        std::cout << "Enter command:" <<std::endl;
        std::string temp;
        coord temp_a;
        coord temp_b;
        std::cin >>temp;
        if (temp == "scalpel")
        {
            temp_a = read_point();
            temp_b = read_point();
            scalpel(temp_a, temp_b, startcut,startpoint_a,startpoint_b);
        }
        else if (temp == "hemostat")
        {
            temp_a = read_point();
            hemostat(temp_a, startcut);
        }
        else if (temp == "tweezers")
        {
            temp_a = read_point();
            tweezers(temp_a,startcut);
        }
        else if (temp == "suture")
        {
            temp_a = read_point();
            temp_b = read_point();
            suture(temp_a, temp_b, startcut,startpoint_a,startpoint_b);
            if (!startcut) return 0;
        }
        else
            std::cout << "Unknown command, tru again!";
    }
}
