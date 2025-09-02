#include "ShowRentalBike.h"

ShowRentalBike::ShowRentalBike(ofstream& outStream, RentedBikeCollection& rentedCollection)
    : out(outStream), rentedCollection(rentedCollection) {} // 생성자 구현: 출력 스트림과 대여된 자전거 목록을 초기화

void ShowRentalBike::showRentalList() { // 대여된 자전거 목록을 출력하는 함수 구현
    out << "5.1. 자전거 대여 리스트" << endl;

    rentedCollection.findFirst();   // 목록의 처음부터 순회

    RentedBike bike("", "");    // 순회에 사용할 임시 RentedBike 객체 생성
    while (rentedCollection.isgetNext(bike)) {  // 다음 자전거가 있을 때까지 반복
        out << "> " << bike.getId() << " " << bike.getName() << endl;   // 자전거 정보 출력
    }

    out << endl;
}