/**
 * This program calculates the average of three student grades.
 * Grade A has a weight of 2, grade B has a weight of 3, and grade C has a weight of 5.
 * Each grade can be between 0 and 10.0, with one decimal place.
 *
 * Input:
 * The input file contains 3 floating-point values (double) with one decimal place.
 *
 * Output:
 * Print the message "MEDIA" (Average in Portuguese) and the average of the students,
 * according to the example below, with a space before and after the equal sign.
 *
 * Examples:
 * Input:          Output:
 * 5.0             MEDIA = 6.3
 * 6.0
 * 7.0
 *
 * 5.0             MEDIA = 9.0
 * 10.0
 * 10.0
 *
 * 10.0            MEDIA = 7.5
 * 10.0
 * 5.0
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
    double a, b, c, av, wa, wb, wc;

    wa = 2;
    wb = 3;
    wc = 5;

    cin >> a >> b >> c;

    av = ((a * wa) + (b * wb) + (c * wc)) / (wa + wb + wc);

    cout << fixed << setprecision(1);

    cout << "MEDIA = " << av << endl;
}

int main()
{
    solve();

    return 0;
}
