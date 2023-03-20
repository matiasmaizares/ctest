#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(0));
   int  nRandom=0+ (rand() % 100);
    bool acerto=true;
    int nroIntentos=0;
    int num;
    cout<<"Intenta a divinar el numero que he pensado entre o y 100 "<<endl;
    do {


        cout<<"Introduce numero: "<<endl;
        cin>>num;
        if(num==nRandom){
            nroIntentos++;
            cout<<"Acertaste! Lo adivinaste en "<<nroIntentos<<" intentos!"<<endl;

            acerto=false;
        }else if(num>nRandom){
            nroIntentos++;
            cout<<"menor"<<endl;

        }else{
            nroIntentos++;
            cout<<"mayor"<<endl;
        }
    }while(acerto);


    return 0;
}
