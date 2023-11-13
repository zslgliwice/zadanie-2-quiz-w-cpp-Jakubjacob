#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    int pkt = 0;
    string odpowiedz;

    Sleep(3000);
    system("cls");

    cout << "witaj w Tescie piłkarskim" << endl;
    cout << "Ile złotych pilek wygrał RONALDO:" << endl;
    cout << "a) 1." << endl;
    cout << "b) 3." << endl;
    cout << "c) 5." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "c")
    {
        cout << " odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << " poprawna odpowiedź to c" << endl;
        Sleep(3000);
        system("cls");
    }


}
    cout << "Ile ligi mistrzów wygraL Real madrid:" << endl;
    cout << "a 14." << endl;
    cout << "b) 9." << endl;
    cout << "c) 3." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "a")
    {
        cout << " odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << " poprawna odpowiedź to a" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Jak nazywa sie Polska liga piłkarska:" << endl;
    cout << "a Chicago Bulls." << endl;
    cout << "b)Ekstraklasa." << endl;
    cout << "c) PolscyKopacze." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "b")
    {
        cout << " odpowiedziales dobrze" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << " poprawna odpowiedź to b " << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Jak nazywa sie Polski gracz Barcelony?" << endl;
    cout << "a) Robert Lewandowski." << endl;
    cout << "b) Arkadiusz MILIK." << endl;
    cout << "c) Zbigniew Ziobro." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "a")
    {
        cout << " odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << " poprawna odpowiedź to a" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Ile Barcelona ma wygranych lig Mistrzów:" << endl;
    cout << "a) 0" << endl;
    cout << "b) Mniej od Realu ahahah" << endl;
    cout << "c) 0" << endl;
    cin >> odpowiedz;
    if (odpowiedz == "b")
    {
        cout << " odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << " poprawna odpowiedź to b" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "ilosc zdobytych punktow: " << pkt << endl;
    return 0;
