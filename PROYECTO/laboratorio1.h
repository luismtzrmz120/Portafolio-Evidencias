#include <iostream>
#include <string>
#include <stdlib.h>

//pruebas de COVID. Los laboratorios se identifican por su nombre, además, nos interesa saber las pruebas de COVID que realizan (pueden ser máximo 3: antígenos cualitativos, antígenos cuantitativos y RT-PCR). Nos interesa mantener información del laboratorio como el nombre del responsable y sus datos de contacto. 
using namespace std;

class laboratorio1{

    protected:
    
    string encargado1;
    string contra1;

    string nombre1;
    int id;
    string sexo;
    int dia;
    int mes;
    int ano;
    string hora;
    string tprueba;
    string resultado;


    public:

    laboratorio1(){
    this->encargado1 = "encargado1";
    this->contra1 = "Norte";

    this->nombre1 = "Luis";
    this->id = 12496632;
    this->sexo = "M";
    this-> dia = 12;
    this->mes = 10;
    this-> ano = 2021;
    this->hora = "12:33";
    this-> tprueba = "PCR";
    this -> resultado = "Positivo";
    

    }
    
    laboratorio1(string A, string B, string){
        this->encargado1 = A;
        this->contra1 = B;
    }
    void setEncargado1(string A){
        this->encargado1 = A;
    }
    string getEncargado1(){
        return this->encargado1;
    }
    void setContra1(string B){
        this->contra1 = B;
    } 
    string getContra1(){
        return this->contra1;
    }
    string getDetails(){

        string detalles = nombre1 + to_string(id) + sexo + to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano) + hora + tprueba + resultado;
        return detalles;
    }

    void print(){
        int opcion;
        cout << "Hola Bienvenido " << this->encargado1 << endl;
        cout << "Seleccione una opcion" << endl;
        cout << "Seleccione 1 para reporte impreso" << endl;
        cout << "Seleccione 2 para salir" << endl;
        cin >> opcion;

            if (opcion == 1){
                        
                cout << "Nombre: " << nombre1 << endl;
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