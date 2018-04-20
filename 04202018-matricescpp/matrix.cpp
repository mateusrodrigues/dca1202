#include "matrix.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

Matrix::Matrix(int _nl, int _nc){
  if(_nl < 0 || _nc < 0){
    exit(0);
  }
  // marcar o ponteiro com
  // nullptr para marcar quer nada
  // foi alocado ate o momento
  x = nullptr;

  if(_nl == 0 || _nc == 0){
    nl = nc = 0;
    return;
  }

  nl = _nl;
  nc = _nc;

  // aloca array auxiliar
  x = new float*[nl];
  if(x == nullptr){
    exit(0);
  }

  x[0] = new float[nl*nc];
  if(x[0] == nullptr){
    exit(0);
  }
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
}

Matrix::~Matrix(){
  if(x != nullptr){
    delete [] x[0];
    delete [] x;
  }
}

Matrix::Matrix(Matrix &m){
  nl = m.nl; nc = m.nc;
  x = nullptr;
  if(nl == 0 || nc == 0){
    return;
  }
  // aloca array auxiliar
  x = new float*[nl];
  if(x == nullptr){ exit(0); }

  x[0] = new float[nl*nc];
  if(x[0] == nullptr){ exit(0); }
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  memcpy(x[0], m.x[0], nl*nc*sizeof(float));
}

Matrix Matrix::operator=(Matrix &m)
{
  // Matrix A(3,3), B(5,4), C;
  // Matrix D(3,3), E;
  //
  // 1: testa se o objeto que executa
  // o metodo eh o mesmo passado como
  // parametro
  // A = A
  if(this == &m){
    return *this;
  }
  // 2: Matrixes de mesmo tamanho mas
  // com possiveis valores diferentes
  // D = A;
  if(nl == m.nl && nc == m.nc){
    if(nl != 0 & nc != 0){
      memcpy(x[0], m.x[0], nl*nc*sizeof(float));
    }
    return *this;
  }
  // 3: Matrixes tem tamanhos diferentes
  // - liberar memoria antiga
  // - alocar nova memoria
  // - copiar valores
  if(nl != m.nl || nc != m.nc){
    // if(nl !=0 && nc != 0){
    if( x != nullptr){
      delete [] x[0];
      delete [] x;
    }
    // copia os tamanhos
    nl = m.nl; nc = m.nc;
    // 4: Matrix atribuida tem tamanho nulo
    // A = C;
    if(nl == 0 || nc == 0){
      // grava o endereco nulo para lembrar
      // que nao ha memoria associada com
      // o x
      x = nullptr;
      return *this;
    }
    // aloca a memoria
    // identico ao construtor
    x = new float*[nl];
    if(x == nullptr){ exit(0);}
    x[0] = new float[nl*nc];
    if(x[0] == nullptr){ exit(0);}
    for(int i=1; i<nl; i++){
      x[i] = x[i-1] + nc;
    }
    // copia a Matrix
    // 5: tambem contemplada (Matrix nao possui
    // valores alocados mas recebe Matrix com
    // tamanho diferente de zero
    // C = A;
    memcpy(x[0], m.x[0], nl*nc*sizeof(float));
  }
}

Matrix Matrix::operator+(Matrix &m)
{
  if(nl == m.nl && nc == m.nc){
    Matrix ret(nl, nc);

    for(int i=0; i<nl*nc; i++){
      ret.x[0][i] = x[0][i]+m.x[0][i];
    }
    return ret;
  }
  else{
    exit(0);
  }
}

float& Matrix::operator()(int i, int j){
  if(i >=0 && i < nl && j>=0 && j<nc){
    return x[i][j];
  }
  else{
    exit(0);
  }
}

void Matrix::random(){
  for(int i=0; i<nl*nc; i++){
    x[0][i] = rand()%10;
  }
}

void Matrix::print(){
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      cout << x[i][j] << " ";
    }
    cout << endl;
  }
}
