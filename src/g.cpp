#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(unordered_map<string, int> xs) {
  cout << "xs: [";
  for (auto i = xs.begin(); i != xs.end(); i++) {
    if (i != xs.begin()) cout << ", ";
    cout << i->first << " -> " << i->second;
  }
  cout << "]\n\n";
}

int main() {
  // DEBUG(unordered_set<int> xs);
  DEBUG(unordered_map<string, int> xs);
  DEBUG(xs["two"] = 2);
  DEBUG(xs["four"] = 4);
  DEBUG(xs["six"] = 6);
  DEBUG(if (xs.count("five") == 1) xs["five"] = 5);
  DEBUG(if (xs["four"] == 4) xs["five"] = 5);
  DEBUG(if (!xs.empty()) xs.clear());
}
