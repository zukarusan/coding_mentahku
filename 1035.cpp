#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    a = (b > c && d > a && (c+d) > (a+b) && c >= 0 && d >= 0 && a%2 == 0);
    if (a)
        std::cout << "Valores aceitos\n";
    else 
        std::cout << "Valores nao aceitos\n";
}