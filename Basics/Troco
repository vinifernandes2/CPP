#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float valor;
    int c100, c50, c20, c10, c5, c2;
    int m1, m050, m025, m010, m005, m001;
    
    cout << "Determine o valor do troco: ";
    cin >> valor;
    
    valor = round(valor * 100) / 100;
    
    // Cálculo das notas
    c100 = valor / 100;
    valor = valor - (c100 * 100);
    c50 = valor / 50;
    valor = valor - (c50 * 50);
    c20 = valor / 20;
    valor = valor - (c20 * 20);
    c10 = valor / 10;
    valor = valor - (c10 * 10);
    c5 = valor / 5;
    valor = valor - (c5 * 5);
    c2 = valor / 2;
    valor = valor - (c2 * 2);
    
    // Impressão das notas
    cout << "NOTAS:" << endl;
    cout << c100 << " nota(s) de R$ 100.00" << endl;
    cout << c50 << " nota(s) de R$ 50.00" << endl;
    cout << c20 << " nota(s) de R$ 20.00" << endl;
    cout << c10 << " nota(s) de R$ 10.00" << endl;
    cout << c5 << " nota(s) de R$ 5.00" << endl;
    cout << c2 << " nota(s) de R$ 2.00" << endl;
    
    // Cálculo das moedas
    m1 = valor / 1;
    valor = valor - (m1 * 1);
    m050 = valor / 0.50;
    valor = valor - (m050 * 0.50);
    m025 = valor / 0.25;
    valor = valor - (m025 * 0.25);
    m010 = valor / 0.10;
    valor = valor - (m010 * 0.10);
    m005 = valor / 0.05;
    valor = valor - (m005 * 0.05);
    m001 = valor / 0.01;
    
    // Impressão das moedas
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m050 << " moeda(s) de R$ 0.50" << endl;
    cout << m025 << " moeda(s) de R$ 0.25" << endl;
    cout << m010 << " moeda(s) de R$ 0.10" << endl;
    cout << m005 << " moeda(s) de R$ 0.05" << endl;
    cout << m001 << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}
