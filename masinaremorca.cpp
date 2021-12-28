#include "masinaremorca.hpp"

Masina_cu_remorca::Masina_cu_remorca(): Remorca(), Masina(), Vehicul(), masa_totala(0) {
    
}

Masina_cu_remorca::Masina_cu_remorca
(const char*owner, int price, int dim_rem[], int weight, int dim_mas[], const char*oem, int total_mass):
Remorca(owner, price, dim_rem, weight), Masina(owner, price, dim_mas, oem), Vehicul(owner, price) {

    masa_totala = total_mass;
}

Masina_cu_remorca::Masina_cu_remorca(const Masina_cu_remorca &obj) {
	*this = obj;
}

int Masina_cu_remorca::get_masaTot() const {
	return masa_totala;
}

void Masina_cu_remorca::vehicul_afisare() {
    std::cout << "~MASINA CU REMORCA~\n";
    std::cout<<"Proprietar: "
             <<Vehicul::get_proprietar()<<std::endl;
    std::cout << "Pret: "
              <<Vehicul::get_pret()<<std::endl;
    std::cout<<"Dimensiuni masina: ";
    Masina::getMasina_dimensiuni();
    std::cout <<'\n'; 

    std::cout << "Marca: "
              << Masina::get_marca() <<std::endl;
    std::cout<<"Dimensiuni remorca: ";
    Remorca::get_dimensiuni();
    std::cout <<'\n'; 
    std::cout << "Greutate maxima: "
              <<Remorca::get_greutate() << std::endl;
    std::cout <<"Masa totala: " << get_masaTot() << std::endl;
    std::cout <<'\n'; 

}

Masina_cu_remorca& Masina_cu_remorca::operator = (const Masina_cu_remorca& obj) {
    Vehicul::operator=(obj); 
    Remorca::operator=(obj); 
    this->masa_totala = obj.masa_totala;
    return *this;
}

int operator+(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2) {
	Masina_cu_remorca obj3;
	obj3.masa_totala = obj1.masa_totala + obj2.masa_totala;
	return obj3.masa_totala;	
}

int operator-(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2) {
	Masina_cu_remorca obj3;
	obj3.masa_totala = obj1.masa_totala - obj2.masa_totala;
	return obj3.masa_totala;	
}

bool Masina_cu_remorca::operator>(const Masina_cu_remorca& obj)
{
	if(this->get_masaTot() > obj.get_masaTot()) {
        return true;
    } else {
        return false;
    }
}


bool Masina_cu_remorca::operator<(const Masina_cu_remorca& obj)
{
	if(this->get_masaTot() < obj.get_masaTot()) {
        return true;
    } else {
        return false;
    }
}