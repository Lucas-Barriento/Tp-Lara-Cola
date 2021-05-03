#include <iostream>
#include "rlutil.h"
#include "Funciones.h"
#include "Prototipos.h"
using namespace std;
///tapado=1
///destapado=0
int main()
{
Botella a;
cout<<a.getCapacidad()<<endl;

int opc;
bool salir=false;
float dism;
while(salir==false){
    system("cls") ;
    menu();
    cout<< "ingrese una opcion: "<<endl;
    cin>>opc;
    cin.ignore();
  switch (opc)
{
case 1:
    if(a.getTapado()==0){
    a.tapar();
    cout<< "se ha tapado la botella!"<<endl;
    }
    else{
        cout<< "la botella ya estaba tapada"<<endl;
    }
    break;
case 2:
    if(a.getTapado()==1){
        a.destapar();
    cout<< "se ha destapado la botella!"<<endl;
    }
    else{
    cout<< "la botella ya estaba destapada"<<endl;
    }
    break;
case 3:
    a.llenar(a.getCapacidad());
    break;
case 4:
    cout<< "ingrese la cantidad a disminuir: "<<endl;
    cin>>dism;
    cin.ignore();
    a.vaciar(dism);
    break;
case 5:
    a.vaciar();
    break;
case 6:
    cout<< "la capacidad es de "<< a.getCapacidad()<< " ml"<<endl;
    break;
case 7:
    cout<< "la ocupacion es de "<<a.getOcupacion()<< " ml"<<endl;
    break;
case 8:
    cout<< "la disponibilidad es de "<<a.getDisponibilidad()<<" ml"<<endl;
    break;
case 0:
    salir=true;
    break;
default:
    cout<< "opcion incorrecta"<<endl;
    break;

}
cin.ignore();
}



    return 0;
}
