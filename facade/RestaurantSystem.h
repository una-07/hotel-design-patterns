#pragma once
#include <iostream>
using namespace std;

class RestaurantSystem {
public:
    void bookTable() {
        cout << "Столик забронирован\n";
    }

    void orderFood() {
        cout << "Еда заказана\n";
    }
};
