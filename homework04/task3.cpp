#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    double s = 0., a, x;

    std::cout << "Enter x: ";
    std::cin >> x;

    a = x;

    for (int i = 0; i < n; i++)
    {
        a = sin(a);
        s += a;
    }
    std::cout << s << std::endl;
    return 0;
}
