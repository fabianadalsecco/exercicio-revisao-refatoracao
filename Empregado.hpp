#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  protected:
    std::string nome;
    double salarioHora = 0;
    double quotaMensalVendas = 0;

  public:
    std::string setNome(std::string _nome);
    std::string getNome();
    double pagamentoMes(double horasTrabalhadas);
    double setSalario(double valor);
    double getSalario();
    double setVendas(double vendas);
    double getVendas();
};

#endif
