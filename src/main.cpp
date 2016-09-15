#include <iostream>
#include "pizza_delivery.h"

int main(int argc, char **argv) {
  auto number_of_test_cases = int{0};
  std::cin >> number_of_test_cases;

  for (int test_case = 0; test_case < number_of_test_cases; ++test_case) {
    auto size_x = int{0};
    std::cin >> size_x;

    auto size_y = int{0};
    std::cin >> size_y;

    auto grid = std::vector<int>(size_x * size_y);
    for (int i = 0; i < size_x * size_y; ++i) {
      std::cin >> grid[i];
    }

    std::cout << pizzadelivery::PizzaDelivery().TotalDeliveryCost(size_x, size_y, grid) << " blocks\n";
  }

  return 0;
}
