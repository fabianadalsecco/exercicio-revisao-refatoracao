#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro engenheiros[3];
  Engenheiro engenheiros[0] = Engenheiro("Joao Snow", 35, 3, 9.5);
  Engenheiro engenheiros[1] = Engenheiro("Daniela Targaryen", 30, 1, 8);
  Engenheiro engenheiros[2] = Engenheiro("Bruno Stark", 30, 2, 8);

  for (int i = 0; i < 3; i++){
    engenheiros[i].print();
  }

  Vendedor vendedores[3];
  Vendedor vendedores[0] = Vendedor("Tonho Lannister", 20, 5000, 6);
  Vendedor vendedores[1] = Vendedor("Jose Mormont", 25, 3000, 8);
  Vendedor vendedores[2] = Vendedor("Sonia Stark", 30, 4000, 8);
  
  for (int i = 0; i < 3; i++){
    vendedores[i].print();
    if(i != 2){
      std::cout << std::endl;
    }
  }

  return 0;	
}