int main()
{
	int i0; // Variable wird definiert, aber nicht intialisiert: Zufallswert
	
	// Variable von Typ int mit 7 initialisieren:
	// GUT:
	auto i1 = 7;
	auto i2 = int{7};
	int i3{7};
	
	// OK:
    int i4 = 7;
	
	// SCHLECHT:
	auto i5{7};
	// Varianten mit ()
	
	
	// Zuweisungen:
    i1 = 5; // Wert von i1 ändert sich von 7 auf 5
}
