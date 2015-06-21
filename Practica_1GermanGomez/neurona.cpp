#include "neurona.h"

Neurona::Neurona(){
  int i,j;
  ymatriz = Y_VAROR-1;
  xmatriz = X_VAROR;
  srand(time(NULL));
  for (j=0; j<xmatriz; j++){
    for (i=0; i<xmatriz; i++){
       pesos[i][j] = ((double)(rand()%1000)/1000.0)-0.5;
    }
  }
}


void Neurona::entrenar(){

  int     ci,conteo;
  double  hr,f;
  int     emax,i; //epocas maximas
  double  out;
  
  
  //multiplico por los pesos las entradas
  hr=0;  
  for (i=0;i<=(Y_VAROR-2);i++) {
      hr=hr+(pesos[i][numsel.toInt()]*ios[i][ci]);
  }
  //evaluo segun sea el caso
  if(sigmo==1){
    //evaluar el Adaline
    f=sigmoide(hr);

  }
  else{
    //evaluar el perceptron
    if(hr >= 1) out = 1;
    else out = 0;
    
    
       
  }
  
}

double Neurona::sigmoide(double x) {
  //retorna la funcion sigmoide
  return (1/(1+exp((-1)*x)));
}
