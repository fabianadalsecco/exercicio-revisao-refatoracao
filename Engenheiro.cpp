#include "Engenheiro.hpp"
  
Engenheiro::Engenheiro(){
    setNome("A");
}

Engenheiro::Engenheiro(std::string _nome, double _salario, int _projetos, double _horas){
    setNome(_nome);
    setSalario(_salario);
    setProjetos(_projetos);
    setHoras(_horas);
}

int Engenheiro::setProjetos(int _projetos){
    this->projetos = _projetos;
}

int Engenheiro::getProjetos(){
    return this->projetos;
}

void Engenheiro::print(){
	  std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
    std::cout << "Projetos: " << this->getProjetos() << std::endl; 
    std::cout << std::endl;
}

