#include <iostream>

int n = 7;

void mod_n()
{
    int n = 9; // lokales n = 9, überdeckt globales n
    std::cout << ::n; // lokales n = 9 wird ausgegeben
}

int main()
{
    mod_n();
	std::cout << n; // globales n ist noch immer 7
}