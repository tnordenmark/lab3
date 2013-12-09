// lab3_upg3.cpp
// Program för att kryptera och dekryptera en sträng
// Thomas Nordenmark 2013-12-02
// Ver 0.1
//------------------------------------------------------------------------------
#include <iostream> // cin, cout
#include <string> // string
using namespace std;

int main()
{
    string input; // Originalsträngen
    int i = 0; // Iterator för loopar
    int multiple = 0; // Multipel för att hålla ordning på var femte iteration
    int rot13 = 13; // Rot13-nyckeln
    int rot7 = 7; // Rot7-nyckeln
    int key = rot13; // Nyckel som byter till rot13 respektive rot7 var femte iteration

    cout << "Mata in en mening: " << flush; // Ledtext är skoj, flusha buffern
    getline(cin, input); // Be användaren mata in en text


    string crypto = input; // Ny temporär sträng att arbeta med

    for (i = 0; i < (int)crypto.length(); i++) // Loop för kryptering
    {
        // Om multiplen är ett tal delbart med fem utan rest och det inte är första tecknet, byt nyckel
        if((multiple = ((i % 5) == 0)) && (i != 0)  && (key == rot13))
            key = rot7;
        else if((multiple = ((i % 5) == 0)) && (i != 0)  && (key == rot7))
            key = rot13;

        crypto[i] += key; // Fyll på strängen med de krypterade värdena
    }

    // Skriv ut originalet samt den krypterade texten
    cout << endl << "Originaltext: " << input << endl;
    cout << "Krypterad: " << crypto << endl << endl;

    // Nollställ nyckeln till rot13, annars hamnar vi längre och längre från svaret
    key = rot13;

    for (i = 0; i < (int)crypto.length(); i++) // Loop för dekryptering, bak och fram!
    {
        // Om multiplen är ett tal delbart med fem utan rest och det inte är första tecknet, byt nyckel
        if((multiple = ((i % 5) == 0)) && (i != 0)  && (key == rot13))
            key = rot7;
        else if((multiple = ((i % 5) == 0)) && (i != 0)  && (key == rot7))
            key = rot13;

        crypto[i] -= key; // Fyll på strängen med de dekrypterade värdena
    }

    // Skriv ut den dekrypterade texten
    cout << "Dekrypterad: " << crypto << endl;


    return 0;
}
