#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    double y_ini, v_ini;
    double g, t_max;
    int Finura=101;
    y_ini=8.5; //m
    v_ini=20.0; //m/s
    t_max=10; //s
    g=9.8; //m/s²
    double Par[2]={g,v_ini};
    double y=y_ini;
    double v=v_ini;
    double t=0;
    double paso=t_max/Finura;
    double a;
    for (int i=0;i<Finura;i++)
    {
        if (y>0)
        {
            v=ecu_dif(t,y,Par);
            cout<<t<<","<<y<<","<<v<<endl;         
            y=hallarSiguienteRK4(t,y,Par,paso);
            t=t+paso;
        }
    }
    return 0;
}
