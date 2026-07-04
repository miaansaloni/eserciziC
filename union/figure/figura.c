#include "figura.h"

//funzione calcolo dell'area della figura
float area(Figura f){
    switch (f.tipo){
        case Quadrato:
            return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
        case Rettangolo:
            return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
    }
}

//funzione calcolo per perimetro della figura
float perimetro(Figura f){
    switch(f.tipo){
        case Quadrato:
            return f.dati.datiQuadrato.lato * 4;
        case Rettangolo:
            return (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza) * 2;
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