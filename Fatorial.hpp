//
// Created by josé djalma da cunha júnior on 2019-06-13.
//

#ifndef FATORIAL_MELHOR_FATORIAL_HPP
#define FATORIAL_MELHOR_FATORIAL_HPP
#include <iostream>
using namespace std;

class Fatorial {
public:
    //aqui faz um fatorial dinamico, porem acaba pegando um bom tamanho para fazer um vetor
    unsigned long long int fat(int num){
        unsigned long long int coisa[num];
        coisa[0] = 1;
        unsigned long long int i;
        for (i = 1; i <= num; i++) {
            coisa[i] = coisa[i-1] * i;
        }
        return coisa[i];
    }

    //aqui faz um vetorial da form classica, por recursao
    unsigned long long int rec(int num){
        if(num == 0){
            return 1;
        }
        else{
            return num * rec(num-1);
        }
    }

    //aqui juntamos o melhor dos dois, é rapido e leve para a memoria
    unsigned long long int dinamicoLeve(int num){
        unsigned long long int atual = 1;
        unsigned long long int fu = 1;
        unsigned long long int i;
        for (i = 1; i <= num; i++) {
            fu = atual * i;
            atual = fu;
        }
        return atual;
    }

private:

};


#endif //FATORIAL_MELHOR_FATORIAL_HPP
