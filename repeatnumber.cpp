#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 2, 3, 4};

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                cout <<arr[i]<< endl; // Output the index of the first occurrence of the duplicate
                break;             // Exit the inner loop for this `i`
            }
        }
    }

    return 0;
}
