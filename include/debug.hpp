#ifndef DEBUG_HPP
#define DEBUG_HPP

#define DEBUG(...) \
  __VA_ARGS__; \
  std::cout << #__VA_ARGS__ << ";\n"; \
  pretty_print(xs);

#endif
