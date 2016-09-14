#include "gtest/gtest.h"
#include "pizza_delivery.h"

TEST(PizzaDelivery, SmallestGrid_0_Deliveries) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(1, 1, {0}), 0);
}

TEST(PizzaDelivery, SmallestGrid_5_Deliveries) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(1, 1, {5}), 0);
}

TEST(PizzaDelivery, RegularGrid_0_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(2, 2, {0, 0,
                                       0, 0}), 0);
}

TEST(PizzaDelivery, RegularGrid_5_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(2, 2, {5, 5,
                                       5, 5}), 20);
}
