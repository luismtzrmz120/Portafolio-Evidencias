#include <iostream>
#include <string>

using namespace std;

class admin{
    string supremo;
    string contrasena;

    public:
    admin(){

    this->supremo = "DoctorSimi";
    this->contrasena = "SaludTodos";

    }
    
    admin(string A, string B){
        this->supremo = A;
        this->contrasena = B;
    }
    void setSupremo(string A){
        this->supremo = A;
    }
    string getSupremo(){
        return this->supremo;
    }
    void setContrasena(string B){
        this->contrasena = B;
    } 
    string getContrasena(){
        return this->contrasena;
    }
    void print(){

        int opcion;
        cout << "Hola bienvenido " << this->supremo << endl;
        cout << "Seleccione una opcion " << endl;
        cout << "Seleccione 1 para reporte impreso" << endl;
        cout << "Seleccione 2 para salir" << endl;
        cin >> opcion;

            if (opcion == 1){
                int op;
                cout << "Imprimir todos los reportes presione 1" << endl;
                cout << "Salir presione 2 " << endl;
                cin>> op;

                
            }
                
        
    }
};