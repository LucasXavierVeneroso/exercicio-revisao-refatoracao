#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    int get_projetos(){
      return this->projetos;
    }
    void set_projetos(int numero_de_projetos){
      this->projetos = numero_de_projetos;
    }
  private:
    int projetos;
	
};

