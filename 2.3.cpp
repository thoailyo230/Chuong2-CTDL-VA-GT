#include <iostream>
using namespace std;

int sum_even(int arr[], int n, int i = 0, int sum = 0) {
    if (i == n) {
        return sum;
    }
    if (arr[i] % 2 == 0) {
        sum += arr[i];
    }
    return sum_even(arr, n, i + 1, sum);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sum_even(arr, n);
    cout << "Tong cac so chan trong mang la: " << sum << endl;
    return 0;
}
