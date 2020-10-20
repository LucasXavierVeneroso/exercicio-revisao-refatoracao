#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double pagamentoMes(double horasTrabalhadas) {
      double t = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
      return t * salarioHora;
    }

    double get_salarioHora(){
      return this->salarioHora;
    }
    double get_quotaMensalVendas(){
      return this->quotaMensalVendas;
    }
    std::string get_nome(){
      return this->nome;
    }
    void set_salarioHora(double salario){
      this->salarioHora = salario;
    }
    void set_quotaMensalVendas(double quota){
      this->quotaMensalVendas = quota;
    }
    void set_nome(std::string nome_do_empregado){
      this->nome = nome_do_empregado;
    }

  protected:
    double salarioHora;  
    double quotaMensalVendas;  
    std::string nome;
	
};

#endif