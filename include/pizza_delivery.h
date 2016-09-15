#ifndef PIZZA_DELIVERY_PIZZA_DELIVERY_H
#define PIZZA_DELIVERY_PIZZA_DELIVERY_H

#include <algorithm>
#include <vector>

namespace pizzadelivery {
class PizzaDelivery {
 public:
  int TotalDeliveryCost(const int size_x, const int size_y, const std::vector<int> &grid) const;
  int ManhattanDistance(const int start_x,
                        const int start_y,
                        const int end_x,
                        const int end_y) const;
};
}  // pizzadelivery

#endif //PIZZA_DELIVERY_PIZZA_DELIVERY_H
