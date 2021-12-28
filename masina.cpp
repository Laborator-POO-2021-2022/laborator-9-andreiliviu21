#include "masina.hpp"

Masina::Masina(): marca(NULL), Vehicul() {
    
    for(int i = 0; i < 3; i++) {
        dimensiuni[i] = 0;
    }
}

Masina::Masina(const char* owner, int price, int dim[], const char* oem): Vehicul(owner, price) {
    
    for(int i = 0; i < 3; i++) {
        this->dimensiuni[i] = dim[i];
    }
    this->marca = new char[strlen(oem) + 1];
	strcpy(this->marca, oem);
}

Masina::Masina(const Masina& obj) {
    marca = NULL;
    *this = obj;
}

Masina& Masina::operator=(const Masina& obj) {
    Vehicul::operator=(obj);
    for(int i = 0; i < 3; i++) {
        this->dimensiuni[i] = obj.dimensiuni[i];
    }
    if(marca != NULL) {
        delete[] marca;
    }
    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);
    return *this;
}

void Masina::getMasina_dimensiuni() {
    for(int i = 0; i < 3; i++) {
        std::cout << dimensiuni[i] << " ";
    }
}

char* Masina::get_marca() {
    return marca;
}

void Masina::vehicul_afisare() {
    std::cout << "~MASINA~\n";
    std::cout<<"Proprietar: "
             <<Vehicul::get_proprietar()<<std::endl;
    std::cout << "Pret: "
              <<Vehicul::get_pret()<<std::endl;
    std::cout<<"Dimensiuni masina: ";
    for(int i = 0; i < 3; i++) {
        std::cout<<dimensiuni[i]<< " "; 
    }
    std::cout << "\nMarca: "
              << this->get_marca() <<std::endl;
    std::cout <<'\n'; 
}

Masina::~Masina() {
    delete[] marca;
}