#include <iostream>

using namespace std;

int main()
{
char caracter ;
int i=0;

char textoExtraido[50][50];

FILE *fichero;
fichero= fopen("lenguaje.txt","rt");

   if (fichero==NULL) {
        cout << "Fichero lenguaje.txt vacio" << endl;

    } else {


    	 for ( i = 0; i <=11; i++)
    {



fscanf(fichero, "%s" , &textoExtraido[i]);
string Cadena = textoExtraido[i];
if(Cadena!="")   {

string TablaSimbolos[3]={"mientras", "si", "sino"};

enum TEstado{q0, q1, qe};

TEstado Estado;

int  Simbolo;

int i;
int longitud;

i= longitud=0;
Estado= q0;



longitud= Cadena.size();

while (longitud > i and Estado !=qe){
	Simbolo = Cadena[i];
	switch (Estado){
		case q0:
			if (Simbolo >= 'a' && Simbolo <='z'){
				Estado=q1;
			}

			break;

			case q1:
				if(Simbolo >= 'a' && Simbolo <='z'){
					Estado = q1;
				}
				else{
					Estado = qe;
				}
				break;
	}
	i++;
}


if(Estado==q1){
	cout << " Cadena aceptada "<< Cadena <<endl;

	int j;
	int TamanioArreglo=sizeof TablaSimbolos/ sizeof TablaSimbolos[0];
	for(j=0; j< TamanioArreglo; j++){
		if(Cadena.compare(TablaSimbolos[j])==0){
			cout<<" Palabra reservada: " << Cadena<< "\n";
			break;

		}
	}
}
else{
	cout << "Cadena no valida\n";
}




    }


     }
 }
    fclose(fichero);



}
