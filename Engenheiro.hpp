#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    std::string nome;  
	int projetos;
	
  public:        
    int setProjetos(int _projetos);
    int getProjetos();

};

#endif