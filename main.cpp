#include <iostream>
#include<math.h>
#define G 9.81
#define Pi 3.141617

using namespace std;

struct Do{//Estructura que representa el disparo ofensivo
    float d=800;
    float Ho = 100;
    float Xo = 0;
    float Yo = Ho;
    float d0 = 0.05*d;
};

struct Dd{ //Estructura que representa el disparo defensivo
    float d=800;
    float Hd = 20;
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025*d;
};
int main()
{
    Do disparoO;
    Dd disparoD;
    int  Vel_inicial ;
    cout<<"Ingrese Vel_inicial desde la cual quiere probar: "<<endl;
    cin>>Vel_inicial;
    return 0;
}
