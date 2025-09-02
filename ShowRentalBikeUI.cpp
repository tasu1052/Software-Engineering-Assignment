#include "ShowRentalBikeUI.h"

ShowRentalBikeUI::ShowRentalBikeUI(ifstream& inStream, ofstream& outStream, RentedBikeCollection& rentedCollection)
    : in(inStream), out(outStream), rentedCollection(rentedCollection) {}   // 생성자 구현: 입력 스트림, 출력 스트림, 대여된 자전거 목록을 초기화

void ShowRentalBikeUI::startShow() {    // 대여된 자전거 목록 출력 함수 구현
    ShowRentalBike controller(out, rentedCollection);   // 컨트롤러 객체 생성
    controller.showRentalList();    // 대여 목록 출력
}