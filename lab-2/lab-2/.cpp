#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[] = { 1,2,-3,4,-5,6,-7,8,-9 };
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << " *=a[i]";
        }
    }
}
std::cout << "������� ��'����� ��������: " << std::endl;
std::cout << "³�'��� ��������: ";
for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
        std::cout << std::endl;
        return 0;
    }
}
