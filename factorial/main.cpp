#include <iostream>
using namespace std;

int laSuma(int i, int j){
    return i+j;
}
int main(){
    int n=0, a=5;
    int b;
    //cout<< n << endl;
    //cout<< n++ << endl;
    //cout<< n <<endl;
    //for (n=3;n<10;n=n+2,a--){
    //    cout << n << " , "<< a <<endl;
    //    if (a==3){
    //        cout<<"a=3, huyan!!! "<<endl;
    //        break;
    //    }
    //}
    //while(n<100){
    //    cout<<n<<" "<<endl;
    //    n++;
    //}
    b=laSuma(n,a);
    cout<<b<<endl;
    return 0;
    
}