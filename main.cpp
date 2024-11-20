#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i, imin;

    cout << "Quanti atleti partecipano alla competizione?" << endl;
    cin >> n;
    string nomi[n], nazionali[n];
    int tempi[n];

    i = 0;
    while (i < n) {
        cout << "Inserisci il nome dell'atleta " << i + 1 << endl;
        cin >> nomi[i];
        cout << "Inserisci la nazionale dell'atleta " << i + 1 << endl;
        cin >> nazionali[i];
        cout << "Inserisci il tempo dell'atleta " << i + 1 << endl;
        cin >> tempi[i];
        i = i + 1;
    }
    cout << "Informazioni sugli atleti:" << endl;
    i = 0;
    while (i < n) {
        cout << "ATLETA " << i + 1 << ":" << endl;
        cout << nomi[i] << endl;
        cout << nazionali[i] << endl;
        cout << tempi[i] << endl;
        i = i + 1;
    }
    i = 0;
    imin = 0;
    while (i < n) {
        if (tempi[i] < tempi[imin]) {
            imin = i;
        }
        i = i + 1;
    }
    cout << "L'atleta vincitore è " << nomi[imin] << ", la sua nazione è " << nazionali[imin] << " e il suo tempo di gara è " << tempi[imin] << endl;
}