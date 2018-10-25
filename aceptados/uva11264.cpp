//+++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++-------------------------------++++++++++
//+++++++++|LO COPIÉ DE GITHUB Y LO COMENTÉ|+++++++++
//++++++++++-------------------------------++++++++++
//++++++++++++++++++UVA-11264++++++++++++++++++++++++
#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int T;
    cin >> T;
    while ( T-- ) // este bucle itera por en numero de casos
    {
        int n;
        cin >> n;

        vector<int> values;
        for (int i = 0; i < n; ++i) // en este bucle inserta los distintos valores de las monedas en el vector 'values'
        {
            int value;
            cin >> value;
            values.push_back(value);
        }

        int sum = 1;
        int coins = values.size() > 1? 2 : 1;   // como en el bucle que viene itera sobre las values[1]...hasta values[n-1] establece la condicion para el caso base, con n=1
        // Get as more coins of smaller values as possible.
        for (int i = 1; i < values.size() - 1; ++i) // recorre por las diferentes monedas
            if (sum + values[i] < values[i + 1]) // Si existe una suma parcial, la cual se puede formar con monedas mas pequeñas que añadir una mas grande, se aumenta a la cantidad de monedas en 1
            {
                sum += values[i];
                ++coins;
            }

        cout << coins << endl;
    }
    return 0;
}