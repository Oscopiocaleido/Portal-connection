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

//Conexiones de los planetas 0<=x<=5
char con_A_1 = '\0', con_A_2 = '\0', con_A_3 = '\0', con_A_4 = '\0', con_A_5 = '\0';
char con_B_1 = '\0', con_B_2 = '\0', con_B_3 = '\0', con_B_4 = '\0', con_B_5 = '\0';
char con_C_1 = '\0', con_C_2 = '\0', con_C_3 = '\0', con_C_4 = '\0', con_C_5 = '\0';
char con_D_1 = '\0', con_D_2 = '\0', con_D_3 = '\0', con_D_4 = '\0', con_D_5 = '\0';
char con_E_1 = '\0', con_E_2 = '\0', con_E_3 = '\0', con_E_4 = '\0', con_E_5 = '\0';
char con_F_1 = '\0', con_F_2 = '\0', con_F_3 = '\0', con_F_4 = '\0', con_F_5 = '\0';
char con_G_1 = '\0', con_G_2 = '\0', con_G_3 = '\0', con_G_4 = '\0', con_G_5 = '\0';
char con_H_1 = '\0', con_H_2 = '\0', con_H_3 = '\0', con_H_4 = '\0', con_H_5 = '\0';
char con_I_1 = '\0', con_I_2 = '\0', con_I_3 = '\0', con_I_4 = '\0', con_I_5 = '\0';
char con_J_1 = '\0', con_J_2 = '\0', con_J_3 = '\0', con_J_4 = '\0', con_J_5 = '\0';
char con_K_1 = '\0', con_K_2 = '\0', con_K_3 = '\0', con_K_4 = '\0', con_K_5 = '\0';
char con_L_1 = '\0', con_L_2 = '\0', con_L_3 = '\0', con_L_4 = '\0', con_L_5 = '\0';
char con_M_1 = '\0', con_M_2 = '\0', con_M_3 = '\0', con_M_4 = '\0', con_M_5 = '\0';
char con_N_1 = '\0', con_N_2 = '\0', con_N_3 = '\0', con_N_4 = '\0', con_N_5 = '\0';
char con_O_1 = '\0', con_O_2 = '\0', con_O_3 = '\0', con_O_4 = '\0', con_O_5 = '\0';
char con_P_1 = '\0', con_P_2 = '\0', con_P_3 = '\0', con_P_4 = '\0', con_P_5 = '\0';
char con_Q_1 = '\0', con_Q_2 = '\0', con_Q_3 = '\0', con_Q_4 = '\0', con_Q_5 = '\0';
char con_R_1 = '\0', con_R_2 = '\0', con_R_3 = '\0', con_R_4 = '\0', con_R_5 = '\0';
char con_S_1 = '\0', con_S_2 = '\0', con_S_3 = '\0', con_S_4 = '\0', con_S_5 = '\0';
char con_T_1 = '\0', con_T_2 = '\0', con_T_3 = '\0', con_T_4 = '\0', con_T_5 = '\0';
char con_U_1 = '\0', con_U_2 = '\0', con_U_3 = '\0', con_U_4 = '\0', con_U_5 = '\0';
char con_V_1 = '\0', con_V_2 = '\0', con_V_3 = '\0', con_V_4 = '\0', con_V_5 = '\0';
char con_W_1 = '\0', con_W_2 = '\0', con_W_3 = '\0', con_W_4 = '\0', con_W_5 = '\0';
char con_X_1 = '\0', con_X_2 = '\0', con_X_3 = '\0', con_X_4 = '\0', con_X_5 = '\0';
char con_Y_1 = '\0', con_Y_2 = '\0', con_Y_3 = '\0', con_Y_4 = '\0', con_Y_5 = '\0';
char con_Z_1 = '\0', con_Z_2 = '\0', con_Z_3 = '\0', con_Z_4 = '\0', con_Z_5 = '\0';

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

