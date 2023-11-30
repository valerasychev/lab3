#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int x;
int mass [16];
for (x = 0; x <= 15; x++)
    {
        mass[x]=x+1;
        cout << "mass=" << mass[x] << "\n";
    }

}
