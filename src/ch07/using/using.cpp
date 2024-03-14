#include <iostream>

namespace a {
constexpr int x{0};
}

namespace b {
constexpr int x{1};
}

int main() {
	using namespace a;
	using namespace b;

	std::cout << x << '\n';
	return 0;
}
