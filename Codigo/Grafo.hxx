#include "Grafo.h"

#include <iostream>
#include <queue>
#include <stack>
#include <limits>
#include <algorithm>

// cosas que se necesitan para cambiar el color del texto
#define resetG "\033[0m"
#define blue "\033[34m" 
#define red "\033[31m" 
#define green "\033[32m" 
#define yellow "\033[33m" 
#define magenta "\033[35m"
#define cyan "\033[36m"

template<class T, class U>
bool Grafo<T, U>::buscarVertice(T vertice) {
    if (vertices.size() == 0) {
        return false;
    }
    for (int i = 0; i < this->vertices.size(); i++) {
        if (this->vertices[i] == vertice) {
            return true;
        }
    }
    return false;
}

template<class T, class U>
int Grafo<T, U>::indiceVertice(T vertice) {
    int indice = -1;
    for (int i = 0; i < this->vertices.size(); i++) {
        if (this->vertices[i] == vertice) {
            indice = i;
        }
    }
    return indice;
}

template<class T, class U>
bool Grafo<T, U>::insertarVertice(T vertice) {

    //Se verifica que el dato no sea repetido
    if (buscarVertice(vertice)) {
        return false;
    }
    //Se agrega el nuevo elemento al arreglo
    this->vertices.push_back(vertice);

    //Se agranda la matriz
    int n = this->vertices.size();
    this->matriz_adyacencia.resize(n);
    for (int i = 0; i < this->matriz_adyacencia.size(); i++)
        this->matriz_adyacencia[i].resize(n);
    return true;
}

template<class T, class U>
bool Grafo<T, U>::conectarVertices(T vertice1, T vertice2, U peso) {

    //Se verifica que los this->vertices existan
    if (!buscarVertice(vertice1)) {
        return false;
    }
    if (!buscarVertice(vertice2)) {
        return false;
    }

    //Se consiguen los indices de los vertices
    int n1 = indiceVertice(vertice1);
    int n2 = indiceVertice(vertice2);

    this->matriz_adyacencia[n1][n2] = peso;
    return true;
}

template<class T, class U>
bool Grafo<T, U>::buscarArista(T vertice1, T vertice2) {
    //Se verifica que los this->vertices existan
    if (!buscarVertice(vertice1)) {
        return false;
    }
    if (!buscarVertice(vertice2)) {
        return false;
    }

    //Se consiguen los indices de los vertices
    int n1 = indiceVertice(vertice1);
    int n2 = indiceVertice(vertice2);
    //Retorna verdadero si diferente de 0
    return this->matriz_adyacencia[n1][n2] != 0;
}

template<class T, class U>
U Grafo<T, U>::valorConexion(T vertice1, T vertice2) {
    //Se verifica que los this->vertices existan
    if (!buscarVertice(vertice1)) {
        return 0;
    }
    if (!buscarVertice(vertice2)) {
        return 0;
    }

    //Se consiguen los indices de los vertices
    int n1 = indiceVertice(vertice1);
    int n2 = indiceVertice(vertice2);

    //Retorna el valor
    return this->matriz_adyacencia[n1][n2];
}

template<class T, class U>
void Grafo<T, U>::imprimirMatriz() 
{
    std::cout << "\nMatriz de adyacencia:\n\n";

    for(int i=0; i<this->vertices.size()+ 1; i++)
    {            
        if(i==0)
            std::cout << "X:  ";

        else if(i<10)
            std::cout << "   " << i;

        else
            std::cout << "  " << i;
    }

    std::cout<<std::endl<<std::endl;

    for (int i = 0; i < this->matriz_adyacencia.size(); i++) 
    {
        if (i<9)
            std::cout << i+1 << ":     ";

        else
            std::cout << i+1 << ":    ";

        for (int j = 0; j < this->matriz_adyacencia[i].size(); j++) 
        {
           int aux = this->matriz_adyacencia[i][j];
           
            if(i==j)
                std::cout<<red;
           

            if(aux != 0)
                std::cout<<green;

            if(aux < 10)
                std::cout << this->matriz_adyacencia[i][j] << "   "<<resetG;

            else
                std::cout << this->matriz_adyacencia[i][j] << "  "<<resetG;
        }
        std::cout << "\n\n";
    }
}

template<class T, class U>
vector<T> Grafo<T, U>::componenteVertice(T vertice) {
    stack<T> pila;
    vector<T> visitados;
    pila.push(vertice);
    //Se recorre la pila
    while (!pila.empty()) {
        T verticeActual = pila.top();
        pila.pop();
        bool visitado = false;
        //Se revisa que el vertice no haya sido visitado
        for (int i = 0; i < visitados.size(); i++) {
            if (verticeActual == visitados[i]) {
                visitado = true;
                break;
            }
        }
        if (!visitado) {
            //Se visita el vertice
            visitados.push_back(verticeActual);
            //Se agregan los vertices adyacentes a la pila
            for (int i = this->vertices.size() - 1; i >= 0; i--) {
                if (buscarArista(verticeActual, this->vertices[i])) {
                    pila.push(this->vertices[i]);
                }
            }
        }
    }
    return visitados;
}

