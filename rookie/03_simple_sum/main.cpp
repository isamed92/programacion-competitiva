
/**
 * Leer dos valores enteros, en este caso, las variables A y B.
 * Luego, calcule la suma entre estos y asígnelo a otra variable SOMA.
 * Muestre el valor de esta variable.
 *
 * Entrada:
 * La entrada contiene dos números enteros.
 *
 * Salida:
 * Imprimir el mensaje "SOMA" con todas las letras mayúsculas, con un espacio en blanco antes y después del signo igual seguido por el valor correspondiente a la suma de A y B.
 * Al igual que todos los problemas, no se olvide de imprimir el final de la línea, de lo contrario recibirá "Presentation Error"
 *
 * Ejemplos de Entrada    |    Ejemplos de Salida
 * ----------------------+---------------------
 * 30                    |    SOMA = 40
 * 10                    |
 * ----------------------+---------------------
 * -30                   |    SOMA = -20
 * 10                    |
 * ----------------------+---------------------
 * 0                     |    SOMA = 0
 * 0                     |
 * ----------------------+---------------------
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
    int a, b;
    cin >> a >> b;

    cout << "SOMA = " << a + b << endl;
}

int main()
{
    solve();

    return 0;
}
