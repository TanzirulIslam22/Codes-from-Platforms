#include<bits/stdc++.h>
using namespace std;
int main (){
    float A,B,C,ans1,ans2,ans3,ans4,ans5;
    cin>>A>>B>>C;
    ans1=0.5*A*C;
    ans2=3.14159*C*C;
    ans3=0.5*(A+B)*C;
    ans4=B*B;
    ans5=A*B;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<ans1<<endl;
    cout<<"CIRCULO: "<<ans2<<endl;
    cout<<"TRAPEZIO: "<<ans3<<endl;
    cout<<"QUADRADO: "<<ans4<<endl;
    cout<<"RETANGULO: "<<ans5<<endl;
    
}