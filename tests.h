#include "candle.h"

//тест 1 - body_contains 
bool body_contains_test1()
{
    Candle candle(10.0, 11.0, 9.0, 9.5);
    return (candle.body_contains(10.0) ? true : false);
}

//тест 2 - body_contains 
bool body_contains_test2()
{
    Candle candle(10.0, 11.0, 9.0, 9.5);
    return (candle.body_contains(9.5) ? true : false);
}

//тест 3 - body_contains 
bool body_contains_test3()
{
    Candle candle(100.0, 11.0, 9.0, 9.5);
    return (candle.body_contains(100.0) ? true : false);
}

//тест 1 -  contains
bool contains_test1()
{
    Candle candle(10.0, 11.0, 9.0, 9.5);
    return (candle.contains(11.0) ? true : false);
}

//тест 2 - contains 
bool contains_test2()
{
    Candle candle(10.0, 11.0, 9.0, 9.5);
    return (candle.contains(9.0) ? true : false);
}

//тест 3 - contains 
bool contains_test3()
{
    Candle candle(10.0, 1100.0, 9.0, 9.5);
    return (candle.contains(1100.0) ? true : false);
}

//тест 1 -  full_size
bool full_size_test1()
{
    Candle candle(10.0, 11.0, 9.0, 9.5);
    return (candle.full_size() ? true : false);
}

//тест 2 - full_size
bool full_size_test2()
{
    Candle candle(10.0, 9.0, 11.0, 9.5);
    return (candle.full_size() ? true : false);
}

//тест 3 - full_size
bool full_size_test3()
{
    Candle candle(10.0, 1100.0, 9.0, 9.5);
    return (candle.full_size() ? true : false);
}
