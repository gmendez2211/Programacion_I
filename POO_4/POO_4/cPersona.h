//
//  cPersona.h
//  POO_4
//
//  Created by Gustavo Méndez on 2/03/24.
//

#ifndef cPersona_h
#define cPersona_h

using namespace std;
//Construccion de la clase
 class cPersona{
     
 //private:
     //Atributos o propiedades de la clase
  //   string sNombre;
  //   int nEdad;
  //   char cGenero;

    //Metodos o acciones
public:
    
      string sNombre;
      int nEdad;
      char cGenero;

     
    cPersona(string, int, char);
    void mSaluda();
    void mCamina();
    //Metodos getter y setters
    //Setter
    void SetterNombre(string pNombre);
    void SettterEdad(int pEdad);
    void SettterGenero(char pGenero);
    //Getters
    string GetNombre();
    int GetEdad();
    char GetGenero();
    
    
};


//Constructor
cPersona::cPersona(string pNombre, int pEdad, char pGenero){
    sNombre = pNombre;
    nEdad   = pEdad;
    cGenero = pGenero;
}
void cPersona::mSaluda(){
    cout<<"Hola soy: "<<sNombre<<"\n";
    
}
void cPersona::mCamina(){
    cout<<"Hola estoy camimando: "<<"\n";
}

//Setters
void cPersona::SetterNombre(string pNombre){
    sNombre = pNombre;
}
void cPersona::SettterEdad(int pEdad){
    nEdad = pEdad;
    
}
void cPersona::SettterGenero(char pGenero){
    cGenero = pGenero;
    
}

//Getters
string cPersona::GetNombre(){
    return  sNombre;
}
int cPersona::GetEdad(){
    return nEdad;
}
char cPersona::GetGenero(){
    return cGenero;
}

//Clase cliente
class cCliente: public cPersona{
    
    //Atributos o propiedades de la clase
private:
    string sCodigo;
    string sDescripcion;
    int iAnioInscripcion;
    //Metodos o acciones
public:
    cCliente(string, string, int);
    void mEstudia();
    void mDescansa();
    
};

//Constructor
cCliente::cCliente(string pCodigo, string pDescripcion, int pAnioInscrip):cPersona(sNombre, nEdad, cGenero){
    sCodigo          = pCodigo;
    sDescripcion     = pDescripcion;
    iAnioInscripcion = pAnioInscrip;
      
}

void cCliente:: mEstudia(){
    cout<<"Estudiando";
}
void cCliente::mDescansa(){
    cout<<"Descanasando";
}


#endif /* cPersona_h */
