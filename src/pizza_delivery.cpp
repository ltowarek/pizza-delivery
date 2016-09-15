#include "pizza_delivery.h"

int pizzadelivery::PizzaDelivery::TotalDeliveryCost(const int size_x, const int size_y, const std::vector<int> &grid) const {
  auto output = int{0};

  for (int y = 0; y < size_y; ++y) {
    for (int x = 0; x < size_x; ++x) {
      output += ManhattanDistance(0, 0, x, y) * grid[y*size_x+x];
    }
  }

  return output;
}

int pizzadelivery::PizzaDelivery::ManhattanDistance(const int start_x,
                                                    const int start_y,
                                                    const int end_x,
                                                    const int end_y) const {
  return std::abs(end_x - start_x) + std::abs(end_y - start_y);
}
