#pragma once

class Counter
{
    int value = 1;
public:
    Counter();
    Counter(int);
    void increment();
    void decrement();
    int get_value() const;
};