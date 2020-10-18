#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    std::string nome;  
	int projetos;
	
  public:
    Engenheiro ();
    Engenheiro (std::string _nome, double _salario, int _projetos, double _horas);        
    int setProjetos(int _projetos);
    int getProjetos();
    void print();
};

#endif