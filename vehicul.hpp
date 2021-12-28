#ifndef VEHICUL_HPP
#define VEHICUL_HPP 
#include <cstring>
#include <iostream>

class Vehicul {
protected:
    char *proprietar;
    int pret;
public:
    Vehicul(); //done
    Vehicul(const char*, int); //done
    Vehicul(const Vehicul&); //done
    Vehicul& operator=(const Vehicul&); //done
    virtual void vehicul_afisare(); //done 
    virtual char* get_proprietar();
    virtual int get_pret();
    virtual ~Vehicul();
};


#endif