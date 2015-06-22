#include "neurona.h"

Neurona::Neurona(){
  int i,j;
  ymatriz = Y_VAROR-1;
  xmatriz = X_VAROR;
  rutaFile = "/home/german/Documentos/Posgrado_Ucla/RNA/practicas/Practica0_RNA/Practica_1GermanGomez/";
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

void Neurona::cargarIOS(){
  archivo.setFileName(rutaFile + "ios.txt");
  if ( !archivo.open( QIODevice::ReadOnly | QIODevice::Text ) ){
    cout << "ERROR: No se pudo acceder al archivo deseado"<<endl;
  }
  else{
    cout << "Cargando data de ios.txt"<<endl;
    manejadorData = new QTextStream(&archivo);
    int i,j;
    QString conjuntoData, elementoData;
    for(j=0; j<=xmatriz; j++){
      cout<<numsel.toInt();
      conjuntoData=manejadorData->readLine();
      for(i=0; i<=ymatriz; i++){               
          elementoData = conjuntoData.at(i);
          ios[i][j] = elementoData.toInt();
          cout << ios[i][j];
      }
      cout<<endl;
    }
    archivo.close();
  }




}

double Neurona::sigmoide(double x) {
  //retorna la funcion sigmoide
  return (1/(1+exp((-1)*x)));
}
