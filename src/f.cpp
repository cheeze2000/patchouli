#include <bits/stdc++.h>
#include "debug.hpp"

using namespace std;

void pretty_print(map<string, int> xs) {
  cout << "xs: [";
  for (auto i = xs.begin(); i != xs.end(); i++) {
    if (i != xs.begin()) cout << ", ";
    cout << i->first << " -> " << i->second;
  }
  cout << "]\n\n";
}

int main() {
  DEBUG(map<string, int> xs);
  DEBUG(xs["three"] = 3);
  DEBUG(xs["four"] = 4);
  DEBUG(xs["six"] = 6);
  DEBUG(xs["four"]++);
  DEBUG(xs.begin()->second--);
  DEBUG(if (xs.count("four") == 1) xs.erase("four"));
  DEBUG(if (xs.size() == 2) xs.clear());
}
