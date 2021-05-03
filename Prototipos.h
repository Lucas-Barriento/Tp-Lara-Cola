#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED
class Botella{
    private:             ///atributos
        float _capacidad;
        float _ocupacion;
        bool _tapada;
    public:             ///metodos
        Botella(float _capacidad=100,bool _tapada=true,float _ocupacion=0);/// constructor. se le asigna 100 de capacidad por defecto
        void llenar(float );
        void vaciar();       /// Debe vaciar por completo la ocupaci�n del recipiente
        void vaciar(float ); /// Debe permitir disminuir la ocupaci�n del recipiente pero nunca por debajo de 0.
        void tapar();
        void destapar();
        float getCapacidad();
        int getTapado();
        float getOcupacion();
        float getDisponibilidad(); ///representa cu�nto tiene disponible a�n para cargar
        //~Botella();
            };


#endif // PROTOTIPOS_H_INCLUDED
