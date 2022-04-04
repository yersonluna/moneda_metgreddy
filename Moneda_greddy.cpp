#include <iostream>

using namespace std;

int main()
{
 int moneda[] = {1000,500,200,100,50};
 int veces[] = { 0, 0, 0, 0, 0};
 int n = 5;
 int monto,i,cuenta,cuentatotal;
 
 cout<<"Monto: ";
 cin>>monto;
 cout<<"valor a pagar: ";
 cin>>cuenta;
 cuentatotal=monto-cuenta;
 cout<<"su cambio es:"<<cuentatotal<<endl;
 for(i=0;i<n;i++)
 {
  veces[i] = cuentatotal/moneda[i];
  cuentatotal = cuentatotal%moneda[i];
 }
 for(i=0;i<n;i++)
 {
  cout<<"Monedas "<<moneda[i]<<" cantidad "<<veces[i]<<endl;
 }
 return 0;
}
