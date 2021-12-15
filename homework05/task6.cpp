#include <iostream>

int main() {
    int n = 0;
    int counter = 0;
    int max = 1;
    std::cout << "Enter n: ";
    std::cin >> n;
    while (n != 1)
    {
        (n > max) ? max = n : max += 0;
        (n % 2 == 0) ? n /= 2 : n = (n * 3) + 1;
        ++counter;
    }
    std::cout << "max = " << max << ", steps = " << counter << "\n";
}