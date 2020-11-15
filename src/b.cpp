#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(stack<int>& xs) {
  cout << "xs: [";
  if (xs.size() == 1) cout << xs.top();
  else if (xs.size() > 1) cout << xs.top() << ", ...";
  cout << "]\n\n";
}

int main() {
  DEBUG(stack<int> xs);
  DEBUG(xs.push(10));
  DEBUG(xs.push(20));
  DEBUG(xs.top() *= 3);
  DEBUG(xs.push(30));
  DEBUG(xs.pop());
  DEBUG(xs.pop());
  DEBUG(if (xs.empty()) xs.pop());
  DEBUG(if (!xs.empty()) xs.pop());
}
