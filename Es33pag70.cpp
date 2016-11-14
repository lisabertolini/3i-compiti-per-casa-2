// Pag 70 es 33

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void){
	int x;
	int y;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Questo programma esegue la potenza di un numero," << endl;
	cout << "Inserisci la base intera della potenza: ";
	cin >> x;
	cout << "Inserisci l'esponente intero della potenza: ";
	cin >> y;
	int risultato = 1;
	if (!(x == 0 && y == 0)){
        for (int j = 0; j < y; j++){
            risultato = risultato*x;
        }
        cout <<x<<"^"<<y<<"="<<risultato<<endl;
	} else {
        cout <<"0^0 e' indefinito."<<endl;
	}

	return 0;
}
