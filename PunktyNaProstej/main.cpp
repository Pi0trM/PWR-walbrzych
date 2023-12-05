#include <iostream>

using namespace std;

bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy);

int main()
{
    float Ax, Ay, Bx, By, Cx, Cy;

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

    if (CzyLezaNaProstej(Ax, Ay, Bx, By, Cx, Cy) == true)
        {
            cout << "Podane punkty leza na prostej";
        }
    else
        {
            cout << "Podane punkty nie leza na prostej";
        }

    return 0;
}

bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
    if (((Ay-By)*(Ax-Cx))==((Ay-Cy)*(Ax-Bx)))
        return true;

    return false;
}
