//
//  main.cpp
//  POO_3
//
//  Created by Gustavo Méndez on 18/02/24.
//

#include <iostream>
#include "cPersona.h"

string sNombre;

using namespace std;
int main(int argc, const char * argv[]) {
    
    cPersona Persona1("Pedro", 'M', 39);
    
    Persona1.vHablar();
    cout<<"Ingrese su nombre: \n";
    cin>>sNombre;
    
    Persona1.mSetNombre(sNombre);
    
    Persona1.vHablar();
    
    
    return 0;
}
