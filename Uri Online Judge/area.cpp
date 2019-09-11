#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float A, B, C;
    cin>>A>>B>>C;

    double v=0, w=0, x=0, y=0, z=0;

    v = (1/2.0)*A*C;
    w = 3.14159* C*C;
    x = (1/2.0) * (A+B) * C;
    y = B * B;
    z =  A * B;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<v<<endl;

        cout<<"CIRCULO: "<<fixed<<setprecision(3)<<w<<endl;

            cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<x<<endl;

                cout<<"QUADRADO: "<<fixed<<setprecision(3)<<y<<endl;

                    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<z<<endl;




}
