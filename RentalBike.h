#pragma once
#ifndef RENTALBIKE_H
#define RENTALBIKE_H

#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"
using namespace std;

class RentalBike {  // 자전거 대여 로직을 처리하는 컨트롤 클래스
private:
    BikeCollection& bikeCollection; // 자전거 목록 참조
    RentedBikeCollection& rentedCollection; // 대여된 자전거 목록 참조

public:
    RentalBike(BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection); // 생성자: 자전거 목록과 대여 목록을 참조로 받아 초기화
    bool isrentBike(const string& bikeId);  // 자전거를 ID로 찾아 대여하고 성공 여부 반환
};
#endif