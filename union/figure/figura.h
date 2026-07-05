
typedef enum {Quadrato, Rettangolo, Triangolo, Cerchio} TipoFigura;

//////////////////////////

typedef struct{
    float lato;
} DatiQuadrato;

typedef struct{
    float base;
    float altezza;
} DatiRettangolo;

typedef struct{
    float latoA;
    float latoB;
    float latoC;
} DatiTriangolo;

typedef struct{
    float raggio;
}DatiCerchio;

//////////////////////////

typedef union {
    DatiQuadrato datiQuadrato;
    DatiRettangolo datiRettangolo;
    DatiTriangolo datiTriangolo;
    DatiCerchio datiCerchio;
}DatiFigura;

//////////////////////////

typedef struct{
    TipoFigura tipo;
    DatiFigura dati;
}Figura;

//////////////////////////

float area(Figura f);
float perimetro(Figura f);

Figura quadrato(float l);
Figura rettangolo(float b, float h);
Figura triangolo(float a, float b, float c);
Figura cerchio(float r);