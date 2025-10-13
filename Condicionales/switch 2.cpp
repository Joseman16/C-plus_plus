//Switch - 2

#include <iostream>
using namespace std;

int main() {
    // Por inicial, devolvemos el nombre de un animal
    // de la "a" hasta la "z"
    char inicial;

    cout << "Ingrese una inicial [a-z]: ";
    cin >> inicial;

    switch(inicial) {
        case 'a': cout << "Aguila"; break;
        case 'b': cout << "Ballena"; break;
        case 'c': cout << "Camello"; break;
        case 'd': cout << "Delfin"; break;
        case 'e': cout << "Elefante"; break;
        case 'f': cout << "Foca"; break;
        case 'g': cout << "Gato"; break;
        case 'h': cout << "Hipopotamo"; break;
        case 'j': cout << "Jirafa"; break;
        case 'k': cout << "Koala"; break;
        case 'l': cout << "Leon"; break;
        case 'm': cout << "Mono"; break;
        default: cout << "Animal no disponible";
    }

    return 0;
}

