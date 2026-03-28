#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], unique[n], count = 0;
    bool exists;

    cout << "Enter " << n << " numbers, one per line:\n";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        exists = false;
        for (int j = 0; j < count; j++) {
            if (unique[j] == num) {
                exists = true;
                cout << "Already Entered: " << num << endl;
                break;
            }
        
        }
        if (!exists) {
            unique[count++] = num;
        }
    }

    cout << "Unique numbers entered:";
    for (int i = 0; i < count; i++) {
        cout << " " << unique[i];
    }
}