void conexiones(char origen, char destino){
     if(origen == 'A'){
          //espacios de conexiones
          if(con_A_1 == '\0'){con_A_1 = destino;}
          else if(con_A_2 == '\0'){con_A_2 = destino;}
          else if(con_A_3 == '\0'){con_A_3 = destino;}
          else if(con_A_4 == '\0'){con_A_4 = destino;}
          else if(con_A_5 == '\0'){con_A_5 = destino;}
     }
     else if(origen == 'B'){
          if(con_B_1 == '\0'){con_B_1 = destino;}
          else if(con_B_2 == '\0'){con_B_2 = destino;}
          else if(con_B_3 == '\0'){con_B_3 = destino;}
          else if(con_B_4 == '\0'){con_B_4 = destino;}
          else if(con_B_5 == '\0'){con_B_5 = destino;}
     }
     else if(origen == 'C'){
          if(con_C_1 == '\0'){con_C_1 = destino;}
          else if(con_C_2 == '\0'){con_C_2 = destino;}
          else if(con_C_3 == '\0'){con_C_3 = destino;}
          else if(con_C_4 == '\0'){con_C_4 = destino;}
          else if(con_C_5 == '\0'){con_C_5 = destino;}
     }
     else if(origen == 'D'){
          if(con_D_1 == '\0'){con_D_1 = destino;}
          else if(con_D_2 == '\0'){con_D_2 = destino;}
          else if(con_D_3 == '\0'){con_D_3 = destino;}
          else if(con_D_4 == '\0'){con_D_4 = destino;}
          else if(con_D_5 == '\0'){con_D_5 = destino;}
     }
     else if(origen == 'E'){

          if(con_E_1 == '\0'){con_E_1 = destino;}
          else if(con_E_2 == '\0'){con_E_2 = destino;}
          else if(con_E_3 == '\0'){con_E_3 = destino;}
          else if(con_E_4 == '\0'){con_E_4 = destino;}
          else if(con_E_5 == '\0'){con_E_5 = destino;}
     }
     else if(origen == 'F'){
          if(con_F_1 == '\0'){con_F_1 = destino;}
          else if(con_F_2 == '\0'){con_F_2 = destino;}
          else if(con_F_3 == '\0'){con_F_3 = destino;}
          else if(con_F_4 == '\0'){con_F_4 = destino;}
          else if(con_F_5 == '\0'){con_F_5 = destino;}
     }
     else if(origen == 'G'){
          if(con_G_1 == '\0'){con_G_1 = destino;}
          else if(con_G_2 == '\0'){con_G_2 = destino;}
          else if(con_G_3 == '\0'){con_G_3 = destino;}
          else if(con_G_4 == '\0'){con_G_4 = destino;}
          else if(con_G_5 == '\0'){con_G_5 = destino;}
     }
     else if(origen == 'H'){
          if(con_H_1 == '\0'){con_H_1 = destino;}
          else if(con_H_2 == '\0'){con_H_2 = destino;}
          else if(con_H_3 == '\0'){con_H_3 = destino;}
          else if(con_H_4 == '\0'){con_H_4 = destino;}
          else if(con_H_5 == '\0'){con_H_5 = destino;}
     }
     else if(origen == 'I'){
          if(con_I_1 == '\0'){con_I_1 = destino;}
          else if(con_I_2 == '\0'){con_I_2 = destino;}
          else if(con_I_3 == '\0'){con_I_3 = destino;}
          else if(con_I_4 == '\0'){con_I_4 = destino;}
          else if(con_I_5 == '\0'){con_I_5 = destino;}
     }
     else if(origen == 'J'){
          if(con_J_1 == '\0'){con_J_1 = destino;}
          else if(con_J_2 == '\0'){con_J_2 = destino;}
          else if(con_J_3 == '\0'){con_J_3 = destino;}
          else if(con_J_4 == '\0'){con_J_4 = destino;}
          else if(con_J_5 == '\0'){con_J_5 = destino;}
     }
     else if(origen == 'K'){
          if(con_K_1 == '\0'){con_K_1 = destino;}
          else if(con_K_2 == '\0'){con_K_2 = destino;}
          else if(con_K_3 == '\0'){con_K_3 = destino;}
          else if(con_K_4 == '\0'){con_K_4 = destino;}
          else if(con_K_5 == '\0'){con_K_5 = destino;}
     }
     else if(origen == 'L'){
          if(con_L_1 == '\0'){con_L_1 = destino;}
          else if(con_L_2 == '\0'){con_L_2 = destino;}
          else if(con_L_3 == '\0'){con_L_3 = destino;}
          else if(con_L_4 == '\0'){con_L_4 = destino;}
          else if(con_L_5 == '\0'){con_L_5 = destino;}
     }
     else if(origen == 'M'){
          if(con_M_1 == '\0'){con_M_1 = destino;}
          else if(con_M_2 == '\0'){con_M_2 = destino;}
          else if(con_M_3 == '\0'){con_M_3 = destino;}
          else if(con_M_4 == '\0'){con_M_4 = destino;}
          else if(con_M_5 == '\0'){con_M_5 = destino;}
     }
     else if(origen == 'N'){
          if(con_N_1 == '\0'){con_N_1 = destino;}
          else if(con_N_2 == '\0'){con_N_2 = destino;}
          else if(con_N_3 == '\0'){con_N_3 = destino;}
          else if(con_N_4 == '\0'){con_N_4 = destino;}
          else if(con_N_5 == '\0'){con_N_5 = destino;}
     }
     else if(origen == 'O'){
          if(con_O_1 == '\0'){con_O_1 = destino;}
          else if(con_O_2 == '\0'){con_O_2 = destino;}
          else if(con_O_3 == '\0'){con_O_3 = destino;}
          else if(con_O_4 == '\0'){con_O_4 = destino;}
          else if(con_O_5 == '\0'){con_O_5 = destino;}
     }
     else if(origen == 'P'){
          if(con_P_1 == '\0'){con_P_1 = destino;}
          else if(con_P_2 == '\0'){con_P_2 = destino;}
          else if(con_P_3 == '\0'){con_P_3 = destino;}
          else if(con_P_4 == '\0'){con_P_4 = destino;}
          else if(con_P_5 == '\0'){con_P_5 = destino;}
     }
     else if(origen == 'Q'){
          if(con_Q_1 == '\0'){con_Q_1 = destino;}
          else if(con_Q_2 == '\0'){con_Q_2 = destino;}
          else if(con_Q_3 == '\0'){con_Q_3 = destino;}
          else if(con_Q_4 == '\0'){con_Q_4 = destino;}
          else if(con_Q_5 == '\0'){con_Q_5 = destino;}
     }
     else if(origen == 'R'){
          if(con_R_1 == '\0'){con_R_1 = destino;}
          else if(con_R_2 == '\0'){con_R_2 = destino;}
          else if(con_R_3 == '\0'){con_R_3 = destino;}
          else if(con_R_4 == '\0'){con_R_4 = destino;}
          else if(con_R_5 == '\0'){con_R_5 = destino;}
     }
     else if(origen == 'S'){
          if(con_S_1 == '\0'){con_S_1 = destino;}
          else if(con_S_2 == '\0'){con_S_2 = destino;}
          else if(con_S_3 == '\0'){con_S_3 = destino;}
          else if(con_S_4 == '\0'){con_S_4 = destino;}
          else if(con_S_5 == '\0'){con_S_5 = destino;}
     }
     else if(origen == 'T'){
          if(con_T_1 == '\0'){con_T_1 = destino;}
          else if(con_T_2 == '\0'){con_T_2 = destino;}
          else if(con_T_3 == '\0'){con_T_3 = destino;}
          else if(con_T_4 == '\0'){con_T_4 = destino;}
          else if(con_T_5 == '\0'){con_T_5 = destino;}
     }
     else if(origen == 'U'){
          if(con_U_1 == '\0'){con_U_1 = destino;}
          else if(con_U_2 == '\0'){con_U_2 = destino;}
          else if(con_U_3 == '\0'){con_U_3 = destino;}
          else if(con_U_4 == '\0'){con_U_4 = destino;}
          else if(con_U_5 == '\0'){con_U_5 = destino;}
     }
     else if(origen == 'V'){
          if(con_V_1 == '\0'){con_V_1 = destino;}
          else if(con_V_2 == '\0'){con_V_2 = destino;}
          else if(con_V_3 == '\0'){con_V_3 = destino;}
          else if(con_V_4 == '\0'){con_V_4 = destino;}
          else if(con_V_5 == '\0'){con_V_5 = destino;}
     }
     else if(origen == 'W'){
          if(con_W_1 == '\0'){con_W_1 = destino;}
          else if(con_W_2 == '\0'){con_W_2 = destino;}
          else if(con_W_3 == '\0'){con_W_3 = destino;}
          else if(con_W_4 == '\0'){con_W_4 = destino;}
          else if(con_W_5 == '\0'){con_W_5 = destino;}
     }
     else if(origen == 'X'){
          if(con_X_1 == '\0'){con_X_1 = destino;}
          else if(con_X_2 == '\0'){con_X_2 = destino;}
          else if(con_X_3 == '\0'){con_X_3 = destino;}
          else if(con_X_4 == '\0'){con_X_4 = destino;}
          else if(con_X_5 == '\0'){con_X_5 = destino;}
     }
     else if(origen == 'Y'){
          if(con_Y_1 == '\0'){con_Y_1 = destino;}
          else if(con_Y_2 == '\0'){con_Y_2 = destino;}
          else if(con_Y_3 == '\0'){con_Y_3 = destino;}
          else if(con_Y_4 == '\0'){con_Y_4 = destino;}
          else if(con_Y_5 == '\0'){con_Y_5 = destino;}
     }
     else if(origen == 'Z'){
          if(con_Z_1 == '\0'){con_Z_1 = destino;}
          else if(con_Z_2 == '\0'){con_Z_2 = destino;}
          else if(con_Z_3 == '\0'){con_Z_3 = destino;}
          else if(con_Z_4 == '\0'){con_Z_4 = destino;}
          else if(con_Z_5 == '\0'){con_Z_5 = destino;}
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

int tiempo_del_salto(char planeta_actual, char proximo_planeta){
     int distancia = 0;
     distancia = abs(planeta_actual - proximo_planeta);
     return distancia;
}

int obtener_energia(char planeta_actual){
          if(planeta_actual == 'A'){
               return energy_planet_A;
          }
          else if(planeta_actual == 'B'){
               return energy_planet_B;
          }
          else if(planeta_actual == 'C'){
               return energy_planet_C;
          }
          else if(planeta_actual == 'D'){
               return energy_planet_D;
          }
          else if(planeta_actual == 'E'){
               return energy_planet_E;
          }
          else if(planeta_actual == 'F'){
               return energy_planet_F;
          }
          else if(planeta_actual == 'G'){
               return energy_planet_G;
          }
          else if(planeta_actual == 'H'){
               return energy_planet_H;
          }
          else if(planeta_actual == 'I'){
               return energy_planet_I;
          }
          else if(planeta_actual == 'J'){
               return energy_planet_J;
          }
          else if(planeta_actual == 'K'){
               return energy_planet_K;
          }
          else if(planeta_actual == 'L'){
               return energy_planet_L;
          }
          else if(planeta_actual == 'M'){
               return energy_planet_M;
          }
          else if(planeta_actual == 'N'){
               return energy_planet_N;
          }
          else if(planeta_actual == 'O'){
               return energy_planet_O;
          }
          else if(planeta_actual == 'P'){
               return energy_planet_P;
          }
          else if(planeta_actual == 'Q'){
               return energy_planet_Q;
          }
          else if(planeta_actual == 'R'){
               return energy_planet_R;
          }
          else if(planeta_actual == 'S'){
               return energy_planet_S;
          }
          else if(planeta_actual == 'T'){
               return energy_planet_T;
          }
          else if(planeta_actual == 'U'){
               return energy_planet_U;
          }
          else if(planeta_actual == 'V'){
               return energy_planet_V;
          }
          else if(planeta_actual == 'W'){
               return energy_planet_W;
          }
          else if(planeta_actual == 'X'){
               return energy_planet_X;
          }
          else if(planeta_actual == 'Y'){
               return energy_planet_Y;
          }
          else if(planeta_actual == 'Z'){
               return energy_planet_Z;
          }
     return 0;
}

void usar_energia(char planeta_actual, int energia){
     if(planeta_actual == 'A'){
          energy_planet_A -= energia;
     }
     else if(planeta_actual == 'B'){
          energy_planet_B -= energia;
     }
     else if(planeta_actual == 'C'){
          energy_planet_C -= energia;
     }
     else if(planeta_actual == 'D'){
          energy_planet_D -= energia;
     }
     else if(planeta_actual == 'E'){
          energy_planet_E -= energia;
     }
     else if(planeta_actual == 'F'){
          energy_planet_F -= energia;
     }
     else if(planeta_actual == 'G'){
          energy_planet_G -= energia;
     }
     else if(planeta_actual == 'H'){
          energy_planet_H -= energia;
     }
     else if(planeta_actual == 'I'){
          energy_planet_I -= energia;
     }
     else if(planeta_actual == 'J'){
          energy_planet_J -= energia;
     }
     else if(planeta_actual == 'K'){
          energy_planet_K -= energia;
     }
     else if(planeta_actual == 'L'){
          energy_planet_L -= energia;
     }
     else if(planeta_actual == 'M'){
          energy_planet_M -= energia;
     }
     else if(planeta_actual == 'N'){
          energy_planet_N -= energia;
     }
     else if(planeta_actual == 'O'){
          energy_planet_O -= energia;
     }
     else if(planeta_actual == 'P'){
          energy_planet_P -= energia;
     }
     else if(planeta_actual == 'Q'){
          energy_planet_Q -= energia;
     }
     else if(planeta_actual == 'R'){
          energy_planet_R -= energia;
     }
     else if(planeta_actual == 'S'){
          energy_planet_S -= energia;
     }
     else if(planeta_actual == 'T'){
          energy_planet_T -= energia;
     }
     else if(planeta_actual == 'U'){
          energy_planet_U -= energia;
     }
     else if(planeta_actual == 'V'){
          energy_planet_V -= energia;
     }
     else if(planeta_actual == 'W'){
          energy_planet_W -= energia;
     }
     else if(planeta_actual == 'X'){
          energy_planet_X -= energia;
     }
     else if(planeta_actual == 'Y'){
          energy_planet_Y -= energia;
     }
     else if(planeta_actual == 'Z'){
          energy_planet_Z -= energia;
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
        cin>> P1 >> P2;
        registro_de_planetas(P1);
        registro_de_planetas(P2);
        conexiones(P1, P2);
        conexiones(P2, P1); //como los portales van de un punto A a un punto B, entonces también van a ir de B a A, pq es bidireccional
    }


    for(int i = 0; i<contador_planetas; i++){
        cin>> P >> X;
        energia_por_planeta(P, X);
    }

    
    cin >> V;

    cin >> E;

    cin >> F;

    cin >> M;

    bool condicion_vida = false, condicion_energy = false;
    char planeta_actual = E, planeta_final;
    int tiempo_total_viaje = 0;
    int vida_viajero = V;

    for(int i = 0; i < M; i++){

     char proximo_planeta;
     cin >> proximo_planeta;

     int tiempo_salto = tiempo_del_salto(planeta_actual, proximo_planeta);
     tiempo_total_viaje += tiempo_salto;

     if(vida_viajero < tiempo_salto){
          condicion_vida = true;
     }
     else if(obtener_energia(planeta_actual) < tiempo_salto){
          condicion_energy = true;
     }
     else{
          vida_viajero -= tiempo_salto;
          usar_energia(planeta_actual, tiempo_salto);
          planeta_actual = proximo_planeta;
     }
    }

    planeta_final = planeta_actual;

    if(condicion_vida == true){
          cout<<1<<endl;
    }
    else if(condicion_energy == true){
          cout<<5<<endl;
    }
    else{
          if(planeta_final == E){
               cout<<3<<endl;
          }
          else if(planeta_final == F){
               cout<<4<<endl;
          }
          else{
               cout<<2<<endl;
          }
    }

    cout<<tiempo_total_viaje<<endl;

    return 0;

}