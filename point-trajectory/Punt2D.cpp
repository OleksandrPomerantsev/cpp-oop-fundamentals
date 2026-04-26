#include <iostream>
#include <cmath>
#include "Punt2D.h"
using namespace std;

// Constructors

Punt2D::Punt2D() {
    this->x=0;
    this->y=0;
}

Punt2D::Punt2D(double x, double y) {
    this->x=x;
    this->y=y;
}

// Consultors

double Punt2D::coordenada_x() const {
    return this->x;
}

double Punt2D::coordenada_y() const {
    return this->y;
}

double Punt2D::distancia(const Punt2D& p) const {
    double difX = this->x-p.x;
    double difY = this->y-p.y;
    return sqrt(difX*difX+difY*difY);
}

double Punt2D::distancia_origen() const {
    double dx = coordenada_x();
    double dy = coordenada_y();
    return sqrt(dx * dx + dy * dy);
}

void Punt2D::escriure() const {
    cout << "(" << this->x << "," << this->y << ")";
}

bool Punt2D::es_igual(const Punt2D& p) const {
    return this->x == p.x and this->y == p.y;
}

Punt2D Punt2D::punt_mig(const Punt2D& p) const {
    return Punt2D((this->x+p.x)/2, (this->y+p.y)/2);
}

// Modificadors

void Punt2D::moure(double x, double y) {
    this->x += x;
    this->y += y;
}

void Punt2D::moure(const Punt2D& p) {
    this->x += p.x;
    this->y += p.y;
}
