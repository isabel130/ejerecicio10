//
// Evalúa el estado financiero de una persona comparando sus ingresos y gastos.

#include <iostream>
using namespace std;

int main() {

    double ingresos, gastos;

    cout << "Ingresos: ";
    while (!(cin >> ingresos) or ingresos < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalido. Vuelva a intenarlo. Ingresos: ";
    }

    cout << "Gastos: ";
    while (!(cin >> gastos) or gastos < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalido. Vuelva a intenarlo. Gastos: ";
    }
    cout << "Su ingreso " << ingresos << " es positivo y su gasto " << gastos << " es negativo";
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.