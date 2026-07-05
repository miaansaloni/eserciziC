#include "figura.h"
#include <math.h>
#define PI 3.14159265358979323846

//funzione calcolo dell'area della figura
float area(Figura f){
    switch (f.tipo){

        case Quadrato:
            return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
        
        case Rettangolo:
            return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
        
        case Triangolo:
            float s = (f.dati.datiTriangolo.latoA + f.dati.datiTriangolo.latoB + f.dati.datiTriangolo.latoC)/2.0f;
            return sqrt(s*(s-f.dati.datiTriangolo.latoA)*(s-f.dati.datiTriangolo.latoB)*(s-f.dati.datiTriangolo.latoC));
        
        case Cerchio:
            return PI * (f.dati.datiCerchio.raggio * f.dati.datiCerchio.raggio);
    }
}

//funzione calcolo per perimetro della figura
float perimetro(Figura f){
    switch(f.tipo){

        case Quadrato:
            return f.dati.datiQuadrato.lato * 4;

        case Rettangolo:
            return (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza) * 2;

        case Triangolo:
            return f.dati.datiTriangolo.latoA + f.dati.datiTriangolo.latoB + f.dati.datiTriangolo.latoC;

        case Cerchio:
            return 2 * PI * f.dati.datiCerchio.raggio;
    }
}

Figura quadrato(float l){
    Figura f;
    f.tipo = Quadrato;
    f.dati.datiQuadrato.lato = l;
    return f;
}

Figura rettangolo(float b, float h){
    Figura f;
    f.tipo = Rettangolo;
    f.dati.datiRettangolo.altezza = h;
    f.dati.datiRettangolo.base = b;
    return f;
}

Figura triangolo(float a, float b, float c){
    Figura f;
    f.tipo = Triangolo;
    f.dati.datiTriangolo.latoA = a;
    f.dati.datiTriangolo.latoB = b;
    f.dati.datiTriangolo.latoC = c;
    return f;
}

Figura cerchio(float r){
    Figura f;
    f.tipo = Cerchio;
    f.dati.datiCerchio.raggio = r;
    return f;
}