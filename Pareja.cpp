/* 
 * File:   Pareja.cpp
 * Author: mabh
 * 
 * Created on 30 de octubre de 2013, 16:21
 */

#include "Pareja.h"


Pareja::Pareja(int p1, int p2){
    a=p1;
    b=p2;
}

Pareja::Pareja(const Pareja& orig){
    a=orig.a;
    b=orig.b;
    
}

void Pareja::Lee(int& p1, int& p2){
    p1=a;
    p2=b;
}

void Pareja::Guarda(int pa, int pb){
    a=pa;
    b=pb;
}