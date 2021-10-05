#include <iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ca = 0, count = 0, p = 1, c1 = 0, k, j;
    cin >> n;
    if (n <= 10) {
      if (n == 10) {
        cout << "9"<<endl;
      } else
        cout << n << endl;
    } else {
      k = n;
      while (k) {
        j = k % 10;
        if (j == 0) {
          ca++;
        }
        k = k / 10;
        count++;
      }
      c1 = count;
      if (ca == count - 1) {
        while (count - 1) {
          p = (p * 10);
          k += p;
          count--;
        }
        k += 1;

        n = n / k;
        c1 = c1 - 1;
        c1 = 9 * c1;
        c1 += n;
        cout << c1<<endl;
      } else {
        while (count-1) {
          p = (p * 10);
          k += p;
          count--;
        }
        k += 1;

        n = n / k;
        c1 = c1 - 1;
        c1 = 9 * c1;
        c1 += n;
        cout << c1<<endl;
      }
    }
  }
}
