#include <iostream>

namespace num_func
{
	
int five(); // Prototyp

int five()
{
    return 5;
}

}

int main()
{
    std::cout << num_func::func(); // Funktion 'five' in Namensraum 'num_func' aufrufen und Ergebnis ausgeben
}