#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>

using namespace std;

//Planetas
bool found_planet_A = false, found_planet_B = false, found_planet_C = false, found_planet_D = false, found_planet_E = false;
bool found_planet_F = false, found_planet_G = false, found_planet_H = false, found_planet_I = false, found_planet_J = false;
bool found_planet_K = false, found_planet_L = false, found_planet_M = false, found_planet_N = false, found_planet_O = false;
bool found_planet_P = false, found_planet_Q = false, found_planet_R = false, found_planet_S = false, found_planet_T = false;
bool found_planet_U = false, found_planet_V = false, found_planet_W = false, found_planet_X = false, found_planet_Y = false;
bool found_planet_Z = false;

//Energia planetas
int energy_planet_A = 0, energy_planet_B = 0, energy_planet_C = 0, energy_planet_D = 0, energy_planet_E = 0;
int energy_planet_F = 0, energy_planet_G = 0, energy_planet_H = 0, energy_planet_I = 0, energy_planet_J = 0;
int energy_planet_K = 0, energy_planet_L = 0, energy_planet_M = 0, energy_planet_N = 0, energy_planet_O = 0;
int energy_planet_P = 0, energy_planet_Q = 0, energy_planet_R = 0, energy_planet_S = 0, energy_planet_T = 0;
int energy_planet_U = 0, energy_planet_V = 0, energy_planet_W = 0, energy_planet_X = 0, energy_planet_Y = 0;
int energy_planet_Z = 0;

int contador_planetas = 0;

void registro_de_planetas(char P){
    if(P == 'A' && found_planet_A == false){
         found_planet_A = true  ;
         contador_planetas ++;
    }
    else if(P == 'B' && found_planet_B == false){
         found_planet_B = true  ;
         contador_planetas ++;
    }
    else if(P == 'C' && found_planet_C == false){
         found_planet_C = true  ;
         contador_planetas ++;
    }    
    else if(P == 'D' && found_planet_D == false){
         found_planet_D = true  ;
         contador_planetas ++;
    }    
    else if(P == 'E' && found_planet_E == false){
         found_planet_E = true  ;
         contador_planetas ++;
    }   
    else if(P == 'F' && found_planet_F == false){
         found_planet_F = true  ;
         contador_planetas ++;
    }    
    else if(P == 'G' && found_planet_G == false){
         found_planet_G = true  ;
         contador_planetas ++;
    }    
    else if(P == 'H' && found_planet_H == false){
         found_planet_H = true  ;
         contador_planetas ++;
    }    
    else if(P == 'I' && found_planet_I == false){
         found_planet_I = true  ;
         contador_planetas ++;
    }    
    else if(P == 'J' && found_planet_J == false){
         found_planet_J = true  ;
         contador_planetas ++;
    }    
    else if(P == 'K' && found_planet_K == false){
         found_planet_K = true  ;
         contador_planetas ++;
    }
    else if(P == 'L' && found_planet_L == false){
         found_planet_L = true  ;
         contador_planetas ++;
    }    
    else if(P == 'M' && found_planet_M == false){
         found_planet_M = true  ;
         contador_planetas ++;
    }    
    else if(P == 'N' && found_planet_N == false){
         found_planet_N = true  ;
         contador_planetas ++;
    }    
    else if(P == 'O' && found_planet_O == false){
         found_planet_O = true  ;
         contador_planetas ++;
    }    
    else if(P == 'P' && found_planet_P == false){
         found_planet_P = true  ;
         contador_planetas ++;
    }    
    else if(P == 'Q' && found_planet_Q == false){
         found_planet_Q = true  ;
         contador_planetas ++;
    }    
    else if(P == 'R' && found_planet_R == false){
         found_planet_R = true  ;
         contador_planetas ++;
    }    
    else if(P == 'S' && found_planet_S == false){
         found_planet_S = true  ;
         contador_planetas ++;
    }    
    else if(P == 'T' && found_planet_T == false){
         found_planet_T = true  ;
         contador_planetas ++;
    }  
    else if(P == 'U' && found_planet_U == false){
         found_planet_U = true  ;
         contador_planetas ++;
    }    
    else if(P == 'V' && found_planet_V == false){
         found_planet_V = true  ;
         contador_planetas ++;
    }    
    else if(P == 'W' && found_planet_W == false){
         found_planet_W = true  ;
         contador_planetas ++;
    }    
    else if(P == 'X' && found_planet_X == false){
         found_planet_X  = true  ;
         contador_planetas ++;
    }    
    else if(P == 'Y' && found_planet_Y == false){
         found_planet_Y = true  ;
         contador_planetas ++;
    }    
    else if(P == 'Z' && found_planet_Z == false){
         found_planet_Z = true  ;
         contador_planetas ++;
    }
}

void energia_por_planeta(char P, int X){
    if(P == 'A'){
         energy_planet_A += X;
    }
    else if(P == 'B'){
         energy_planet_B += X;
    }
    else if(P == 'C'){
         energy_planet_C += X;
    }    
    else if(P == 'D'){
         energy_planet_D += X;
    }    
    else if(P == 'E'){
         energy_planet_E += X;
    }   
    else if(P == 'F'){
         energy_planet_F += X;
    }    
    else if(P == 'G'){
         energy_planet_G += X;
    }    
    else if(P == 'H'){
         energy_planet_H += X;
    }    
    else if(P == 'I'){
         energy_planet_I += X;
    }    
    else if(P == 'J'){
         energy_planet_J += X;
    }    
    else if(P == 'K'){
         energy_planet_K += X;
    }
    else if(P == 'L'){
         energy_planet_L += X;
    }    
    else if(P == 'M'){
         energy_planet_M += X;
    }    
    else if(P == 'N'){
         energy_planet_N += X;
    }    
    else if(P == 'O'){
         energy_planet_O += X;
    }    
    else if(P == 'P'){
         energy_planet_P += X;
    }    
    else if(P == 'Q'){
         energy_planet_Q += X;
    }    
    else if(P == 'R'){
         energy_planet_R += X;
    }    
    else if(P == 'S'){
         energy_planet_S += X;
    }    
    else if(P == 'T'){
         energy_planet_T += X;
    }  
    else if(P == 'U'){
         energy_planet_U += X;
    }    
    else if(P == 'V'){
         energy_planet_V += X;
    }    
    else if(P == 'W'){
         energy_planet_W += X;
    }    
    else if(P == 'X'){
         energy_planet_X += X;
    }    
    else if(P == 'Y'){
         energy_planet_Y += X;
    }    
    else if(P == 'Z'){
         energy_planet_Z += X;
    }
}

int main (){

    int N;     //Número de portales encontrados
    int V;    //Años de vida del viajero
    char E;  //Planeta de inicio
    char F; //Planeta destino
    int M; //Número de portales que se desea utilizar
    char P1, P2; //Par de planetas 
    int X;     //Energia del planeta
    char P;    //Planeta

    cin >> N;

    for(int i = 0; i<N; i++){
        cout<<"entrando al P1 y P2"<<endl;
        cin>> P1 >> P2;
        registro_de_planetas(P1);
        registro_de_planetas(P2);
    }


    for(int i = 0; i<contador_planetas; i++){
        cout<<"Entrando a energia"<<endl;
        cin>> P >> X;
        energia_por_planeta(P, X);
    }

    
    cin >> V;

    cin >> E;

    cin >> F;

    cin >> M;

    return 0;

}