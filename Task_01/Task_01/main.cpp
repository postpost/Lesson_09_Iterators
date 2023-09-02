#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector <int> vi{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::cout << "[IN]: ";
	for (const auto& el : vi)
		std::cout << el << " ";
	std::sort(vi.begin(), vi.end());
	auto it = std::unique(vi.begin(), vi.end());
	vi.erase(it, vi.end());
	std::cout << "\n[OUT]: ";
	for (const auto& el : vi)
		std::cout << el << " ";
	return 0;
}