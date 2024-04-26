/**
 * Leer 2 valores enteros y almacenarlos en variables, llamadas A y B ,
 * y sumarlas, asignando el resultado a la variable X.
 * Mostrar X como se muestra abajo. No muestre ningún mensaje además de
 * lo que se especifica y no olvide imprimir un salto de línea luego del resultado,
 * de otra forma Ud. recibirá un “Presentation Error”.
 *
 * Entrada
 *
 * El archivo de entrada contiene 2 valores enteros.
 *
 * Salida Muestre la variable X de acuerdo al siguiente ejemplo,
 * con un espacio en blanco antes y después del signo igual.
 * 'X' está en mayúsculas y Ud. tiene que imprimir un espacio antes y después del signo '='.
 *
 * Ejemplos de Entrada
 * 10
 * 9
 *
 * -10
 * 4
 *
 * 15
 * -7
 *
 * Ejemplos de Salida
 *
 * X=19
 * X=-6
 * X=8
 *
 *
 * Link: https://judge.beecrowd.com/es/problems/view/1001
 * */

#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int sum(int a, int b) { return a + b; };

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << "X = " << sum(a, b) << endl;
}

int main()
{

    solve();

    return 0;
}
