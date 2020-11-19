#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(priority_queue<int> xs) {
  cout << "xs: [";
  if (xs.size() == 1) cout << xs.top();
  else if (xs.size() > 1) {
    cout << xs.top();
    int s = xs.size() - 1;
    while (s--) cout << ", __";
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(priority_queue<int> xs);
  DEBUG(xs.push(2));
  DEBUG(xs.push(4));
  DEBUG(xs.push(3));
  DEBUG(if (xs.top() == 4) xs.pop());
  DEBUG(if (!xs.empty()) xs.pop());
  DEBUG(if (xs.size() == 1) xs.pop());
}
