#include <windows.h>
#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysqld_error.h"  //Ruta donde se encuenta la bliblioteca mysql.h//

using namespace std;
 MYSQL           *objDatos;
int main() {
 
// Intentar iniciar MySQL:
  if(!(objDatos = mysql_init(0))) {
      // Imposible crear el objeto objDatos
      cout << "ERROR: imposible crear el objeto objDatos." << endl;          
      return 1;
      
  };
  
 if(mysql_real_connect(objDatos, "127.0.0.1", "root", "Desarrollo", "proyectofinalprogra2", 3306, NULL, 0))
 {
 	cout<<"Conexion realizada con exito ";
	;
 }
 else
 {
 	cout<<"Conexion fallida \n"<<mysql_error(objDatos);
 }

	return 0;
}
