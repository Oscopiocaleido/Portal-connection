#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>

using namespace std;

char planetas(char P1, char P2){
 
}

void energia_por_planeta(char P, int X){

}

int main (){
    int N;     //Número de portales encontrados
    int V;    //Años de vida del viajero
    char E;  //Planeta de inicio
    char F; //Planeta destino
    int M; //Número de portales que se desea utilizar
    char P1, P2; //Par de planetas 
    int X;     //Energia del planeta
    int P;    //Planeta

    cin>>N;

    int n_planetas = 0;
    
    for(int i = 0; i<N; i++){
        cin>> P1 >> P2;
        planetas(P1, P2);
        n_planetas+=2;
    }

    for(int i = 0; i<n_planetas; i++){
        cin>> P >> X;
        energia_por_planeta(P, X);
    }

    cin >> V;

    cin>> E;

    cin>> F;

    cin>> M;
    return 0;
}