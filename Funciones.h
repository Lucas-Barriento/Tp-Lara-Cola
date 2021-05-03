#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Prototipos.h"

using namespace std;

Botella::Botella(float capacidad,bool tapada, float ocupacion){
if(capacidad<=0){ /// si es menor o igual a cero o no se envia un valor a la funcion...
   _capacidad=100;///... se le asigna 100...
   }
else{
    _capacidad=capacidad;///... y sino se le asigna el valor enviado a la funcion
}
_tapada=true;
_ocupacion=0;
}

float Botella::getCapacidad(){
return _capacidad;
}

void menu(){
    cout<<" _________________________________________________"<<endl;
    cout<<"| 1) Tapar                                        |"<<endl;
    cout<<"| 2) Destapar                                     |"<<endl;
    cout<<"| 3) Llenar                                       |"<<endl;
    cout<<"| 4) Vaciar                                       |"<<endl;
    cout<<"| 5) Vaciar por completo                          |"<<endl;
    cout<<"| 6) mostrar capacidad                            |"<<endl;
    cout<<"| 7) mostrar ocupacion                            |"<<endl;
    cout<<"| 8) disponibilidad (cuanto falta llenar)         |"<<endl;
    cout<<"| 0) Salir                                        |"<<endl;
    cout<<" _________________________________________________"<<endl;

}

int Botella::getTapado(){
    if(_tapada==true){
        return 1;
    }
    else{
        return 0;
    }
}

void Botella::tapar(){
_tapada=true;
}

void Botella::destapar(){
_tapada=false;
}

void Botella::llenar(float capacidad){
    if(_tapada==1){
        cout<< "la botella se encuentra tapada"<<endl;
    }
    else{
_ocupacion=capacidad;
        cout<< "botella llena!"<<endl;
    }
}

void Botella::vaciar(){
    if(_tapada==1){
        cout<< "la botella se encuentra tapada"<<endl;
    }
    else{
_ocupacion=0;
cout<< "botella por completa vacia"<<endl;
    }
}

float Botella::getOcupacion(){
return _ocupacion;
}

float Botella::getDisponibilidad(){
float disp;
disp=_capacidad-_ocupacion;
return disp;
}

void Botella::vaciar(float dism){
    if(_tapada==1){
        cout<< "la botella se encuentra tapada"<<endl;
    }
    else{
if((_ocupacion-dism)<0){
    cout<< "no se permite disminuir la ocupacion por debajo de 0"<<endl;
}
else{
    _ocupacion=_ocupacion-dism;
    cout<< "disminucion realizada!"<<endl;
}
    }
}
#endif // FUNCIONES_H_INCLUDED
