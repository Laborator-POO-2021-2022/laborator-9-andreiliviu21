#include "vehicul.hpp"

Vehicul::Vehicul(): pret(0), proprietar(NULL) {

}

Vehicul::Vehicul(const char* owner, int price) {
    this->pret = price;
    this->proprietar = new char[strlen(owner) + 1];
    strcpy(this->proprietar, owner);
}

Vehicul::Vehicul(const Vehicul &obj) {
    proprietar = NULL;
    *this = obj;
}

Vehicul& Vehicul::operator=(const Vehicul &obj) {
    if (proprietar != NULL) {
        delete[] proprietar;
    }
    this->pret = obj.pret;
    this->proprietar = new char[strlen(obj.proprietar) + 1];
    strcpy(this->proprietar, obj.proprietar);
    return *this;
}

void Vehicul::vehicul_afisare() {
    std::cout<<"~VEHICUL~ \n" << std::endl;
    std::cout<<"Proprietar: " << proprietar << std::endl;
    std::cout<<"Pretul: " << pret << std::endl;
    std::cout << '\n';
}

char* Vehicul::get_proprietar() {
    return proprietar;
}

int Vehicul::get_pret() {
    return pret;
}

Vehicul::~Vehicul()
{
    delete[] proprietar;
}