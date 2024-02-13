#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Circulo
{
    float radio;
public:
    int x;
    int y;

    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects (Circulo circulo);



};

int main()
{
    Circulo c1;
    Circulo c2 (2, 2, 4);
    Circulo c3 (3, 3);
    c1.x = 1;
    c1.y = 1;
    c1.setRadio(2);
    c3.setRadio(1);

    c1.getArea();
    c2.getArea();
    c3.getArea();

    c1.intersects(c2);
    c1.intersects(c3);
    c2.intersects(c3);

    return 0;
}

Circulo::Circulo()
{
    radio = 0.0;
    x = 0;
    y = 0;
}

Circulo::Circulo(int x2, int y2)
{
    radio = 0.0;
    x = x2;
    y = y2;
}

Circulo::Circulo(int x2, int y2, float r)
{
    radio = r;
    x = x2;
    y = y2;
}

float Circulo::getRadio()
{
    return radio;
}

void Circulo::setRadio(float r)
{
    if (r > 0)
        radio = r;
    else
        radio = 0;
}

float Circulo::getArea()
{
    float area;
    area = 3.14*radio*radio;
    cout << "El area del circulo es " << area<<endl;
    return area;
}

void Circulo::intersects(Circulo circulo)
{
    float dist;
    dist = sqrt(pow((circulo.x-x),2)+pow((circulo.y-y),2));
    if (dist < (radio+circulo.radio))
        cout << "Los circulos intersectan" << endl;
    else
        cout << "Los circulos no intersectan" << endl;
}
