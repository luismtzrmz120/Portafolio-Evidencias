#include <iostream>
#include <string>
#include <vector>
#include "laboratorio1.h"
//pruebas de COVID. Los laboratorios se identifican por su nombre, además, nos interesa saber las pruebas de COVID que realizan (pueden ser máximo 3: antígenos cualitativos, antígenos cuantitativos y RT-PCR). Nos interesa mantener información del laboratorio como el nombre del responsable y sus datos de contacto. 
using namespace std;

class laboratorio2 : public laboratorio1{

    string encargado2;
    string contra2;
    string nombre2;

    public:
    laboratorio2(){

    this->encargado2 = "encargado2";
    this->contra2 = "Sur";

    this->nombre2 = "Pedro";
    this->id = 208965;
    this->sexo = "M";
    this-> dia = 15;
    this->mes = 04;
    this-> ano = 2021;
    this->hora = "09:17";
    this-> tprueba = "Antiguenos Cualitativos";
    this -> resultado = "Negativo";


    }
   
    laboratorio2(string A, string B){
        this->encargado2 = A;
        this->contra2 = B;
    }
    void setEncargado2(string A){
        this->encargado2 = A;
    }
    string getEncargado2(){
        return this->encargado2;
    }
    void setContra2(string B){
        this->contra2 = B;
    } 
    string getContra2(){
        return this->contra2;
    }
    void print(){
        int opcion;
        cout << "Hola Bienvenido " << this->encargado2 << endl;
        cout << "Seleccione una opcion" << endl;
        cout << "Seleccione 1 para reporte impreso" << endl;
        cout << "Seleccione 2 para salir" << endl;
        cin >> opcion;

            if (opcion == 1){

                cout << "Nombre: " << nombre2 << endl;
                cout << "Id: " << id << endl;
                cout << "Sexo: " << sexo << endl;
                cout << "Prueba: " << tprueba << endl;
                cout << "Resultado: " << resultado << endl;
                cout << "Fecha: " << dia << "/" << mes << "/" << ano << " a las: " << hora << endl;
              
            
            }
            else {
            cout <<"Se cerro la sesion con exito" << endl;
                
            }
                
        
    }
};