#include "pizza_delivery.h"

int pizzadelivery::PizzaDelivery::TotalDeliveryCost(const int size_x,
                                                    const int size_y,
                                                    const std::vector<int> &grid) const {
  auto output = int{0};

  for (int y = 0; y < size_y; ++y) {
    for (int x = 0; x < size_x; ++x) {
      auto tmp_output = DeliveryCost(x, y, size_x, size_y, grid);
      if (tmp_output < output || output == 0) {
        output = tmp_output;
      }
    }
  }

  return output;
}

int pizzadelivery::PizzaDelivery::DeliveryCost(const int start_x,
                                               const int start_y,
                                               const int size_x,
                                               const int size_y,
                                               const std::vector<int> &grid) const {
  auto output = int{0};

  for (int y = 0; y < size_y; ++y) {
    for (int x = 0; x < size_x; ++x) {
      output += ManhattanDistance(start_x, start_y, x, y) * grid[y * size_x + x];
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
