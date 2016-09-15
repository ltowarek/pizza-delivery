#include "pizza_delivery.h"

int pizzadelivery::PizzaDelivery::TotalDeliveryCost(const int x, const int y, const std::vector<int> &grid) const {
  auto output = int{0};

  if (grid.size() == 1) {
    return output;
  }

  for (auto number_of_deliveries : grid) {
    output += number_of_deliveries;
  }

  return output;
}

int pizzadelivery::PizzaDelivery::ManhattanDistance(const int start_x,
                                                    const int start_y,
                                                    const int end_x,
                                                    const int end_y) const {
  return std::abs(end_x - start_x) + std::abs(end_y - start_y) + 1;  // + 1 due to zero based range
}
