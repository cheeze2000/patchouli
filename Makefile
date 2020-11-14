CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17

%.cpp:
	@[ -d bin ] || mkdir bin
	$(CXX) $(CXXFLAGS) src/$@ -o bin/patchouli
	@echo ""
	@cd bin && ./patchouli
