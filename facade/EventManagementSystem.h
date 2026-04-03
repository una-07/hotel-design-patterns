#pragma once
#include <iostream>
using namespace std;

class EventManagementSystem {
public:
    void bookHall() {
        cout << "Конференц-зал забронирован\n";
    }

    void orderEquipment() {
        cout << "Оборудование заказано\n";
    }
};
