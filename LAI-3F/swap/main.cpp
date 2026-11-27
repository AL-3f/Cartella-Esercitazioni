#include <iostream>
using namespace std;

int main(){
    int x,y,appoggio;
    cout<<"Ciao! dammi il valore della x ?"<<endl;
    cin>>x;
    cout<<"ora dammi il valore della y ?"<<endl;
    cin>>y;
    cout<<"x=" << x << " y=" << y <<endl;
    cout<<"DOPO LO SCAMBBIO:" << endl;
    appoggio=x;
    x=y;
    y=appoggio;
    cout<<"x=" << x << " y=" << y << endl ;
    
    return 0;
}
