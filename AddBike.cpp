#include "AddBike.h"

AddBike::AddBike(BikeCollection& bikeCollection) : bikeCollection(bikeCollection) {}    // 생성자: BikeCollection 객체 참조를 초기화

void AddBike::addBike(const string& id, const string& name) {   // 자전거 ID와 이름을 받아 새로운 Bike 객체를 만들고 BikeCollection에 추가
    Bike newBike(id, name);     // 새로운 자전거 객체 생성
    bikeCollection.addBike(newBike);    // 컬렉션에 자전거 추가
}
