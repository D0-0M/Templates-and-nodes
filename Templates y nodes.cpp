// Templates y nodes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include <vector>
using namespace std;

int main()
{
    Node<int> b(1);
    b.addValue(4);
    b.addValue(6);

    Node<int>* dummy = nullptr;
    dummy = &b;
    while (dummy != nullptr) {
        cout << dummy->getValue() << endl;
        dummy = dummy->next();
    }
    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
