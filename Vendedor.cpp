#include "Vendedor.hpp"

Vendedor::Vendedor(){
  	setNome("A");
}

Vendedor::Vendedor(std::string _nome, double _salario, int _vendas, double _horas){
  	setNome(_nome);
  	setSalario(_salario);
  	setVendas(_vendas);
	setHoras(_horas);
}

double Empregado::setVendas(double _vendas){
    this->quotaMensalVendas = _vendas;
}

double Empregado::getVendas(){
    return this->quotaMensalVendas;
}

double Vendedor::quotaVendasAnual(){
	return getVendas() * 12;
}

void Vendedor::print(){
	std::cout << "Nome: " << this->getNome() << std::endl;
  	std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;  
  	std::cout << "Quota vendas: " << this->quotaVendasAnual() << std::endl;  
	std::cout << std::endl;
}