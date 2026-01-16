#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,area;
    const double pi =3.141592653;
    cin>>x;
    area = x*x*pi;
    cout<<fixed<<setprecision(9)<<area<<endl;
    return 0;
    

}