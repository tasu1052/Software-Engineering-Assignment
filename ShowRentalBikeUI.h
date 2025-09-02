#pragma once
#ifndef SHOWRENTALBIKEUI_H
#define SHOWRENTALBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "ShowRentalBike.h"
#include "RentedBikeCollection.h"

using namespace std;

class ShowRentalBikeUI {    // 대여된 자전거 목록을 보여주는 바운더리 클래스
private:
    ifstream& in;   // 입력 파일 스트림 참조
    ofstream& out;  // 출력 파일 스트림 참조
    RentedBikeCollection& rentedCollection; // 대여된 자전거 목록 참조

public:
    ShowRentalBikeUI(ifstream& inStream, ofstream& outStream, RentedBikeCollection& rentedCollection);  // 생성자: 입력, 출력 스트림과 대여된 자전거 목록 초기화
    void startShow();    // 대여 목록 출력 프로세스 시작
};
#endif