#pragma once
#include <iostream>

class My_exception : public std::exception
{
private:
    std::string _why;
    std::string _name;
    std::string _result = _name + ":\nОшибка создания фигуры. Причина: " + _why + "\n"; // !!! Правильно понимаю, что операции с переменными делаются в заголовочном файле? !!!

public:
    My_exception(const std::string& message, const std::string& name);
    const char* what() const override;
};