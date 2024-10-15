#include <vector>
#include <algorithm>
#include <gtest/gtest.h>
#include "sort/selection/selection.cpp"

TEST(SelectionSortTest, MixPositiveNegativeNumbers) {
    std::vector<int> input = {5, -2, 0, 10, -3, 8, -1, 2};
    std::vector<int> expected = {-3, -2, -1, 0, 2, 5, 8, 10};
    selectionSort(input);
    EXPECT_EQ(input, expected);
}