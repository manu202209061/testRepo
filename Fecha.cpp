
#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(int dd , int mm , int aaaa ):dia(dd),mes(mm),anno(aaaa)
{
    if(!this->fechaCorrecta()){
        cout<<"Fecha incorreta. Se asigna fecha por omisión.";
        dia=1;
        mes=1;
        anno=2001;
    }
}

void Fecha::asignarFecha(int dd , int mm , int aaaa ){
    dia=dd;
    mes=mm;
    anno=aaaa;
}

void Fecha::obtenerFecha(int& dd, int& mm, int& aaaa){
    dd=dia;
    mm=mes;
    aaaa=anno;
}

Fecha::~Fecha() {
}

int Fecha::obtenerDia(){
    return dia;
}

int Fecha::obtenerMes(){
    return mes;
}

int Fecha::obtenerAnno(){
    return anno;
}

bool Fecha::fechaCorrecta(){
    int diasok;    
    bool resultado=false;
    switch(mes){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                diasok = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                diasok = 30;
                break;    
            case 2:
                if (this->bisiesto()) diasok=29;
                else diasok=28;
                break;
    } 

    if (dia<=diasok){
        if(mes>=1 && mes<=12){
            if(anno>1000) resultado= true;
        }
    }

}

bool Fecha::bisiesto(){
    if((anno%4==0) && ((anno%100)!=0) || (anno%400==0)) return true;
    else return false;
}