# Stack

## Problem
Bracket Matching \
`()` `{}` `[]`
```cpp
check("{}"); // true
check("(([])"); // false
check("{{}}()"); // true
check("({)}"); // false
```

## Using a Stack
```cpp
#include <bits/stdc++.h>
using namespace std;

bool check(const string& str) {
  stack<char> xs;
  for (const char& c : str) {
    switch (c) {
      case '(': xs.push(')'); break;
      case '{': xs.push('}'); break;
      case '[': xs.push(']'); break;
      default:
        if (xs.empty() || xs.top() != c) return false;
        else xs.pop();
    }
  }
  return true;
}
```