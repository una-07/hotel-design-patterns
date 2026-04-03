#pragma once
#include <iostream>
using namespace std;

class RoomBookingSystem {
public:
    void checkAvailability() {
        cout << "Проверка доступности номеров\n";
    }

    void bookRoom() {
        cout << "Номер забронирован\n";
    }

    void cancelBooking() {
        cout << "Бронирование отменено\n";
    }
};
