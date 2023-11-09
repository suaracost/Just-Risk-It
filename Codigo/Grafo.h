#ifndef __GRAFO__H__
#define __GRAFO__H__

#include <vector>
using namespace std;

template <class T, class U>
class Grafo 
{
  public:
    vector<T> vertices;
    vector< vector < U > > matriz_adyacencia;

  public:
    bool buscarVertice (T vertice);
    int indiceVertice(T vertice);
    bool insertarVertice(T vertice);
    bool conectarVertices(T vertice1, T vertice2, U peso);
    bool buscarArista(T vertice1, T vertice2);
    U valorConexion(T vertice1, T vertice2);
    void imprimirMatriz();
    vector<T> componenteVertice(T vertice);
    void prim(T vertice);
    void dijkstra(T vertice);
};

#include "Grafo.hxx"

#endif