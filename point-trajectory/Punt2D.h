#ifndef PUNT2D_H
#define PUNT2D_H
#include <iostream>
using namespace std;

class Punt2D { //guardat en en un fitxer Punt2D.h
// Descripci�: un punt en el pla

private:
  double x, y; // atributs (usem coordenades cartesianes)

public:
  // Constructors
  Punt2D(); 
  //Pre: cert 
  //Post: *this representa el punt (0,0)
  Punt2D(double x, double y); 
  //Pre: cert 
  //Post: *this representa el punt (x,y)

  // M�todes consultors
  double coordenada_x() const;
  //Pre: cert
  //Post: resultat = coordenada x del punt
  double coordenada_y() const;
  //Pre: cert 
  //Post: resultat = coordenada y del punt
  double distancia(const Punt2D& p) const;
  //Pre: cert 
  //Post: resultat = dist�ncia de *this a p
  double distancia_origen() const;
  //Pre: cert
  //Post: resultat = dist�ncia de *this a l'origen de coordenades
  void escriure() const;
  //Pre: cert
  //Post: escriu per pantalla el punt en forma (x,y)
  bool es_igual(const Punt2D& p) const;
  //Pre: cert
  //Post: resultat = cert si *this i p s�n iguals
  Punt2D punt_mig(const Punt2D& p) const;
  //Pre: cert 
  //Post: resultat = punt mig entre *this i p

  // M��todes modificadors
  void moure(double x, double y);
  //Pre: cert
  //Post: *this despla�at amb vector (x,y)
  void moure(const Punt2D& p);
  //Pre: cert 
  //Post: *this despla�at amb vector (0,0) -> p

};

#endif // PUNT2D_H
