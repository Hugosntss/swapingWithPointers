#include <iostream>
#include "./utils/swap.hh"
#include "./utils/swap.cpp"

using namespace std;

int main() {
    int num1 = 2;
    int num2 = 1;

    swap(&num1, &num2); // calling the swap function with pointers

    cout << "Hello\n" << num1 << " " << num2;
}
