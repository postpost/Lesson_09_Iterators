#include <iostream>
#include <vector>
#include <list>
#include <set>

template <class T>
void print_container(const T& name) {
	for (auto it = name.cbegin(); it != name.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main() {
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set);

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector); // one, two, three, four
	return 0;

}