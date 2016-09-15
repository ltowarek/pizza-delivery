#include "gtest/gtest.h"
#include "pizza_delivery.h"

TEST(PizzaDelivery, SmallestGrid_0_Deliveries) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(0, 0, 1, 1, {0}), 0);
}

TEST(PizzaDelivery, SmallestGrid_5_Deliveries) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(0, 0, 1, 1, {5}), 0);
}

TEST(PizzaDelivery, RegularGrid_0_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(0, 0, 2, 2, {0, 0,
                                        0, 0}), 0);
}

TEST(PizzaDelivery, RegularGrid_5_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(0, 0, 2, 2, {5, 5,
                                        5, 5}), 20);
}

TEST(PizzaDelivery, RegularGrid_Ascending_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(1, 1, 2, 2, {1, 2,
                                        3, 4}), 7);
}

TEST(PizzaDelivery, RegularGrid_Descending_DeliveriesPerStreet) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.DeliveryCost(0, 0, 2, 2, {4, 3,
                                        2, 1}), 7);
}

TEST(PizzaDelivery, ManhattanDistance_Horizontal_FromBeginning) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(0, 0, 4, 0), 4);
}

TEST(PizzaDelivery, ManhattanDistance_Horizontal_FromEnd) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(4, 0, 0, 0), 4);
}

TEST(PizzaDelivery, ManhattanDistance_Vertical_FromBeginning) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(0, 0, 0, 4), 4);
}

TEST(PizzaDelivery, ManhattanDistance_Vertical_FromEnd) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(0, 4, 0, 0), 4);
}

TEST(PizzaDelivery, ManhattanDistance_Complex) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(2, 4, 0, 1), 5);
}

TEST(PizzaDelivery, ManhattanDistance_SamePoint) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.ManhattanDistance(0, 0, 0, 0), 0);
}

TEST(PizzaDelivery, 4x4Sample) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(4, 4, {0, 8, 2, 0,
                                       1, 4, 5, 0,
                                       0, 1, 0, 1,
                                       3, 9, 2, 0}), 55);
}

TEST(PizzaDelivery, 6x7Sample) {
  auto p = pizzadelivery::PizzaDelivery();
  EXPECT_EQ(p.TotalDeliveryCost(6, 7, {0, 0, 0, 0, 0, 0,
                                       0, 1, 0, 3, 0, 1,
                                       2, 9, 1, 2, 1, 2,
                                       8, 7, 1, 3, 4, 3,
                                       1, 0, 2, 2, 7, 7,
                                       0, 1, 0, 0, 1, 0,
                                       0, 0, 0, 0, 0, 0}), 162);
}
