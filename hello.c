#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int A) {
    // Il valore di ritorno della funzione
    return 1 - A;
}
// Funzione per simulare la porta AND
int AND(int A, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return A*B;
}
// Funzione per simulare la porta OR
int OR(int A, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return (1-(1-A)*(1-B));
}
int main() {
    // Dichiara una variabile
    int A, B, C, D, E, F;
    printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
    printf("Hai inserito il valore A: %d\n", A);
    printf("Inserisci il valore di B (0 o 1):\n");
    scanf("%d", &B);
    printf("Hai inserito il valore B: %d\n", B);
    printf("Inserisci il valore di C (0 o 1):\n");
    scanf("%d", &C);
    printf("Hai inserito il valore C: %d\n", C);
    printf("Inserisci il valore di D (0 o 1):\n");
    scanf("%d", &D);
    printf("Hai inserito il valore D: %d\n", D);
    printf("Inserisci il valore di E (0 o 1):\n");
    scanf("%d", &E);
    printf("Hai inserito il valore E: %d\n", E);
    printf("Inserisci il valore di F (0 o 1):\n");
    scanf("%d", &F);
    printf("Hai inserito il valore F: %d\n", F);
    
    if (A != 0 && A != 1 && B != 0 && B != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        // Procediamo con l'esecuzione solo se il numero è 1 o 0
        printf("I valori inseriti sono 1 o 0\n");
        // Esempio di porta NOT
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);
        // Esempio di porta AND
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);
        // Esempio di porta OR
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);
        int Bonus = NOT(AND(A, OR(A, B)));
        printf("Il valore di uscita della funzione NOT(AND(A, OR(A, B))) è: %d\n", Bonus);

// Labirinto Calcolo

        int x1 = OR(A, (NOT(A)));
        int x2 = OR(D, (NOT(D)));
        int x3 = OR(E, (NOT(E)));
        int x4 = OR(F, (NOT(F)));
        int x5 = OR(B, (NOT(B)));
        int x6 = OR(C, (NOT(C)));
        int y1 = OR(x1, x2);
        int y2 = OR(x3, x4);
        int y3 = OR(x5, x6);
        int z1 = AND(y1, y2);
        int tautologia = AND(z1, y3);

        printf("Il valore della tautologia di cui è allegata l'immagine è: %d\n", tautologia);
    }
    printf("\n\n");
}




/* La porta logica teutologia in utilizzo è:  
((((NOT(A) OR A) OR (NOT(D) OR D)) AND ((NOT(E) OR E) OR (NOT(F) OR F))) AND ((NOT(B) OR B) OR (NOT(C) OR C)))       
*/