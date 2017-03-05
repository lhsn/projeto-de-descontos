/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: root
 *
 * Created on 12 de Dezembro de 2016, 23:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x,numero,resultado;
    printf("valor para a tabuada:");
    scanf("%d",&numero);
    x=0;
    
    for (x=0;x<11;x++){  
     printf("%d x %d = %d \n",numero,x,numero*x);
    }
    printf("\n");
     for (x=0;x<11;x++){  
    printf("%d + %d = %d \n",numero,x,numero+x);
     }
     printf("\n");
     for (x=0;x<11;x++){  
    printf("%d - %d = %d \n",numero,x,numero-x);
     }
    
    
    return 0;
}

