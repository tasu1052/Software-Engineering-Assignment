#pragma once
#ifndef SHOWRENTALBIKE_H
#define SHOWRENTALBIKE_H

#include <fstream>
#include "RentedBikeCollection.h"

using namespace std;

class ShowRentalBike {  // 대여된 자전거 목록을 출력하는 컨트롤 클래스
private:
    ofstream& out;  // 출력 파일 스트림 참조
    RentedBikeCollection& rentedCollection; // 대여된 자전거 목록 참조

public:
    ShowRentalBike(ofstream& outStream, RentedBikeCollection& rentedCollection);    // 생성자: 출력 스트림과 대여된 자전거 목록 초기화
    void showRentalList();  // 대여된 자전거 목록 출력 메서드 선언
};
#endif