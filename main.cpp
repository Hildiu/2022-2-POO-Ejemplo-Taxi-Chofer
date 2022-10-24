#include "CChofer.h"
#include "CTaxi.h"

int main()
{
  CChofer *pJuan = new CChofer();
  CTaxi   *pToyota = new CTaxi();

  pJuan->setNombres("Juan Perez");
  pToyota->setPlaca("A1Z521");
  pToyota->setChofer(pJuan);
  pToyota->imprimirDatos(cout);

  delete pJuan;
  pJuan = nullptr;
  delete pToyota;
  pToyota= nullptr;
  return 0;
}
