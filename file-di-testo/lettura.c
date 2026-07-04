#include <stdio.h> // header per usare il tipo FILE e le funzioni fopen, fclose e printf 
#include <stdlib.h> //Necessario per utilizzare la procedura exit()

int main(){
    FILE *pf; // Definisce un puntatore a FILE; l'utente gestisce i file solo tramite puntatori a questa struttura

    char s1[80];
    char s2[80];
    int d;

    pf = fopen("doc.txt", "rt");
     /* 
       fopen() stabilisce una corrispondenza tra il nome fisico del file ("doc.txt") e la variabile puntatore (pf).
       Il modo "rt" indica:
       - 'r': apertura in sola lettura (fallisce se il file non esiste).
       - 't': modalità testo (default), dove i dati sono sequenze di caratteri ASCII.
    */

    /* 
       Il puntatore pf assume il valore NULL se l'apertura fallisce. 
       Controllarlo è l'unico modo per sapere se il file è stato davvero aperto [3, 10].
    */
    if(pf == NULL){
        printf("Errore in apertura file\n");
        /* 
           exit() termina immediatamente il programma. 
           Il valore passato (1) comunica al sistema operativo che l'esecuzione è terminata con un errore [10, 13].
        */
        exit(1);
    }

    //OPERAZIONI SUL FILE
    fscanf(pf, "%s", s1);
    fscanf(pf, "%s", s2);
    fscanf(pf, "%d", &d);
    
    /* 
       fclose() sopprime la corrispondenza fra il file fisico e la variabile puntatore.
       Restituisce 0 se tutto è andato bene, altrimenti restituisce il valore EOF (diverso da 0) [3, 14].
       Prima della chiusura, garantisce che tutti i buffer (memoria temporanea) vengano svuotati [3].
    */
    if(fclose(pf) != 0){
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}