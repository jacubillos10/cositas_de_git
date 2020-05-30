using namespace std;
double ecu_dif(double t, double y, double Par[])
{
    // EN esta función están colocadas las ecuaciones diferenciales 
    // LAS BOLAS!! tardé muchisimo haciendolos con array... C++ es un dolor de cabeza
    double g=Par[0];
    double vini=Par[1];
    double dy_dt=vini-(g*t);
    return dy_dt;
}
double hallarSiguienteRK4(double t, double y, double Par[], double h)
{
    double k1=ecu_dif(t,y,Par);
    double k2=ecu_dif((t+0.5*h),(y+0.5*k1*h),Par);
    double k3=ecu_dif((t+0.5*h),(y+0.5*k2*h),Par);
    double k4=ecu_dif((t+h),(y+k3*h),Par);
    double y_nuevo=(double) y+(1/6.0)*h*(k1+2*k2+2*k3+k4);
    return y_nuevo;
}
