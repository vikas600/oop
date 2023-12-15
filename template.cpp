

#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;

template <class T>
void selection_sort(T a[], int n) {
    cout << "Enter no of elements: ";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int tem = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[tem]) {
                tem = j;
            }
        }
        swap(a[i], a[tem]);
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }
}

int main() {
    int c;
    cout << "Choice: ";
    cin >> c;

    switch (c) {
        case 1: {
            cout << "Integer sorting...\n";
            const int maxSize = 10;  // You can change this size accordingly
            int arr[maxSize];
            selection_sort(arr, maxSize);
            break;
        }
        case 2: {
            cout << "Floating sorting...\n";
            const int maxSize = 10;
            float arr[maxSize];
            selection_sort(arr, maxSize);
            break;
        }
        case 3: {
            cout << "String sorting...\n";
            const int maxSize = 10;
            string arr[maxSize];
            selection_sort(arr, maxSize);
            break;
        }
        default:
            cout << "Invalid choice\n";
            break;
    }

    return 0;
}


