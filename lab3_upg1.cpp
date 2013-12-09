// lab2_upg1.cpp
// Program för att ersätta fot och Fot i ursprungssträngarna samt slå ihop dem
// till en sträng
// Thomas Nordenmark 2013-11-24
// Ver 0.1
//------------------------------------------------------------------------------
#include <iostream> // cin, cout
#include <string> // string
using namespace std;

int main()
{
    // Originalsträngar
    string const inText1 = "Foten är en kroppsdel som förekommer mycket i våra uttryck.";
    string const inText2 = "På stående fot betyder omedelbart, utan förberedelse.";
    string const inText3 = "Försätta på fri fot betyder att ge någon friheten.";
    string const inText4 = "Sätta foten i munnen betyder att göra bort sig.";
    string const inText5 = "Få om bakfoten betyder att missuppfatta något.";
    string const inText6 = "Skrapa med foten betyder att visa sig underdånig eller ödmjuk.";
    string const inText7 = "Stryka på foten betyder att tvingas ge upp.";
    string const inText8 = "Leva på stor fot betyder att föra ett dyrbart eller slösaktigt leverne.";
    string const inText9 = "Varför fick du foten???";

    // Slå ihop strängarna till en ny sträng
    string utText = inText1 + "\n" + inText2 + "\n" + inText3 + "\n" + inText4 + "\n" + inText5 + "\n" + inText6 + "\n" + inText7
                    + "\n" + inText8 + "\n" + inText9;

    // Sök efter och ersätt fot med hand
    while (utText.find("fot") != string::npos)
        utText.replace(utText.find("fot"), 3, "hand");

    // Sök efter och ersätt Fot med Hand
    while (utText.find("Fot") != string::npos)
        utText.replace(utText.find("Fot"), 3, "Hand");

    // Skriv ut den modifierade texten
    cout << utText << endl;

    return 0;
}
