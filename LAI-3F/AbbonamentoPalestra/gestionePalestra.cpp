#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
    // Dichiarazione variabili
    char scelta;
    string nomeCognome;
    int eta;
    bool certificatoMedico;
    float quotaMensile = 0.0;

    // Gestione video menù
    do {
        cout << "************* MENU ABBONAMENTI *************" << endl;
        cout << "[B] Base Sala Pesi: 35.00 euro/mese" << endl;
        cout << "[C] Corsi Fitness: 50.00 euro/mese" << endl;
        cout << "[T] Total Wellness (con Spa): 67.00 euro/mese" << endl;
        cout << "********************************************" << endl;
        cout << "Scegli abbonamento: ";
        cin >> scelta;
        scelta = toupper(scelta);
        
        if (scelta != 'B' && scelta != 'C' && scelta != 'T') {
            cout << "Scelta non valida, riprova!\n" << endl;
        }
    } while (scelta != 'B' && scelta != 'C' && scelta != 'T');

    cin.ignore(); // Pulisce il buffer prima di getline

    // Inserimento dati
    cout << "\nInserisci i dati del cliente" << endl;
    cout << "Inserisci il nome e il cognome -> ";
    getline(cin, nomeCognome);
    cout << "Inserisci eta -> ";
    cin >> eta;
    cout << "Hai il certificato medico? (1=True, 0=False) -> ";
    cin >> certificatoMedico;

    // Gestione tariffa base
    if (scelta == 'B') {
        quotaMensile = 35.0;
    } else if (scelta == 'C') {
        quotaMensile = 50.0;
    } else if (scelta == 'T') {
        quotaMensile = 67.0;
    }

    // Applicazione sconti e maggiorazioni
    if (eta < 26) {
        quotaMensile = quotaMensile * 0.80; // CORRETTO: punto invece della virgola
        if (certificatoMedico) {
            quotaMensile -= 5.0;
        }
    } else {
        if (!certificatoMedico) {
            quotaMensile += 25.0;
        }
    }

    // Calcoli promozioni e arrotondamento
    cout << "\nVerifica promozione..." << endl;
    if (quotaMensile > 70.0) {
        cout << "Hai diritto al borsone sportivo della palestra!" << endl;
    }
    if (scelta == 'T') {
        quotaMensile -= 3.50;
    }
    
    quotaMensile = round(quotaMensile);

    // Stato tessera
    string statoTessera;
    if (certificatoMedico && scelta == 'T') {
        statoTessera = "ACCESSO VIP IMMEDIATO";
    } else {
        statoTessera = "ACCESSO STANDARD";
    }

    // Output riepilogativo
    cout << "\n=========================================" << endl;
    cout << "      SCHEDA RIEPILOGATIVA ISCRIZIONE    " << endl;
    cout << "=========================================" << endl;
    cout << "Nome Iscritto:      " << nomeCognome << endl;
    cout << "Piano Assegnato:    " << scelta << endl;
    cout << "Stato Tessera:      " << statoTessera << endl;
    cout << "Quota da Pagare:    " << quotaMensile << " euro" << endl;
    cout << "Certificato Medico: " << boolalpha << certificatoMedico << endl;
    cout << "=========================================" << endl;

    return 0;
}

