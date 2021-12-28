#include "masinaremorca.hpp"
int main() {
    int remorca_dim[3] = {2, 1, 3};
    int remorca_dim2[3] = {3, 2, 4};
    int masina_dim[3] = {3, 2, 2};  
    int masina_dim2[3] = {4, 3, 3};
    Vehicul** vect = new Vehicul*[10];

    vect[0] = new Vehicul("Ion", 2500);
	vect[1] = new Vehicul("Elena", 5000);
	vect[2] = new Remorca("Laurentiu", 3000, remorca_dim2, 750);
	vect[3] = new Remorca("Adrian", 500, remorca_dim,  1000);
	vect[4] = new Masina("Laviniu", 12000, masina_dim, "BMW");
	vect[5] = new Masina("Diana", 7000, masina_dim2,"Renault");
    vect[6] = new Masina("Alexa (tasu are bani)", 28000, masina_dim,"Mercedes");
	vect[7] = new Masina_cu_remorca("Costel", 250, remorca_dim, 720, masina_dim2, "Dacia Papuc",  2000);
	vect[8] = new Masina_cu_remorca("Costin", 2000, remorca_dim, 1320, masina_dim, "Volkwagen",  5800);
    vect[9] = new Masina_cu_remorca("Marius", 5000, remorca_dim2, 1132, masina_dim, "Dacia",  1900);

    std::cout<<"Vectorul de vehicule este: \n" << "-------------------------------------" << std::endl;
    for(int i = 0; i < 10; i++) {
        vect[i]->vehicul_afisare();
    }
    
    for(int i=0; i<10; i++) {
        delete vect[i];
    }
    delete[] vect;

    return 0;
}