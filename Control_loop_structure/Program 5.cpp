// Write a program to reverse a given number using a while loop
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
        cout << "Enter a number: ";
            cin >> num;

                while (num > 0) {
                        reversed =( reversed * 10) + num % 10;
                                num = num/ 10;
                                    }

                                        cout << "Reversed number: " << reversed;
                                            return 0;
                                            }
                                            
