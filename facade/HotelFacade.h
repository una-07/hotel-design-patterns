#pragma once
#include "RoomBookingSystem.h"
#include "RestaurantSystem.h"
#include "EventManagementSystem.h"
#include "CleaningService.h"
#include "TaxiService.h"

class HotelFacade {
private:
    RoomBookingSystem room;
    RestaurantSystem restaurant;
    EventManagementSystem eventSystem;
    CleaningService cleaning;
    TaxiService taxi;

public:

    void bookRoomWithServices() {
        cout << "\n--- Бронирование номера с услугами ---\n";
        room.checkAvailability();
        room.bookRoom();
        restaurant.orderFood();
        cleaning.scheduleCleaning();
    }

    void organizeEvent() {
        cout << "\n--- Организация мероприятия ---\n";
        eventSystem.bookHall();
        eventSystem.orderEquipment();
        room.bookRoom();
    }

    void bookRestaurantWithTaxi() {
        cout << "\n--- Бронирование ресторана ---\n";
        restaurant.bookTable();
        restaurant.orderFood();
        taxi.callTaxi();
    }

    void cancelRoom() {
        cout << "\n--- Отмена бронирования ---\n";
        room.cancelBooking();
    }

    void requestCleaning() {
        cout << "\n--- Запрос уборки ---\n";
        cleaning.performCleaning();
    }
};
