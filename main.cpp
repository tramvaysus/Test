#include <vector>
#include <functional>
#include <iostream>
#include "candle.h"
#include "tests.h"

//массив всех тестов, который мы заполняем в функции initTests
static std::vector<std::function<bool()>> tests;

void initTests()
{
  tests.push_back(body_contains_test1);
tests.push_back(body_contains_test2);
tests.push_back(body_contains_test3);
tests.push_back(contains_test1);
tests.push_back(contains_test2);
tests.push_back(contains_test3);
tests.push_back(full_size_test1);
tests.push_back(full_size_test2);
tests.push_back(full_size_test3);
tests.push_back(body_size_test1);
tests.push_back(body_size_test2);
tests.push_back(body_size_test3);
tests.push_back(is_green_test1);
tests.push_back(is_green_test2);
tests.push_back(is_green_test3);
tests.push_back(is_red_test1);
tests.push_back(is_red_test2);
tests.push_back(is_red_test3);
}

int launchTests()
{
  int total = 0;
  int passed = 0;

  for (const auto& test : tests)
  {
    std::cout << "test #" << (total + 1);
    if (test())
    {
      passed += 1;
      std::cout << " passed\n";
    }
    else
    {
      std::cout << " failed\n";
    }
    total += 1;
  }

  std::cout << "\ntests " << passed << "/" << total << " passed!" << std::endl;

  //0 = success
  return total - passed;
}

int main()
{
  initTests();
  return launchTests();
}
