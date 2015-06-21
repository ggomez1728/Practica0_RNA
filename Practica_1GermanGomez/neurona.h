#ifndef NEURONA_H
#define NEURONA_H
#define X_VAROR 10
#define Y_VAROR 29

#include <QFile>
#include <QTextStream>
#include <string>
#include <QString>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <QDataStream>
#include <math.h>
#include <sstream>

class Neurona
{
public:
  Neurona();
  // tipo de funcion de la neurona
  bool sigmo;
  //dimenciones de la neurona
  int ymatriz;
  int xmatriz;
  //dimension de la matriz de posibles entradas y salidas
  int ios[Y_VAROR][X_VAROR];
  //cantidad de pesos
  double pesos[Y_VAROR][X_VAROR];

  //entrada de la neurona
  int ni;


  QString numsel;
  //inicia entrenamiento
  void entrenar();
  //cargar reglas de entrenamiento
  void cargarIOS();
  //devuelve la evaluacion en la funcion sigmoide
  double sigmoide(double x);



};

#endif // NEURONA_H