template<class T, class U>
void Grafo<T, U>::prim(T vertice) {
    vector<T> visitados;
    vector<T> componente = componenteVertice(vertice);
    vector<T> noVisitados = componente;
    vector<pair<T, T> > aristas;
    //Se agrega el nodo inicial a visitados
    visitados.push_back(vertice);
    //Se elimina el nodo inicial de noVisitados
    noVisitados.erase(noVisitados.begin() + indiceVertice(vertice));
    T nuevo;
    T actual;
    //Mientras no se hayan visitado todos los nodos
    while (visitados.size() != componente.size()) {
        //Se inicializa el menor valor de conexion con el maximo valor de U
        U menor = numeric_limits<U>::max();
        //Se recorren los nodos visitados
        for (int i = 0; i < visitados.size(); i++) {
            //Se recorren los nodos no visitados
            for (int j = 0; j < noVisitados.size(); j++) {
                //Si existe una conexion entre los nodos
                if (buscarArista(visitados[i], noVisitados[j])) {
                    //Si el valor de la conexion es menor al menor valor de conexion
                    if (valorConexion(visitados[i], noVisitados[j]) < menor) {
                        //Se actualiza el menor valor de conexion
                        menor = valorConexion(visitados[i], noVisitados[j]);
                        //Se actualizan los nodos visitado y no visitado
                        actual = visitados[i];
                        nuevo = noVisitados[j];
                    }
                }
            }
        }
        //Se agrega el nodo no visitado a visitados
        visitados.push_back(nuevo);
        //Se elimina el nodo no visitado de noVisitados
        auto it = find(noVisitados.begin(), noVisitados.end(), nuevo);
        noVisitados.erase(it);
        aristas.push_back(make_pair(actual, nuevo));
    }
    //Se imprime la ruta del arbol de expansion minima
    cout << "\n\nRuta del árbol de expansión mínima generada por Prim:\n\n";
    for (int i = 0; i < aristas.size(); i++) {
        cout << "(" << aristas[i].first << ", " << aristas[i].second << ") ";
    }
}

template<class T, class U>
void Grafo<T, U>::dijkstra(T vertice) {
    T verticeActual = vertice;
    vector<T> distancias;
    vector<T> visitados;
    vector<T> componente = componenteVertice(vertice);
    vector<T> noVisitados = componenteVertice(vertice);
    vector<T> prev(componente.size());

    //Se inicializan las distancias en infinito
    for (int i = 0; i < componente.size(); i++) {
        distancias.push_back(numeric_limits<U>::max());
    }
    //Se inicializa la distancia del vertice inicial en 0
    distancias[indiceVertice(verticeActual)] = 0;

    //Mientras no se hayan visitado todos los nodos
    while (!noVisitados.empty()) {

        //Se inicializa la menor distancia con el maximo valor de U
        U menor = numeric_limits<U>::max();
        //Se recorren los nodos no visitados
        for (int i = 0; i < noVisitados.size(); i++) {
            //Si la distancia del nodo no visitado es menor a la menor distancia
            if (distancias[indiceVertice(noVisitados[i])] < menor) {
                //Se actualiza la menor distancia
                menor = distancias[indiceVertice(noVisitados[i])];
                //Se actualiza el nodo visitado
                verticeActual = noVisitados[i];
            }
        }

        //Se agrega el nodo visitado a visitados
        visitados.push_back(verticeActual);
        //Se elimina el nodo visitado de noVisitados
        //noVisitados.erase(remove(noVisitados.begin(), noVisitados.end(), verticeActual), noVisitados.end());
        auto it = find(noVisitados.begin(), noVisitados.end(), verticeActual);
        noVisitados.erase(it);

        //Se recorren los vecinos del nodo visitado
        for (int i = 0; i < componente.size(); i++) {

            //Si existe una conexion entre el nodo visitado y el vecino
            if (buscarArista(verticeActual, componente[i])) {

                //Si la distancia del nodo visitado es mayor
                // a la del vecino mas la distancia entre el nodo visitado y el vecino
                U distanciaVertice = distancias[indiceVertice(verticeActual)];
                U distanciaVecino = distancias[indiceVertice(componente[i])];
                U nuevaDistancia = distanciaVertice + valorConexion(verticeActual, componente[i]);

                if (distanciaVecino > nuevaDistancia) {
                    //Se actualiza la distancia del nodo visitado
                    distancias[indiceVertice(componente[i])] = nuevaDistancia;
                    prev[indiceVertice(componente[i])] = verticeActual;
                }
            }
        }
    }
    cout << "\n\nRutas generadas con Dijkstra:\n";
    for (int i = 0; i < visitados.size(); i++) {
        if (visitados[i] != vertice) {
            cout << "\n" << vertice << " -> " << visitados[i] << ": ";
            stack<T> ruta;
            verticeActual = visitados[i];

            while (verticeActual != vertice) {
                ruta.push(verticeActual);
                verticeActual = prev[indiceVertice(verticeActual)];
            }

            cout << "(" << vertice << ") ";
            while (!ruta.empty()){
                cout << "(" << ruta.top() << ") ";
                ruta.pop();
            }
        }
    }
}