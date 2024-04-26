/**
 * La fórmula para calcular el Área de un Círculo se define como:
 *
 * area = pi . radio2.
 *
 * Para este problema consideramos pi = 3.14159:
 *
 * - Calcule el área usando la fórmula dada en la descripción del problema.
 *
 * Entrada
 *
 * La entrada consiste de un valor de punto flotante (doble precisión), que es la variable radio.
 *
 *
 * Salida
 *
 * Mostrar el mensaje "A=" seguido del valor del área, como en los ejemplos siguientes,
 *  con cuatro lugares después del punto decimal. Use variables de doble precisión.
 *  Como con todos los problemas, no olvide imprimir un salto de línea
 *  luego del resultado, de otra manera Ud. recibirá un mensaje "Presentation Error".
 *
 *
 * Ejemplos de Entrada    Ejemplos de Salida
 * 2.00                   A=12.5664
 * 100.64                 A=31819.3103
 * 150.00                 A=70685.7750
 *
 */

#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{

    double radio;
    cin >> radio;
    ld pi = 3.14159;
    ld area = pi * pow(radio, 2);
    cout << fixed << setprecision(4);

    cout << "A=" << area << endl;
}

int main()
{

    solve();
    return 0;
}
