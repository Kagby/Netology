#include "Counter.h"

    Counter::Counter() {}

    Counter::Counter(int value)
    {
        this->value = value;
    }

    void Counter::increment()
    {
        value++;
    }

    // Уменьшение значения
    void Counter::decrement()
    {
        if (value > 0)
        {
            value--;
        }
    }

    // Текущее значение
    int Counter::get_value() const
    {
        return value;
    }