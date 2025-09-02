#include "RentalBikeUI.h"
#include "RentalBike.h"

RentalBikeUI::RentalBikeUI(ifstream& inStream, ofstream& outStream,
    BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection)
    : in(inStream), out(outStream), bikeCollection(bikeCollection), rentedCollection(rentedCollection) {}   // RentalBikeUI 클래스 생성자 구현

void RentalBikeUI::startRental() {  // 입력에서 자전거 ID를 받아 대여를 처리하고 결과 출력
    string bikeId;
    in >> bikeId;

    RentalBike rentalCtrl(bikeCollection, rentedCollection);
    bool success = rentalCtrl.isrentBike(bikeId);

    showResult(bikeId); //결과 출력 함수 호출
}

void RentalBikeUI::showResult(const string& bikeId) {   // 결과를 출력하는 메서드 구현
    out << "4.1. 자전거 대여" << endl;
    out << "> " << bikeId << endl;
    out << endl;
}