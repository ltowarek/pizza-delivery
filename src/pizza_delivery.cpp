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
