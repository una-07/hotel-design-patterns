#include "HotelFacade.h"

int main() {
    HotelFacade hotel;

    hotel.bookRoomWithServices();
    hotel.organizeEvent();
    hotel.bookRestaurantWithTaxi();

    hotel.cancelRoom();
    hotel.requestCleaning();

    return 0;
}
