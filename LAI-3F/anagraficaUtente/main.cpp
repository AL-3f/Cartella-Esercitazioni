#include <iostream>
using namespace std;
string nome_utente,civico,via,citta;
int anni_utente;

int main()
{
    cout<<"Ciao,come ti chiami?";
    cin>>nome_utente;
    cout<<"\npiacere "<< nome_utente;
    cout<<"Quanti anni hai?";
    cin>>anni_utente;
    cout<<"quale e' il tuo indirizzo?";
    cin>>via;
    cin>>civico;
    cin>>citta;
    cout<<"Sono " << nome_utente << ", ho " << anni_utente << " anni e vivo in via " << via << ", " << civico << ", "<< citta <<".";
    return 0;
}
