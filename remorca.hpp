#ifndef REMORCA_HPP
#define REMORCA_HPP 
#include "vehicul.hpp"

class Remorca: virtual public Vehicul {
protected:
    int dimensiuni[3]; //lungime, latime si inaltime
    int greutate_maxima;
public:
    Remorca();
    Remorca(const char*, int, int[], int);
    Remorca(const Remorca&);
    Remorca& operator=(const Remorca&);
    void vehicul_afisare();
    void get_dimensiuni();
    int get_greutate();
};


#endif