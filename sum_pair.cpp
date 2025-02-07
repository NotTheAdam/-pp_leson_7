#include <iostream>
#include <climits>
#include <cstdint>
#include <vector>

using namespace std;

int main() {
   vector<int> A;
   int N = 10;
   A.resize(N);
   for (int i = 0; i < A.size(); i++) {
      cin >> A[i];
   }

   int x, y;
   int max_sum = -1;
   for (int i = 0; i < N-1; i++) {
      //rastoyanie mezdy elementam i and k ne menee 5
      for (int k = i + 5; k < N; k++) {
         int pair_sum = A[i] + A[k];
         if (pair_sum > max_sum) {
            max_sum = pair_sum;
            x = A[i];
            y = A[k];
         }
      }
   }
   cout << max_sum << endl;
   cout << x << " + "<< y << endl;
   return 0;
}
