//
// Created by Hilda Bermejo on 12/11/24.
//

#ifndef INC_03_POLIGONOS_01_CVECTOR_H
#define INC_03_POLIGONOS_01_CVECTOR_H

#include "Definiciones.h"
#include "CPoligono.h"
#include "CCuadrado.h"
#include "CHexagono.h"
#include "CTriangulo.h"

class CVector
{
  private:
    vector<CPoligono*> vec;
  public:
    CVector(){};
    CVector(int n);
    virtual ~CVector();
    void agregar(CPoligono * objeto);
    CPoligono * poligonoDeMayorArea();
    void imprimir();
};


#endif //INC_03_POLIGONOS_01_CVECTOR_H
