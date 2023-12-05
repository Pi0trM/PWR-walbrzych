#include <iostream>
#include <math.h>

using namespace std;

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy);

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

    if (PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy) == 0)
    {
        cout << "Na podanych trojkatach nie mozna zbudowac trojkata!";
    }
    else
    {
        cout << "Pole trojkata o podanych bokach wynosi " << PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy);
    }

    return 0;
}

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
    float AB = sqrt(((Ax - Bx)*(Ax - Bx)) + ((Ay - By)*(Ay - By)));
    float AC = sqrt(((Ax - Cx)*(Ax - Cx)) + ((Ay - Cy)*(Ay - Cy)));
    float BC = sqrt(((Bx - Cx)*(Bx - Cx)) + ((By - Cy)*(By - Cy)));

    float s = (AB + AC + BC)/2;

    return (sqrt(s*(s-AB)*(s-AC)*(s-BC)));
}
