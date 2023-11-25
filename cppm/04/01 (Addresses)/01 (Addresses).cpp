#include <iostream>
#include <string>

class Person
{
public:
    Person() = default;
    Person(std::string _first, std::string _last, int _age, char _gender) 
    {
        std::cout << __FUNCTION__ << std::endl;
        first_name = _first;
        last_name = _last;
        age = _age;
        gender = _gender;
    }

private:

    std::string first_name;
    std::string last_name;
    int age;
    char gender;
};



int main()
{
    Person man("Ivan", "Petrov", 30, 'M' );
    Person woman("Tanya", "Petrova", 20, 'F');




    //test commit 3

    return 0;
}
