#include "Empregado.hpp"

std::string Empregado::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Empregado::getNome(){
    return this->nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas){
    double bonus = 0;
    if (horasTrabalhadas > 8){
        double extra = horasTrabalhadas - 8;
        bonus += extra/2;
    }
    return getSalario() * horasTrabalhadas + bonus;
}

double Empregado::setSalario(double valor){
    this->salarioHora = valor;
}

double Empregado::getSalario(){
    return this->salarioHora;
}

double Empregado::setVendas(double vendas){
    this->quotaMensalVendas = vendas;
}

double Empregado::getVendas(){
    return this->quotaMensalVendas;
}
