//
// Created by josé djalma da cunha júnior on 2019-06-13.
//

#ifndef FATORIAL_MELHOR_FATORIAL_HPP
#define FATORIAL_MELHOR_FATORIAL_HPP
#include <iostream>
using namespace std;

class Fatorial {
public:
    void fat(int num){
        unsigned long long int coisa[num];
        coisa[0] = 1;
        unsigned long long int i;
        for (i = 1; i <= num; i++) {
            coisa[i] = coisa[i-1] * i;
            cout<< i <<"=======>"<<coisa[i]<<endl;
        }
    }

    unsigned long long int rec(int num){
        if(num == 0){
            return 1;
        }
        else{
            return num * rec(num-1);
        }
    }

    void dinamicoLeve(int num){
        unsigned long long int pa = 1;
        unsigned long long int fu = 1;
        unsigned long long int temp;
        unsigned long long int i;
        for (i = 1; i <= num; i++) {
            temp = fu;
            fu = pa * i;
            pa = temp;
            cout<< i <<"=======>"<<fu<<endl;
        }
    }

private:

};


#endif //FATORIAL_MELHOR_FATORIAL_HPP
