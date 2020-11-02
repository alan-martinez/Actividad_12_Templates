#include <iostream>
#include "arreglo.h"
using namespace std; 

int main()
{

    Arreglo<string> arreglo;

    //for (int  i=0; i<10; i++){
      // arreglo.insertar_final(i);
    //}

    arreglo.insertar_inicio("Hola mundo! ");
    arreglo.insertar_inicio("Mi nombre es Alan,");
    arreglo.insertar_final("Estoy probando");
    arreglo.insertar_final("Este programa");
    arreglo.insertar("Se inserta en 2", 2);
    arreglo.eliminar(1);
    arreglo.eliminar_final();
    arreglo.eliminar_inicio();
    arreglo.size();
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i]<< " ";
    }
    cout << endl;
    return 0;
}
