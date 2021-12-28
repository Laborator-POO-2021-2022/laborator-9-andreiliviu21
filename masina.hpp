#ifndef MASINA_HPP
#define MASINA_HPP 
#include "vehicul.hpp"
class Masina: virtual public Vehicul {
protected:
    int dimensiuni[3]; //lungime, latime si inaltime
    char *marca;
public:
    Masina();
    Masina(const char*, int, int*, const char*);
    Masina(const Masina&);
    void vehicul_afisare();
    Masina& operator = (const Masina&);
    void getMasina_dimensiuni();
    char* get_marca();
    ~Masina();
};


#endif