#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(set<int> xs) {
  cout << "xs: [";
  for (auto i = xs.begin(); i != xs.end(); i++) {
    if (i != xs.begin()) cout << ", ";
    cout << *i;
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(set<int> xs { 1, 1, 2, 4, 4, 4 });
  DEBUG(xs.insert(3));
  DEBUG(xs.insert(2));
  DEBUG(if (xs.count(4) == 1) xs.insert(6));
  DEBUG(if (xs.count(7) == 0) xs.insert(5));
  DEBUG(if (xs.size() == 3) xs.clear());
  DEBUG(if (!xs.empty()) xs.clear());
}
