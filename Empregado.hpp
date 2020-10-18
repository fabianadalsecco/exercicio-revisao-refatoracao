#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  private:
    std::string nome;
    double salarioHora = 0;
    double quotaMensalVendas = 0;
    double horasTrabalhadas = 0;

  public:
    std::string setNome(std::string _nome);
    std::string getNome();
    double setHoras(double _horasTrabalhadas);
    double getHoras();
    double pagamentoMes();
    double setSalario(double _valor);
    double getSalario();
    double setVendas(double _vendas);
    double getVendas();
};

#endif
