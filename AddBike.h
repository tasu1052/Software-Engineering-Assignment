#pragma once
#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "BikeCollection.h"
using namespace std;

class AddBike { // 자전거 등록을 담당하는 컨트롤 클래스
private:
    BikeCollection& bikeCollection; // 자전거 목록을 관리하는 컬렉션

public:
    AddBike(BikeCollection& bikeCollection);    // 생성자: 외부에서 전달받은 BikeCollection 객체를 저장
    void addBike(const string& id, const string& name); // 새로운 자전거를 생성하여 컬렉션에 추가하는 메서드 선언
};
#endif