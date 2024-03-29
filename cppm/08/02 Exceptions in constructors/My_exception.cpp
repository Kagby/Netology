#include "My_exception.h"

My_exception::My_exception(const std::string& message, const std::string& name) : _why(message), _name(name) 
{
    _result = _name + ":\nОшибка создания фигуры. Причина: " + _why + "\n"; // !!! Правильно понимаю, что операции с переменными делаются в заголовочном файле? !!!
};

const char* My_exception::what() const // !!! Возможно ли переопределить what(), чтобы он возвращал string, а не char* !!!
{
    
    return _result.c_str(); // .c_str() превращает строку в массив символов
}