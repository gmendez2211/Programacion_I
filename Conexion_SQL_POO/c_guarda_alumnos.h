#include <string>
#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysqld_error.h"
using namespace std;
class c_guarda_alumnos{
	
	private:
		char* carnet;
		char* primer_nombre;
	    char* segundo_nombre;
		char* primer_apellido;
        char* segundo_apellido;
	
	public:		 
	 int graba_alumnos(MYSQL *objDatos, char , char);

//metodos
 int graba_alumnos(MYSQL *objDatos, char *consulta, char *sentencia) {
 	int nResul=0;
 		
       
	// Formatea los datos enviados a la base de datos
	sprintf(consulta, sentencia, carnet,primer_nombre, segundo_nombre, primer_apellido, segundo_apellido);
        
	//Ejecuta consulta para realizar insert en base de datos
    if(!mysql_query(objDatos, consulta)){
    	nResul = 0;
	}
	else
	{
		nResul = 1;
	}	    	
 	
 	return nResul;
 }
 
 //Setters
	 void set_carnet(char* pCarnet){
	 	carnet = pCarnet;
	 }
	 void set_primer_nombre(char* pPrimerNombre){
	 	primer_nombre = pPrimerNombre;
	 }
	 void set_segundo_nombre(char* pSegundoNombre){
	 	segundo_nombre = pSegundoNombre;
	 }
	 void set_primer_apellido(char* pPrimerApellido){
	 	primer_apellido = pPrimerApellido;
	 }
	 void set_segundo_apellido(char* pSegundoApellido){
	 	segundo_apellido = pSegundoApellido;
	 }
 
 //Getters
	char* get_carnet(){
	 	return carnet;
	 }
	 char* get_primer_nombre(){
	 	return primer_nombre;
	 }
	 char* get_segundo_nombre(){
	 	return segundo_nombre;
	 }
	 char* get_primer_apellido(){
	 	return primer_apellido;
	 }
	 char* get_segundo_apellido(){
	 	return segundo_apellido;
	 }
 };
