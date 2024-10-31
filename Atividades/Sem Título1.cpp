#include <iostream>
using namespace std;
void encontraMinMax(int a, int b, int c, int &min, int &max) {
min = a;
max = a;
if (b < min) min = b;
if (b > max) max = b;
if (c < min) min = c;
if (c > max) max = c;
}
int main() {
int a = 3, b = 7, c = 5;
int min, max;
encontraMinMax(a, b, c, min, max);
cout << "Menor: " << min << endl;
cout << "Maior: " << max << endl;
return 0;
}
