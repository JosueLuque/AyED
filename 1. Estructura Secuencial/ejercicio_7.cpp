#include <iostream>
#define PI 3.14

using namespace std;
// 7. Dado el radio de un círculo, informar el diámetro, el perímetro y la superficie del mismo.

int main()
{
    int radio, diametro, perimetro, superficie;
    float pi = 3.14;
    cout << "Ingrese el radio de un círculo: ";
    cin >> radio;

    diametro = radio + radio;
    perimetro = 2 * pi * radio;
    superficie = pi * radio * radio;

    cout << "El diametro del circulo es: " << diametro << endl;
    cout << "El perimetro del circulo es: " << perimetro << "cm" << endl;
    cout << "La superficie del circulo es: " << superficie << "cm²" << endl;

    return 0;
}