/* 
 * File:   Circulo.cpp
 * Author: mabh
 * 
 * Created on 30 de octubre de 2013, 15:35
 */
#include <iostream>
#include "Circulo.h"

using namespace std;

Circulo::Circulo() {
}

// constructor con parámetros
Circulo::Circulo(double px, double py, double pradio){
    x=px;
    y=py;
    if (pradio<0){
        msgEsNegativo();
        pradio=-pradio;
    }
    radio=pradio;
}


void Circulo::msgEsNegativo(){
    cout<< "El radio es negativo, pero no pasa nada. ";
}

double Circulo::calcularLongitudCircunferencia(){
    return 2+3.1415926*radio;
}

double Circulo::calcularAreaCirculo(){
    return 3.1415926*radio*radio;
}

Circulo::~Circulo() {
}

