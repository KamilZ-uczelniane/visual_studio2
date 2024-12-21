#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    string imie, nazwisko, zainteresowania;
    int wiek;

    system("color 0B");

    cout << "\n\n\t\t\t*** Dane osobowe ***\n\n";
    cout << "\tPodaj imie: ";
    getline(cin, imie);
    cout << "\tPodaj nazwisko: ";
    getline(cin, nazwisko);
    cout << "\tPodaj wiek: ";
    cin >> wiek;
    cin.ignore(); 
    cout << "\tPodaj zainteresowania: ";
    getline(cin, zainteresowania);

 
    cout << "\n\n\t\t\t\t\t\t*** Podsumowanie ***\n\n";
    cout << "\t+------------------------------------------+" << endl;
    cout << "\t| Imie: " << left << imie << endl;
    cout << "\t| Nazwisko: " << left << nazwisko << endl;
    cout << "\t| Wiek: " << left << wiek << endl;
    cout << "\t| Zainteresowania: " << left << zainteresowania << endl;
    cout << "\t+------------------------------------------+" << endl;


    cout << "\n\n\t\t\t****** Podpis ******\n\n";
    cout << "\t\t\tKamil Zatorski 167876\n\n";

    system("pause"); 

    return 0;
}
