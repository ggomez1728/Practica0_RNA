#include <QCoreApplication>
#include "neurona.h"
using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Neurona neurona;
  string key;
  nuev:;
  neurona.sigmo=0;
  cout<<"Seleccione el modelo de neurona: Perceptron--> 1 Adaline--> 2 "<<endl;
  cin>>key;
  if(key=="1"){
    neurona.sigmo = 0;
    cout << "(Selecciono Modelo Perceptron)" <<endl;

  }
  else if (key=="2"){
    neurona.sigmo = 1;
     cout << "(Selecciono Modelo Adaline)" <<endl;
  }
  else{
    cout << "Opcion Incorrecta" <<endl;
    goto nuev;
  }
  cout<<"Seleccione Accion: Entrenar --> 1, Ejecutar --> 2, Agregar Ruido --> 3"<<endl;
  cin>>key;
  if (key == "1"){
    cout << "Iniciando Entrenamiento" <<endl;

  }
  else if (key == "2"){
    cout << "Iniciando Ejecución" <<endl;

  }
  else if (key == "3"){
    cout << "Iniciando Perturbación" <<endl;

  }
  else {

  }



  goto nuev;
  return a.exec();
}
