/* 
 * File:   Circulo.h
 * Author: mabh
 *
 * Created on 30 de octubre de 2013, 15:35
 */

#ifndef CIRCULO_H
#define	CIRCULO_H

class Circulo {
private:
    double x,y ;
    double radio;
    
protected:
    void msgEsNegativo(); 
    
public:
    Circulo();
    Circulo(double , double , double );
    
    double getX(){return x;}
    double getY(){return y;}
    double getRadio(){return radio;}
    
    void setX( double px){x=px;}
    void setY(double py){y=py;}
    void setRadio(double pradio){ radio=pradio;}
    
    double calcularLongitudCircunferencia();
    double calcularAreaCirculo();
    virtual ~Circulo();
};

#endif	/* CIRCULO_H */

