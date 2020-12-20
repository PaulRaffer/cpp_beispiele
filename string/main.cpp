#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    auto str1 = std::string{"Hallo"};
    auto str2 = std::string{" Welt!"};

    auto str = str1 + str2;
    //std::sort(std::rbegin(str), std::rend(str));
    //std::reverse(std::begin(str), std::end(str));
    std::cout << std::count(std::begin(str), std::end(str), '!');
}
