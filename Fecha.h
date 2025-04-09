/* 
 * File:   Fecha.h
 * Author: mabh
 *
 * Created on 30 de octubre de 2013, 17:14
 */

#ifndef FECHA_H
#define	FECHA_H

class Fecha {
private:
    int dia, mes, anno;
protected:
    bool bisiesto();    
public:
    Fecha(int dd=1,int mm=1,int aaaa=2001);

    void asignarFecha(int dd=0, int mm=0, int aaaa=0);
    void obtenerFecha(int& dd, int& mm, int& aaaa);
    bool fechaCorrecta();
    int  obtenerDia();
    int  obtenerMes();
    int  obtenerAnno();    

    ~Fecha();

};

#endif	/* FECHA_H */

