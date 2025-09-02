#pragma once
#ifndef RENTALBIKEUI_H
#define RENTALBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"
using namespace std;

class RentalBikeUI {    // 자전거 대여 UI를 담당하는 바운더리 클래스
private:
    ifstream& in;   // 입력 스트림 참조
    ofstream& out;  // 출력 스트림 참조
    BikeCollection& bikeCollection; // 대여 가능한 자전거 목록
    RentedBikeCollection& rentedCollection; // 대여된 자전거 목록

public:
    RentalBikeUI(ifstream& inStream, ofstream& outStream,
        BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection);    // 생성자: 입출력 스트림 및 자전거 컬렉션 초기화

    void startRental(); // 자전거 대여를 시작하는 메서드 선언
    void showResult(const string& bikeId); // 결과 출력 메서드 선언
};
#endif