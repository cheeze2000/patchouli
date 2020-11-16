#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(deque<int> xs) {
  cout << "xs: [";
  for (auto i = xs.begin(); i != xs.end(); i++) {
    if (i != xs.begin()) cout << ", ";
    cout << *i;
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(deque<int> xs { 3, 5, 1 });
  DEBUG(xs[1] -= 3);
  DEBUG(xs.push_front(4));
  DEBUG(xs.push_back(0));
  DEBUG(xs.pop_front());
  DEBUG(if (xs.front() == 3) xs.pop_front());
  DEBUG(if (xs.back() != 0) xs.pop_back());
  DEBUG(if (!xs.empty()) xs.pop_back());
  DEBUG(xs.clear());
}
