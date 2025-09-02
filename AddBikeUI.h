#pragma once
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "AddBike.h"
using namespace std;

class AddBikeUI {   // 자전거 등록 기능의 사용자 인터페이스 클래스
private:
    ofstream& out;  // 출력 파일 스트림 참조
    ifstream& in;   // 입력 파일 스트림 참조

public:
    AddBikeUI(ifstream& inStream, ofstream& outStream); // 생성자: 입력/출력 스트림 초기화
    void startAddBike(BikeCollection& bikeCollection);   // 사용자로부터 자전거 정보 입력을 받고 등록을 수행하는 메서드 선언
    void showResult(const string& id, const string& name);  // 자전거 등록 결과를 출력하는 메서드 선언
};
#endif