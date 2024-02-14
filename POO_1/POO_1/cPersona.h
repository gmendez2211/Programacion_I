//
//  cPersona.h
//  POO_1
//
//  Created by Gustavo Méndez on 13/02/24.
//

#ifndef cPersona_h
#define cPersona_h


using namespace std;
class cPersona{
private:
    //Parametros o atributos
    string sNombre;
    char cGenero;
    int nEdad;
    
public:
    //Constructor por defecto, su función: inicializar propiedades de la clase.
    cPersona(){
         sNombre ="Gustavo";
         cGenero ='N';
         nEdad   =0;
    }
    
    void vHablar(){
        cout<<"Hola mi nombre es: "<<sNombre<<"\n";
    }
    
};

#endif /* cPersona_h */
