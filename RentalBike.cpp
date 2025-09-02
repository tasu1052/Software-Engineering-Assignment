#include "RentalBike.h"

RentalBike::RentalBike(BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection)
    : bikeCollection(bikeCollection), rentedCollection(rentedCollection) {} // RentalBike 클래스 생성자 구현

bool RentalBike::isrentBike(const string& bikeId) { // 자전거 ID를 기준으로 대여 가능 여부 확인 후 대여 처리
    Bike* bike = bikeCollection.findFirst();    // 첫 자전거부터 시작
    while (bike != nullptr) {
        if (bike->getId() == bikeId) {
            rentedCollection.addRentedBike(RentedBike(bike->getId(), bike->getName()));
            return true;
        }
        bike = bikeCollection.getNext();    // 다음 자전거로 이동
    }
    return false;    // 해당 ID의 자전거가 없음
}