#ifndef PIZZA_DELIVERY_PIZZA_DELIVERY_H
#define PIZZA_DELIVERY_PIZZA_DELIVERY_H

#include <algorithm>
#include <vector>

namespace pizzadelivery {
class PizzaDelivery {
 public:
  int TotalDeliveryCost(const int x, const int y, const std::vector<int> &grid) const;
};
}  // pizzadelivery

#endif //PIZZA_DELIVERY_PIZZA_DELIVERY_H
