//
//  cPersona.h
//  POO_3
//
//  Created by Gustavo Méndez on 18/02/24.
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
    void mSetNombre(string);
    void mSetEdad(int);
    void mSetGenero(char);
    string mGetNombre();
    int mGetEdad();
    char mGetGenero();
    
    
    
};

cPersona::cPersona(string pNombre, char pGenero, int pEdad){
     sNombre = pNombre;
     cGenero = pGenero;
     nEdad   = pEdad;
}

void cPersona::vHablar(){
    cout<<"Hola mi nombre es: "<<sNombre<<"\n";
}
//Setters
void cPersona::mSetNombre(string pNombre){
    sNombre = pNombre;
}
void cPersona::mSetEdad(int pEdad){
    nEdad = pEdad;
}
void cPersona::mSetGenero(char pGenero){
    cGenero = pGenero;
}

//Getters
string cPersona::mGetNombre(){
    return sNombre;
}
int cPersona::mGetEdad(){
    return nEdad;
}
char cPersona::mGetGenero(){
    return cGenero;
}

#endif /* cPersona_h */

