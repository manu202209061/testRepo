/* 
 * File:   Pareja.h
 * Author: mabh
 *
 * Created on 30 de octubre de 2013, 16:21
 */

#ifndef PAREJA_H
#define	PAREJA_H

class Pareja {
private:
   int a,b;    
public:
    Pareja(int x=0 , int y=0);
    Pareja(const Pareja & orig);
    void Lee(int &, int &);
    void Guarda(int , int );
};

#endif	/* PAREJA_H */

