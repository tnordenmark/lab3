// lab2_upg1.cpp
// Program för att sortera namn i bokstavsordning
// Thomas Nordenmark 2013-11-24
// Ver 0.1
//------------------------------------------------------------------------------
#include <iostream> // cin, cout
#include <string> // string
#include <sstream> // istringstream
using namespace std;

int main()
{
    // Strängar lagra de splittade namnen i
    string fnamn1, fnamn2, fnamn3, enamn1, enamn2, enamn3;
    // Originalnamnen
    string namn1, namn2, namn3;
    // Temporära strängar att lagra namnen med gemener i
    string namnlc1, namnlc2, namnlc3;
    // Temporära strängar att lagra namnen baklänges för sortering
    string revnamn1, revnamn2, revnamn3;

    cout << "Mata in tre namn i formatet Förnamn <mellanslag> Efternamn, ett på varje rad:" << endl;

    //========
    // Namn 1
    //========
    // Läs in en rad
    getline(cin, namn1);
    // Kopiera namn1 till en temporär sträng att arbeta med
    namnlc1 = namn1;
    // Konvertera den temporära strängen till gemener
    for(int i = 0; i < (int)namnlc1.length(); i++)
    {
        namnlc1[i] = tolower(namnlc1[i]);
    }
    // Skapa ett istringstreamobjekt med strängen som innehåll
    istringstream iss1(namnlc1);
    // Tilldela förnamn och efternamn till egna variabler
    iss1 >> fnamn1 >> enamn1;
    // Slå ihop namnen i omvänd ordning till en ny sträng
    revnamn1 = enamn1 + " " + fnamn1;

    //========
    // Namn 2
    //========
    // Läs in en rad
    getline(cin, namn2);
    // Kopiera namn1 till en temporär sträng att arbeta med
    namnlc2 = namn2;
    // Konvertera den temporära strängen till gemener
    for(int i = 0; i < (int)namnlc2.length(); i++)
    {
        namnlc2[i] = tolower(namnlc2[i]);
    }
    // Skapa ett istringstreamobjekt med strängen som innehåll
    istringstream iss2(namnlc2);
    // Tilldela förnamn och efternamn till egna variabler
    iss2 >> fnamn2 >> enamn2;
    // Slå ihop namnen i omvänd ordning till en ny sträng
    revnamn2 = enamn2 + " " + fnamn2;

    //========
    // Namn 3
    //========
    // Läs in en rad
    getline(cin, namn3);
    // Kopiera namn1 till en temporär sträng att arbeta med
    namnlc3 = namn3;
    // Konvertera den temporära strängen till gemener
    for(int i = 0; i < (int)namnlc3.length(); i++)
    {
        namnlc3[i] = tolower(namnlc3[i]);
    }
    // Skapa ett istringstreamobjekt med strängen som innehåll
    istringstream iss3(namnlc3);
    // Tilldela förnamn och efternamn till egna variabler
    iss3 >> fnamn3 >> enamn3;
    // Slå ihop namnen i omvänd ordning till en ny sträng
    revnamn3 = enamn3 + " " + fnamn3;

    // Ledtext är kul
    cout << endl << "========================" << endl;
    cout << "Namnen i bokstavsordning" << endl;
    cout << "========================" << endl;

    // Jämför först efternamn och sen förnamn, skriv ut i alfabetisk ordning
    // och i ursprunglig form
    if(revnamn1 > revnamn2 && revnamn2 > revnamn3)
        cout << namn3 << endl << namn2 << endl << namn1 << endl;
    else if(namn1 > namn3 && namn3 > namn2)
        cout << namn2 << endl << namn3 << endl << namn1 << endl;
    else if(revnamn2 > revnamn1 && revnamn1 > revnamn3)
        cout << namn3 <<endl << namn1 << endl << namn2 << endl;
    else if(revnamn2 > revnamn3 && revnamn3 > revnamn1)
        cout << namn1 << endl << namn3 << endl << namn2 << endl;
    else if(revnamn3 > revnamn1 && revnamn1 > revnamn2)
        cout << namn2 << endl << namn1 << endl << namn3 << endl;
    else
        cout << namn1 << endl << namn2 << endl << namn3 << endl;


    return 0;
}
