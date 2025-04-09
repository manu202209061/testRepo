/* 
 * File:   main.cpp
 * Author: mabh
 *
 * Created on 30 de octubre de 2013, 15:34
 */

#include <iostream>
#include <vector>
#include "Circulo.h"
#include "Pareja.h"
#include "Fecha.h"

using namespace std;

/*
 * 
 */

int main() {
    Circulo v1(100,200,10);
    double area =v1.calcularAreaCirculo();
    double longi=v1.calcularLongitudCircunferencia();
    cout<<"El área es: "<<area<<endl;
    cout<<"La longitud es: "<<longi<<endl;
    
    v1.setRadio(50);
    area =v1.calcularAreaCirculo();
    longi=v1.calcularLongitudCircunferencia();
    cout<<"El área es: "<<area<<endl;
    cout<<"La longitud es: "<<longi<<endl;    
        
    Pareja par(10,20);
    int w1=0,w2=0;
    par.Lee(w1,w2);
    cout<<"Los valores de la pareja son: "<<w1<<" y "<< w2 <<"\n";
    par.Guarda(4,8);
    par.Lee(w1,w2);
    cout<<"Los valores de la pareja son: "<<w1<<" y "<< w2 <<"\n";
    
    Pareja estable;
    estable.Lee(w1,w2);
    estable.Guarda(10,20);
    
    Pareja rara(100,200);
    Pareja ases(rara);
    
    vector<Fecha> vec;
    
    vector<Fecha>::iterator itera;
   
    Fecha dia1(1,1,2000);
    Fecha dia2(2,2,2001);
    Fecha dia3(3,3,2002);
    Fecha dia4(4,4,2003);
    Fecha dia5(5,5,2004);
    
    
    vec.push_back(dia1);
    vec.push_back(dia2);
    vec.push_back(dia3);
    vec.push_back(dia4);  
    vec.push_back(dia5);
  
    Fecha fec;
    for(itera=vec.begin();itera<vec.end();itera++){
        fec=*itera;
        cout<<endl;
        cout<<fec.obtenerAnno();
        
    }
    return 0;
}

