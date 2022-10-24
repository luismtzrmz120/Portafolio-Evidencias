#include <iostream>
#include <string>

using namespace std;
//.  Nos  interesa  mantener  información  del  paciente  como  su  nombre,  algún 
//dato  de  identificación,  edad,  sexo,  doctor  a  quien  se  dirige  la  prueba  (opcional),  fecha  de  la 
//toma de muestra (fecha completa y hora) y fecha de la entrega de resultados (fecha completa). 
class paciente{
    //Datos generales del paciente com su EDAD, ID, SEXO, FECHA COMPLETA, PRUEBA, TIPO DE PRUEBA COVID
    string nombre;
    int edad;
    int id;
    string sexo;
    int dia;
    int mes;
    int ano;
    string hora;
    string fecha;
    //PRUEBA
    string prueba;
    string PCR;
    string ACUAL;
    // los administradores, quienes tendrán un login y password además de todos sus datos generales y podrán imprimir un reporte con todas las pruebas (incluídos datos de los pacientes y resultados) de su laboratorio. Los otros usuarios son clientes de quienes mantenemos datos generales así como el laboratorio donde se realizaron la prueba. 

    public:
        paciente(){
            nombre = "Ningun nombre seleccionado";
            id = 0;
            edad = 0;
            sexo = "Sexo no seleccionado";
            dia = 0;
            mes = 0;
            ano = 0;
            hora = "No se encontro hora";
        }
        //.  Nos  interesa  mantener  información  del  paciente  como  su  nombre,  algún dato  de  identificación,  edad,  sexo,  doctor  a  quien  se  dirige  la  prueba  (opcional),  fecha  de  la toma de muestra (fecha completa y hora) y fecha de la entrega de resultados (fecha completa). 
 
        paciente(string a, int b, int c, string d, int e, int f, int g, string h, string i, string j, string k){
            nombre = a;
            edad = b;
            id = c;
            sexo = d;
            dia= e;
            mes = f;
            ano = g;
            hora = h;
            prueba = i;
            PCR = j;
            ACUAL = k;
        }
    void setNombre(string a){
        nombre = a;
    }
    string getNombre(){
        return nombre;
    }
    void setEdad(int b){
        edad = b;
    }
    int getEdad(){
        return edad;
    }
    void setID(int c){
        id = c;
    }
    int getID(){
        return id;
    }
    void setSexo(string d){
        sexo = d;
    }
    string getSexo(){
        return sexo;
    }
    void setDia(int e){
        dia = e;
    }
    int getDia(){
        return dia;
    }
    void setMes(int f){
        mes = f;
    }
    int getMes(){
        return mes;
    }
    void setAno(int g){
        ano= g;
    }
    int getAno(){
        return ano;
    }
    void setHora(string h){
        hora = h;
    }
    string getHora(){
        return hora;
    }
    void setPrueba(string i){
        prueba = i;
    }
    string getPrueba(){
        return prueba;
    }
    void setPCR(string j){
        PCR = j;
    }
    string getPCR(){
        return PCR;
    }
    void setACUAL(string k){
        ACUAL = k;
    }
    string getACUAL(){
        return ACUAL;
    }
    
    
    
};