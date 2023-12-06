#include "main.hpp"

Car::Types Car::carNames(Types a_carTypes)
{
    Types type = a_carTypes;
    switch (a_carTypes)
    {
    case Types::SEDAN:
        cout << "Car type: Sedan\n";
        break;

    case Types::HATCHBACK:
        cout << "Car type: Hatchback\n";
        break;
    case Types::MINI_SUV:
        cout << "Car type: Mini SUV\n";
        break;
    case Types::SUV:
        cout << "Car type: SUV\n";
        break;
    case Types::MUV:
        cout << "Car type: MUV\n";
        break;
    default:
        cout << "None of the above.";
        break;
    }
    return type;
}

void Car::getCarNames()
{
    int type;
    cout << "\r\nChoose from 1 - 5:\n";
    cout << "1. Sedan\n2. Hatchback\n3. Compact Suv\n4. SUV\n5. MUV\nYour choice : ";
    cin >> type;
    if ((type > 0) && (type < 6))
    {
        cout << endl;
        carNames(static_cast<Types>(type));
    }
    else
    {
        cout << "\nIncorrect option!!";
        getCarNames();
    }
};

int main()
{
    Car carObj;
    carObj.getCarNames();
    return 0;
}