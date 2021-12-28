#include "remorca.hpp"

Remorca::Remorca(): greutate_maxima(0), Vehicul(){
    for(int i = 0; i < 3; i++) {
        dimensiuni[i] = 0;
    }
}

Remorca::Remorca(const char* owner, int price, int dimens[], int max_weight): Vehicul(owner, price){
    for(int i = 0; i < 3; i++) {
        this->dimensiuni[i] = dimens[i];
    }
    greutate_maxima = max_weight;

}

Remorca::Remorca(const Remorca& obj) {
    *this = obj;
}

Remorca& Remorca::operator=(const Remorca& obj) {
    Vehicul::operator=(obj);
    for(int i = 0; i < 3; i++) {
        this->dimensiuni[i] = obj.dimensiuni[i];
    }
    this->greutate_maxima = obj.greutate_maxima;
    return *this;
}

void Remorca::get_dimensiuni() {
    for(int i = 0; i < 3; i++) {
        std::cout<<dimensiuni[i]<<" ";
    }
}

int Remorca::get_greutate() {
    return greutate_maxima;
}

void Remorca::vehicul_afisare() {
    std::cout << "~REMORCA~\n";
    std::cout<<"Proprietar: "
             <<Vehicul::get_proprietar()<<std::endl;
    std::cout << "Pret: "
              <<Vehicul::get_pret()<<std::endl;
    std::cout<<"Remorca dimensiuni: ";
    for(int i = 0; i < 3; i++) {
        std::cout<<dimensiuni[i]<< " "; 
    }
    std::cout <<'\n';
    std::cout << "Remorca greutate maxima: "
              << get_greutate() <<std::endl;
    std::cout <<'\n'; 
}