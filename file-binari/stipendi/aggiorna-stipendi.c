// processo di aggiornamento in-place di un file binario. La macchina astratta C gestisce questa operazione attraverso
// l'interazione con il sistema operativo, utilizzando puntatori a strutture opache e manipolando direttamente la memoria
// e la posizione della testina di lettura/scrittura.

#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"

int main(int argc, char *argv[])
{
    FILE *pf;
    Dipendente d; // Riserva un'area di memoria consecutiva nello stack per contenere i campi di un record Dipendente

    /*fopen() stabilisce una corrispondenza tra il nome fisico "stipendi.dat" e pf
      Il modo "r+b" indica:
      - 'r+': apertura in lettura e scrittura (aggiornamento). Il file deve esistere
      - 'b': modalità binaria; i dati sono trattati come pura sequenza di byte (rappresentazione interna)*/

    if (argc != 2)
    {
        printf("Uso: %s nome_file\n", argv[0]);
        exit(3);
    }

    if ((pf = fopen(argv[1], "r+b")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    /*fread() tenta di leggere 1 elemento di dimensione sizeof(Dipendente) dall'indirizzo della testina.
      Il valore di ritorno è il numero di elementi letti; se è 1, il ciclo continua
      Dopo la lettura, la macchina astratta sposta automaticamente la testina in avanti*/
    while (fread(&d, sizeof(Dipendente), 1, pf) == 1)
    {
        if (d.stipendio < 2000.0)
        {
            d.stipendio = d.stipendio * 1.1; // Aggiornamento del valore nella variabile locale 'd' risiedente nella RAM

            /*fseek() sposta la testina per l'accesso diretto
               Qui arretra di una posizione record (-sizeof) rispetto alla posizione attuale (SEEK_CUR),
               perché fread() l'aveva spostata in avanti dopo la lettura*/
            fseek(pf, -sizeof(Dipendente), SEEK_CUR);

            /* fwrite() ricopia i byte della variabile 'd' (dalla RAM) direttamente sul file
               nella posizione puntata dalla testina, sovrascrivendo il vecchio record */
            fwrite(&d, sizeof(Dipendente), 1, pf);

            /* fflush() svuota i buffer garantendo la persistenza su memoria di massa [2, 24].
               È obbligatoria per passare correttamente da una scrittura a una successiva lettura
               quando si opera in modalità aggiornamento ('+') */
            fflush(pf);
        }
    }

    /*fclose() sopprime la corrispondenza tra pf e il file fisico e libera le risorse [2, 25].
       Restituisce 0 se l'operazione ha successo */
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file");
        exit(2);
    }

    return 0;
}