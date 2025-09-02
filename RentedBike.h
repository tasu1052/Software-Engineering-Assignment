#pragma once
#ifndef RENTEDBIKE_H
#define RENTEDBIKE_H
#include "Bike.h"
#include <string>
using namespace std;
class RentedBike : public Bike {    // 대여된 자전거 정보를 나타내는 엔티티 클래스
public: // Bike 클래스를 상속하여 기본 자전거 정보를 포함함
    RentedBike(const string& id, const string& name)
        : Bike(id, name) {} // 대여 자전거 생성자
};
#endif