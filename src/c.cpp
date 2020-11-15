#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(queue<int>& xs) {
  cout << "xs: [";
  if (xs.size() == 1) cout << xs.front();
  else if (xs.size() > 1) {
    cout << xs.front();
    int s = xs.size() - 2;
    while (s--) cout << ", __";
    cout << ", " << xs.back();
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(queue<int> xs);
  DEBUG(xs.push(10));
  DEBUG(xs.push(20));
  DEBUG(xs.push(30));
  DEBUG(xs.push(40));
  DEBUG(xs.front() /= 5);
  DEBUG(xs.back() *= 10);
  DEBUG(xs.pop());
  DEBUG(if (xs.size() == 3) xs.pop());
  DEBUG(if (!xs.empty()) xs.pop());
  DEBUG(xs.pop());
}
