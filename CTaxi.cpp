//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#include "CTaxi.h"
#include "CChofer.h"

CTaxi::CTaxi()
{}

CTaxi::~CTaxi()
{}

void CTaxi::setPlaca(TipoString pPlaca)
{
  m_Placa = pPlaca;
}

void CTaxi::setChofer(CChofer * pChofer)
{
  m_Chofer = pChofer;
}

void CTaxi::setMarca(TipoString pMarca)
{
  m_Marca = pMarca;
}

void CTaxi::imprimirDatos(ostream &os)
{
  os << "Informacion del Taxi\n";
  os << "--------------------\n";
  os << "Placa : " << m_Placa << "\n";
  os << "Chofer : " << m_Chofer->getNombres() << "\n";
}

TipoString  CTaxi::getPlaca()
{
  return m_Placa;
}