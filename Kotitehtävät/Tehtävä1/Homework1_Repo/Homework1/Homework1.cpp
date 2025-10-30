#include <iostream>
#include <string>

// K‰ytet‰‰n namespacea std niin ei tarvitse upottaa std:: viittausta jokaiseen lauseeseen
// T‰ss‰ teht‰v‰ss‰ koen helpommaksi omasta mielest‰.
using namespace std;

void calcSum(int a, int b) {
    cout << (a + b) << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe tapahtui. Ei voida jakaa nollalla\n";
        return;
    }
    cout << (static_cast<float>(a) / b) << endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main()
{
    bool errorThrown = false;
    int a, b;
    string div, sum, eDesc;

    cout << "Anna numero yksi\n";
    cin >> a;
    cout << "Anna numero kaksi\n";
    cin >> b;

    cout << "Tulostus k‰ytt‰en tulostusfunktiota:\n";
    cout << "calcsum funktio:\n";
    calcSum(a, b);
    cout << "calcdiv funktio:\n";
    calcDiv(a, b);

    sum = to_string(a) + " + " + to_string(b) + " = " + to_string(retSum(a, b));
    try {
        div = to_string(a) + " / " + to_string(b) + " = " + to_string(retDiv(a, b));
    }
    catch (runtime_error& e) {
        errorThrown = true;
        eDesc = e.what();
    }

    cout << "Arvoja palauttavat funktiot:\n";
    cout << "Summa: " + sum + "\n";
    cout << (errorThrown ? "Virhe tapahtui osam‰‰r‰n laskemisessa. Virhe: " + eDesc : "Osam‰‰r‰: " + div) << endl;
    return true;
}