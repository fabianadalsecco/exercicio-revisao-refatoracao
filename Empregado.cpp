#include "Empregado.hpp"

std::string Empregado::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Empregado::getNome(){
    return this->nome;
}

double Empregado::setHoras(double _horasTrabalhadas){
    this->horasTrabalhadas = _horasTrabalhadas;
}

double Empregado::getHoras(){
    return this->horasTrabalhadas;
}

double Empregado::pagamentoMes(){
    double bonus = 0;
    double horas = getHoras();
    if (horas > 8){
        double extra = horas - 8;
        bonus += extra/2;
    }
    return getSalario() * getHoras() + bonus;
}

double Empregado::setSalario(double _valor){
    this->salarioHora = _valor;
}

double Empregado::getSalario(){
    return this->salarioHora;
}

double Empregado::setVendas(double _vendas){
    this->quotaMensalVendas = _vendas;
}

double Empregado::getVendas(){
    return this->quotaMensalVendas;
}
