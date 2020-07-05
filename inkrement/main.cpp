#include <iostream>

// PRE-INCREMENT:
//
// x = x + 1
// ODER
// x += 1
// ODER
// ++x

// POST-INCREMENT:
//
// y = x
// x = x + 1
// ODER
// y = x
// x += 1
// ODER
// y = x++

int main()
{
    int i = 7;
    int j = 7;

    int zi = i++;
    int zj = ++j;

    std::cout
        << "i:  " << i << std::endl   // 8
        << "zi: " << zi << std::endl  // 7
        << "j:  " << j << std::endl   // 8
        << "zj: " << zj << std::endl; // 8
}
