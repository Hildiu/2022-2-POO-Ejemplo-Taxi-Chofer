//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#ifndef CHOFER_TAXI_CCHOFER_H
#define CHOFER_TAXI_CCHOFER_H

#include "Tipos.h"

class CChofer{
private:
  TipoString m_NroLicencia;
  TipoString m_Nombres;
public:
  CChofer();
  virtual ~CChofer();
  void setNroLicencia(TipoString pNLicencia);
  void setNombres(TipoString pNombres);
  TipoString getNombres();
};


#endif //CHOFER_TAXI_CCHOFER_H
