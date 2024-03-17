#include <iostream>
#include "c_conecta_db.h"
#include "c_guarda_alumnos.h"
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysqld_error.h"

struct estudiante {
	char nCarnet[10];
	char nPrimerNombre[15];	
	char nSegundoNombre[15];
	char nPrimerApellido[15];	
	char nSegundoApellido[15];
} inf_alumnos;
 
int main(int argc, char** argv) {
MYSQL           *objDatos;
char *consulta;

//Clases
conecta_db conn;
c_guarda_alumnos save_alumnos;
	
if(!(objDatos = mysql_init(0))) {
    // Imposible crear el objeto objDatos
      std::cout << "ERROR: imposible crear el objeto objDatos.\n";          
      return 1;
    }
   //Creando objetos
	conn.conecta_base_datos(objDatos);
	

	//
	std::cout<<"Ingrese carnet: ";
	std::cin>>inf_alumnos.nCarnet;
	std::cout<<"Ingrese primer nombre: ";
	std::cin>>inf_alumnos.nPrimerNombre;
	std::cout<<"Ingrese segundo nombre: ";
	std::cin>>inf_alumnos.nSegundoNombre;
	std::cout<<"Ingrese primer apellido: ";
	std::cin>>inf_alumnos.nPrimerApellido;
	std::cout<<"Ingrese segundo apellido: ";
	std::cin>>inf_alumnos.nSegundoApellido;
	
	//Seteando valores
	save_alumnos.set_carnet(inf_alumnos.nCarnet);
	save_alumnos.set_primer_nombre(inf_alumnos.nPrimerNombre);
	save_alumnos.set_segundo_nombre(inf_alumnos.nSegundoNombre);
	save_alumnos.set_primer_apellido(inf_alumnos.nPrimerApellido);
	save_alumnos.set_segundo_apellido(inf_alumnos.nSegundoApellido);
	
	
	//String para ralizar la inserción a la base de datos
	char sentencia[] = "INSERT INTO db_colegio.tbl_alumnos(carnet, primer_nombre, segundo_nombre, primer_apellido, segundo_apellido) VALUES(\'%s\', \'%s\', \'%s\', \'%s\', \'%s\')";
	// Para datos enteros utilizar  %d        
    consulta = new char[strlen(sentencia)+sizeof(estudiante)-sizeof(int)];   
	
    if(save_alumnos.graba_alumnos(objDatos,consulta,sentencia)==0){
    	std::cout<<"Alumno grabado con exito..";
	}else{
		std::cout<<"Error al grabar alumno.."<<mysql_error(objDatos);
	}
	
   	
	return 0;
}
