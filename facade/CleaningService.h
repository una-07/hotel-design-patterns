#pragma once
#include <iostream>
using namespace std;

class CleaningService {
public:
    void scheduleCleaning() {
        cout << "Уборка запланирована\n";
    }

    void performCleaning() {
        cout << "Уборка выполнена\n";
    }
};
