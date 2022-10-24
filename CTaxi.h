//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#ifndef CHOFER_TAXI_CTAXI_H
#define CHOFER_TAXI_CTAXI_H

#include "Tipos.h"
#include "CChofer.h"

class CTaxi {
private:
    TipoString m_Placa;
    TipoString m_Marca;
    CChofer * m_Chofer=nullptr;
public:
    CTaxi();
    virtual ~CTaxi();
    void setPlaca(TipoString pPlaca);
    void setChofer(CChofer * pChofer);
    void setMarca(TipoString pMarca);
    void imprimirDatos(ostream &os);
    TipoString  getPlaca();
};


#endif //CHOFER_TAXI_CTAXI_H
