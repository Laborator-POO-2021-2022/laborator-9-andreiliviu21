#ifndef MASINAREMORCA_HPP
#define MASINAREMORCA_HPP 
#include "masina.hpp"
#include "remorca.hpp"

class Masina_cu_remorca: public Remorca, public Masina {
protected:
    int masa_totala; //fara incarcatura
    
public:
    Masina_cu_remorca();
    Masina_cu_remorca(const char*, int, int[], int, int[], const char*, int);
    Masina_cu_remorca(const Masina_cu_remorca&);
    Masina_cu_remorca& operator=(const Masina_cu_remorca&);
    void vehicul_afisare();
    int get_masaTot() const;
    friend int operator+(const Masina_cu_remorca&, const Masina_cu_remorca&);
    friend int operator-(const Masina_cu_remorca&, const Masina_cu_remorca&);
    bool operator>(const Masina_cu_remorca&);
    bool operator<(const Masina_cu_remorca&);
};


#endif