#include <iostream>
#include <vector>

int main()
{
	// Vector mit int als Elementtyp:
    std::vector<int> veci{
        5,  // vect.at(0) = 5
        56, // vect.at(1) = 56
        3,  // ...
        7,
        6,
        8,  // vect.at(5) = 8
    };
	
	// ÜBER ALLE ELEMENTE IM VECTOR ITERIEREN UND JEDES AUSGEBEN:
	int i = 0;
	while (i < veci.size())
	{
        std::cout << veci.at(i) << std::endl;
		++i;
	}
	// ODER
    for (int i = 0; i < veci.size(); ++i)
        std::cout << veci.at(i) << std::endl;
	// ODER
    for (auto e : veci)
        std::cout << e << std::endl;
	
	veci.clear(); // Alle Elemente entfernen
}