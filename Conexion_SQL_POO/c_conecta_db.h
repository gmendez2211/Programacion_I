#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysqld_error.h"


class conecta_db{
	
	
	//Métodos
	 public:
	 void conecta_base_datos(MYSQL *objDatos);	

};


void conecta_db::conecta_base_datos(MYSQL  *objDatos){
 
 if(mysql_real_connect(objDatos, "127.0.0.1", "root", "Desarrollo", "db_colegio", 3306, NULL, 0)){ 
	std::cout<<"Conexion realizada con exito \n";
 }
 else{
 	std::cout<<"Conexion fallida \n"<<mysql_error(objDatos); 	
 }
}
