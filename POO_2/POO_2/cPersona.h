//
//  cPersona.h
//  POO_2
//
//  Created by Gustavo Méndez on 16/02/24.
//

#ifndef cPersona_h
#define cPersona_h

using namespace std;

class cPersona{
private:
    //Parametros o atributo*s
    string sNombre;
    char cGenero;
    int nEdad;
    
public:
    //Constructor por defecto, su función: inicializar propiedades de la clase.
    cPersona(string pNombre, char pGenero, int pEdad);
    
    void vHablar();
    
};

cPersona::cPersona(string pNombre, char pGenero, int pEdad){
     sNombre = pNombre;
     cGenero = pGenero;
     nEdad   = pEdad;
}

void cPersona::vHablar(){
    cout<<"Hola mi nombre es: "<<sNombre<<"\n";
}

#endif /* cPersona_h */
