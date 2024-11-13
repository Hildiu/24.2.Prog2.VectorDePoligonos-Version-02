
#include "Definiciones.h"
#include "CVector.h"

int main()
{
 srand(time(nullptr));
 CVector objeto(20);

 objeto.imprimir();
 cout << "\n";
 CPoligono *m = objeto.poligonoDeMayorArea();
 cout << "El lado del poligono de mayor area es: " << m->getLado() << "\n";
 cout << "Su area es: " << m->Area();
 cout << "\n";
 //--- adiciona un metodo que permita sumar todas las areas de los poligonos.
 return 0;
}

