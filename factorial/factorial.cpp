#include <iostream>
using namespace std;

int elFactorial(int num){
    int i;
    int multi=1;
    for (i=1;i<=num;i++){
        multi=multi*i;
    }
    return multi;
}

int main(){
    int num, resp;
    
    cout<<"Ingrese el número al que le va a sacar el factorial (que sea entero)"<<endl;
    cin>>num;
    resp=elFactorial(num);
    cout<<""<<num<<" factorial es:   "<<resp<<" "<<endl;
    return 0;
}
