#include <iostream>
using namespace std;
int main()
{
   int n, a, b, c, d;
   cout << "enter any four digit no:";
   cin >> n;
   a = n % 10;
   n = n / 10;
   b = n % 10;
   n = n / 10;
   c = n % 10;
   n = n / 10;
   d = n % 10;
   cout << d << " " << c << " " << b << " " << a << endl;
   int f, g, h, i;
   ((d % 2 == 0) ? d : 0);
   f = (d == 2 || d == 6) ? 0 : d;
   ((c % 2 == 0) ? c : 0);
   g = (c == 2 || c == 6) ? 0 : c;
   ((b % 2 == 0) ? b : 0);
   h = (b == 2 || b == 6) ? 0 : b;
   ((a % 2 == 0) ? a : 0);
   i = (a == 2 || a == 6) ? 0 : a;
   int sum_ev = 0;
   (f % 2 == 0 && g % 2 == 0) ? (sum_ev = f * g) : 0;
   (g % 2 == 0 && h % 2 == 0) ? (sum_ev = sum_ev + (g * h)) : 0;
   (h % 2 == 0 && i % 2 == 0) ? (sum_ev = sum_ev + (h * i)) : 0;

   cout << sum_ev << endl;
   int j, k, l, m;
   ((d % 2 != 0) ? d : 0);
   j = (d == 3 || d == 7) ? 0 : d;
   ((c % 2 != 0) ? c : 0);
   k = (c == 3 || c == 7) ? 0 : c;
   ((b % 2 != 0) ? b : 0);
   l = (b == 3 || b == 7) ? 0 : b;
   ((a % 2 != 0) ? a : 0);
   m = (a == 3 || a == 7) ? 0 : a;
   int sum_od = 0;
   (j % 2 != 0 && k % 2 != 0) ? (sum_od = j * k) : 0;
   (k % 2 != 0 && l % 2 != 0) ? (sum_od = sum_od + (k * l)) : 0;
   (l % 2 != 0 && m % 2 != 0) ? (sum_od = sum_od + (l * m)) : 0;
   cout << sum_od << endl;
   cout << "result=" << (sum_ev - sum_od);
   return 0;
}