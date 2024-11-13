//
// Created by Hilda Bermejo on 12/11/24.
//

#include "Definiciones.h"
#include "CVector.h"
#include "iomanip"
#include <cstdlib>

CVector::CVector(int n)
{ //--- Crea el objeto y adiciona n poligonos
 int tipo;
 TipoNumerico lado;
    for(int i=0; i<n; i++)
    {
        tipo = rand() % 3 + 1;
        lado = rand() % 100 + 1;
        switch(tipo)
        {
            case 1: agregar(new CCuadrado(lado)); break;
            case 2: agregar(new CTriangulo(lado)); break;
            case 3: agregar(new CHexagono(lado)); break;
        }
    }
}


CVector::~CVector()
{ //---- Como el vector almacena punteros a objetos
  //---- Liberamos la memoria
  for(int i=0; i<vec.size(); i++)
      delete vec[i];
}

void CVector::agregar(CPoligono * objeto)
{
    vec.push_back(objeto);
}

CPoligono * CVector::poligonoDeMayorArea()
{//--- halla el poligono con mayor area
 //--- devuelve el puntero al objeto
 if(vec.size()==0)
     return nullptr;
 CPoligono *elMayor = vec[0];
 for(int i=1; i<vec.size(); i++)
     if( vec[i]->Area() > elMayor->Area())
         elMayor = vec[i];
 return elMayor;
}

void CVector::imprimir()
{
    cout << "\n";
    cout <<setw(5) << "Num"<< setw(10) << "Lado" << setw(10) << "Area" << "\n";
    int i = 1;
    for(const auto elemento:vec) {
        cout << setw(5) << i << setw(10) << elemento->getLado() << setw(10) << elemento->Area() << "\n";
        i++;
    }
}