#include <iostream>
#include <string>
#include "paciente.h"
#include "admin.h"
#include "laboratorio2.h"

using namespace std;

//Luis Roberto Martinez Ramirez
int main (){


  int op;
  cout << "Buenas Tardes, Bienvenido" << endl;
  cout << "Seleccione una opcion" << endl;
  cout << "Seleccione 1 para ingresar como admin" << endl;
  cout << "Seleccione 2 para ingresar como encargado de laboratorio Norte " << endl;
  cout << "Seleccione 3 para ingresar como encargado de laboratorio Sur " << endl;
  cout << "Seleccione 4 para salir" << endl;

  //En cuanto a usuarios, tomaremos en cuenta dos tipos: los administradores, quienes tendrán un login y password además de todos sus datos generales y podrán imprimir un reporte con todas las pruebas (incluídos datos de los pacientes y resultados) de su laboratorio. Los otros usuarios son clientes de quienes mantenemos datos generales así como el laboratorio donde se realizaron la prueba.
  string password; 
  string usario; 
  while (op != 4) 
  {
     cout << "Seleccione Opcion" << endl;
     cin >> op;

      if (op == 1){
        admin jdoctorsimi;

          cout << "Ingrese su usuario" << endl;
          cin>> usario;  
          cout << "Ingrese su contrasena" << endl;
          cin>> password; 

          if(usario == "DoctorSimi" && password == "SaludTodos"){

            jdoctorsimi.print();

            if (op == 1){

              cout << "Nombre: Luis" << endl;
              cout << "Id: 12496632" << endl;
              cout << "Sexo: M" << endl;
              cout << "Prueba: PCR" << endl;
              cout << "Resultado: Positivo" << endl;
              cout << "Fecha: 12/10/2021 a las: 12:33" << endl;
              cout << "---------------------------------------------------------"<< endl;
              cout << "Nombre: Pedro" << endl;
              cout << "Id: 208965" << endl;
              cout << "Sexo: M" << endl;
              cout << "Prueba: Antigenos Cualitativos" << endl;
              cout << "Resultado: Negativo" << endl;
              cout << "Fecha: 15/4/2021 a las: 09:17" << endl;
              break;

            }else if (op == 2){

              cout<<"Hasta luego" << endl;
            }
            
          }
      }
      if(op == 2)
      {
        laboratorio1 doctorsimis;
          cout << "Ingrese usuario" << endl;
          cin>> usario;  
          cout << "Ingrese contraseña" << endl;
          cin>> password; 

          if(usario == "encargado1" && password == "Norte"){

            doctorsimis.print();
            break;
      }
      }
      if(op == 3)
      {
        laboratorio2 simi;
          cout << "Ingrese usuario" << endl;
          cin>> usario;  
          cout << "Ingrese contraseña" << endl;
          cin>> password; 
          if(simi.getEncargado2() == usario && simi.getContra2()== password){

            simi.print();
            break;
      }

      }
      if(op == 4){
          cout << "Hasta luego...  :)" << endl;
      }
  }

}