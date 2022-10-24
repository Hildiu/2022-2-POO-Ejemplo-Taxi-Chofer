//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#include "CChofer.h"

CChofer::CChofer()
{}

CChofer::~CChofer()
{}

void CChofer::setNroLicencia(TipoString pNLicencia)
{
  m_NroLicencia = pNLicencia;
}

void CChofer::setNombres(TipoString pNombres)
{
  m_Nombres = pNombres;
}

TipoString CChofer::getNombres()
{
  return m_Nombres;
}