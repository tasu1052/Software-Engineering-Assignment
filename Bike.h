#pragma once
#pragma once
#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;
class Bike {    // Bike 클래스: 자전거 정보를 나타내는 클래스
protected:
    string id;  // 자전거 고유 ID
    string name;    // 자전거 이름

public:
    Bike(const string& id, const string& name)  
        : id(id), name(name) {} // 생성자: ID와 이름을 초기화

    string getId() const { return id; } // 자전거 ID 반환
    string getName() const { return name; } // 자전거 이름 반환
};
#endif