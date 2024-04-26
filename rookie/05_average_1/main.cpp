/**
 * This program calculates the average of two student grades.
 * The weight of grade A is 3.5 and the weight of grade B is 7.5.
 * Each grade can be between zero and ten, with one decimal place.
 * The program prints the average with 5 decimal places.
 *
 * Input:
 * The input file contains two floating-point values with one decimal place.
 *
 * Output:
 * Print the message "MEDIA" (Average in Portuguese) and the average of the students,
 * according to the examples below, with 5 decimal places and a space before and after the equal sign.
 *
 * Examples:
 * Input:          Output:
 * 5.0             MEDIA = 6.43182
 * 7.1
 *
 * 0.0             MEDIA = 4.84091
 * 7.1
 *
 * 10.0            MEDIA = 10.00000
 * 10.0
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
    double a, b, av, wa, wb;

    wa = 3.5;
    wb = 7.5;

    cin >> a >> b;

    av = ((a * wa) + (b * wb)) / (wa + wb);

    cout << fixed << setprecision(5);

    cout << "MEDIA = " << av << endl;
}

int main()
{
    solve();

    return 0;
}
