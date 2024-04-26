/**
 * Leer dos valores enteros. Luego, calcular el producto entre ellos y guardar el resultado en una variable llamada PROD.
 *
 * Imprimir el resultado como se muestra en los ejemplos.
 *
 * No olvides imprimir el final de línea luego del resultado, de otra forma recibirás “Presentation Error”.
 *
 * Entrada
 * La entrada contiene dos números enteros.
 *
 * Salida
 * Imprimir el mensaje "PROD" y PROD de acuerdo a los ejemplos, con un espacio antes y luego del signo igual.
 * Ejemplo de entrada	Ejemplo de salida
 * --------------------------------------
 * 3                    PROD = 27
 * 9
 * --------------------------------------
 * -30                  PROD = -300
 * 10
 * --------------------------------------
 * 0                     PROD = 0
 * 9
 * --------------------------------------
 *
 * */

#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << "PROD = " << a * b << endl;
}

int main()
{
    solve();
    return 0;
}
