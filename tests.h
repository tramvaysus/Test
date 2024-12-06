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
