#include <iostream>
#include <math.h>

using namespace std;

bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy);

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy);

int main()
{
    bool wprowadzono = false;

    float Ax, Ay, Bx, By, Cx, Cy;

    while(wprowadzono == false)
    {
        system("cls");

        cout << "WITAMY W MENU\nWybierz, co chcesz zrobic\n\n";
        cout << "(1) Wprowadz punkty" << endl;
        cout << "(0) Zamknij program" << endl;

        int Opcja;
        cin >> Opcja;

        switch(Opcja)
        {
            case 1:
                {
                    system("cls");
                    cout << "Podaj wspolrzedna x punktu A: ";
                    cin >> Ax;
                    cout << "Podaj wspolrzedna y punktu A: ";
                    cin >> Ay;

                    cout << "Podaj wspolrzedna x punktu B: ";
                    cin >> Bx;
                    cout << "Podaj wspolrzedna y punktu B: ";
                    cin >> By;

                    cout << "Podaj wspolrzedna x punktu C: ";
                    cin >> Cx;
                    cout << "Podaj wspolrzedna y punktu C: ";
                    cin >> Cy;

                    wprowadzono = true;
                }; break;
            case 0: return 0;
        }
    }
    system("cls");

    while(wprowadzono == true)
    {
        cout << "Wprowadzone punkty: A(" << Ax << "; " << Ay << "), B("<< Bx << "; " << By << "), C(" << Cx << "; " << Cy << ")\n\n";

        cout << "WITAMY W MENU\nWybierz, co chcesz zrobic\n\n";
        cout << "(1) Wprowadz punkty ponownie" << endl;
        cout << "(2) Sprawdz, czy punkty leza na jednej prostej lub oblicz pole trojkata" << endl;
        cout << "(0) Zamknij program" << endl;

        int Opcja;
        cin >> Opcja;

        switch(Opcja)
        {
            case 1:
                {
                    system("cls");
                    cout << "Podaj wspolrzedna x punktu A: ";
                    cin >> Ax;
                    cout << "Podaj wspolrzedna y punktu A: ";
                    cin >> Ay;

                    cout << "Podaj wspolrzedna x punktu B: ";
                    cin >> Bx;
                    cout << "Podaj wspolrzedna y punktu B: ";
                    cin >> By;

                    cout << "Podaj wspolrzedna x punktu C: ";
                    cin >> Cx;
                    cout << "Podaj wspolrzedna y punktu C: ";
                    cin >> Cy;
                }; break;
            case 2:
                {
                    system("cls");
                    if(CzyLezaNaProstej(Ax, Ay, Bx, By, Cx, Cy) == true)
                    {
                        cout << "Punkty leza na jednej prostej\nNie mozna zbudowac na nich trojkata" << endl;
                    }
                    else
                    {
                        cout << "Pole trojkata ABC wynosi " << PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy) << endl;
                    }
                }; break;
            case 0: return 0;
        }
    }


    return 0;
}

bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
    if (((Ay-By)*(Ax-Cx))==((Ay-Cy)*(Ax-Bx)))
        return true;

    return false;
}

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
    float AB = sqrt(((Ax - Bx)*(Ax - Bx)) + ((Ay - By)*(Ay - By)));
    float AC = sqrt(((Ax - Cx)*(Ax - Cx)) + ((Ay - Cy)*(Ay - Cy)));
    float BC = sqrt(((Bx - Cx)*(Bx - Cx)) + ((By - Cy)*(By - Cy)));

    float s = (AB + AC + BC)/2;

    return (sqrt(s*(s-AB)*(s-AC)*(s-BC)));
}


