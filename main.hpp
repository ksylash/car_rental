#include <iostream>
#include <memory>
#include <cstdio>
#include <cstdint>
#include <typeinfo>
#include <string>

using namespace std;

class Car
{
public:
    enum class Types
    {
        NILL,
        SEDAN,
        HATCHBACK,
        MINI_SUV, // Compact SUV
        SUV,
        MUV
    };

    Car() {}
    ~Car() {}

    void getCarNames();

private:
    Types carNames(Types a_carTypes);
};