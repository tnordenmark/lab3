#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count = 0;

    cout << "Enter your phrase: \n";
    getline(cin, input);

    string crypto = input;

    for (count = 0; count < crypto.length(); count++)
    {
        if (isalpha(crypto[count]))
        {
            crypto[count] = tolower(crypto[count]);
            for (int i = 0; i < 13; i++)
            {
                if (crypto[count] == 'z')
                    crypto[count] = 'a';
                else
                    crypto[count]++;
            }
        }
    }

    cout << "Results: " << crypto << endl;




}

//    for(int i = 0; i < (int)crypto.length(); i++)
//    {
//        count ++;

//        //if it is a multiple of 5 not the first character change the key
//        if((multiple = ((i % 5) == 0)) && (count != 1)  && (key == rot13))
//        {
//            key = rot7;
//        }

//        //if it is a multiple of 5 not the first character change the key
//        else if((multiple = ((i % 5) == 0)) && (count != 1) && (key == rot7))
//        {
//            key = rot13;
//        }

////        if((crypto[i] >= 32) && (crypto[i] <= 255))
////        {
//            if (crypto[i] + key > 255)
//            {
//                crypto[i] = ((crypto[i] + key) % 255 ) + 32;
//            }
//            else
//            {
//                crypto[i] += key;
//            }
//        //}
//    }


//    cout << "Originaltext: " << text << endl;
//    cout << "Krypterad text: " << crypto << endl;


//    for(int i = 0; i < (int)crypto.length(); i++)
//    {

//        count ++;

//        //if it is a multiple of 5 not the first character change the key
//        if((multiple = ((i % 5) == 0)) && (count != 1)  && (key == rot13))
//        {
//            key = rot7;
//        }

//        //if it is a multiple of 5 not the first character change the key
//        else if((multiple = ((i % 5) == 0)) && (count != 1) && (key == rot7))
//        {
//            key = rot13;
//        }

//        if((crypto[i] >= 32) && (crypto[i] <= 255))
//        {
//            if (crypto[i] + key > 255)
//            {
//                crypto[i] = ((crypto[i] - key) % 255 ) + 32;
//            }
//            else
//            {
//                crypto[i] -= key;
//            }
//        }
//    }

//    cout << "Dekrypterad text: " << crypto << endl;
//    cout << (int)'z' << endl;

//    return 0;
//}
