#include <iostream>
#include <climits>
#include <cstdint>
#include <vector>

using namespace std;

void print(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << "\t";
    }
}

int main() {
    vector<int> A;
    int N = 10;
    A.resize(N);
    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }

    print(A);

    cout << endl;
    for (int i = 0; i < N; i++) {
        int temp = A[i];
        int temp2 = A[i];
        if (i == A.size() - 1) {
            temp2 = A[0];
            A[0] = temp;
            A[A.size() - 1] = temp2;
        }
    }

    print(A);

return 0;
}
