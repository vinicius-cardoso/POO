// Parte 1: Manipulando Programas Simples em C++

// 1.1. Escreva um programa que abra um arquivo e conte o número de espaços em branco do arquivo.



// 1.2. Dado um vetor de números inteiros positivos aleatórios entrados via teclado (número negativo indica fim da entrada dos dados), faça um programa utilizando a classe template vector para comprimir o vetor suprimindo as repetições de números vizinhos através da contagem do número de repetições de cada um da seguinte forma:

// Vetor de entrada: 1 1 1 4 1 1 4 4 25 67 67 67 67 2 2
// Vetor de saída: 3 1 1 4 2 1 2 4 1 25 4 67 2 2



// Parte 2: Structs and Alocação Dinâmica de Memória

// O código a seguir tem como objetivo implementar um tipo abstrato de dados (TAD) Matriz referente a um array bidimensional de elementos do tipo double. Os principais atributos da Matriz são:

// número de linhas: nLinhas (int)
// número de colunas nColunas (int)
// array 2D que armazena os elementos: m (double pointer)

// Com base nesse código inicial fornecido, implemente as demais funções cuja definição encontram-se nas células a seguir:

#include <iostream>

typedef struct{
    double** m;
    int nLinhas;
    int nColunas;
}Matriz;

// 2.1. função para inicializar a matriz X com todos os elementos iguais a 0.0. A função deve fazer alocação dinâmica de memória com base nos argumentos ls e cs, que representam o número de linhas e o número de colunas, respectivamente.

void inicializaMatriz(Matriz &X, int ls, int cs){
//    ... entre o codigo aqui 

}

// 2.2. função para liberar a memória da Matrix X.

void apagaMatriz(Matriz &X){
   //    ... entre o codigo aqui 
}

// 2.3. função para tornar a matriz X transposta.

void transposta(Matriz &X){
    //    ... entre o codigo aqui 
}

// 2.4. função para multiplicar a matriz X por um valor constante k (tipo double). Retorna uma nova matriz.

Matriz multiplica_por_cte(Matriz &X, double k){   
//    ... entre o codigo aqui 
}

// 2.5. função para imprimir os elementos da matriz X.

void imprimeMatriz(Matriz &X){
    //    ... entre o codigo aqui 
}

// 2.6. Programa Teste:

// As funções implementadas devem ser testadas com o programa principal a seguir.

int main()
{
    Matriz A, B, R;

    std::cout<<"A:: "<<std::endl;
    inicializaMatriz(A,2,3);
    imprimeMatriz(A);
    
    std::cout<<"Transposta de A:: "<<std::endl;
    transposta(A);
    imprimeMatriz(A);
    apagaMatriz(A);

    std::cout<<std::endl<<"B:: "<<std::endl;
    inicializaMatriz(B,4,4);
    imprimeMatriz(B);
    
    std::cout<<std::endl<<"R = k*B "<<std::endl;
    R = multiplica_por_cte(B,5); 
    imprimeMatriz(R);
    
    apagaMatriz(B);
    apagaMatriz(R);

    return 0;
}