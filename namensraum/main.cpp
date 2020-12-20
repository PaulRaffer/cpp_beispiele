#include <iostream>

namespace num_func
{
	
int func(); // Prototyp

int func()
{
    return 5;
}

}

int main()
{
    int i = func() + 4; // Funktion 'func' in Namensraum 'num_func' aufrufen und Ergebnis ausgeben
    std::cout << i;
}