#ifndef RANDOM_H
#define RANDOM_H

#include <chrono>
#include <random>

namespace Random {
inline std::mt19937 generate() {
	std::random_device rd{};
}

} // namespace Random

#endif
