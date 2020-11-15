#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(forward_list<int>& xs) {
  cout << "xs: [";
  for (auto i = xs.begin(); i != xs.end(); i++) {
    if (i != xs.begin()) cout << ", ";
    cout << *i;
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(forward_list<int> xs { 0, 1, 5, 2, 4, 3 });
  DEBUG(xs.front() += 6);
  DEBUG(xs.push_front(3));
  DEBUG(xs.sort());
  DEBUG(xs.reverse());
  DEBUG(xs.pop_front());
  DEBUG(xs.unique());
}
