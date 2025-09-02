#pragma once
#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include <vector>
#include <string>
#include "Bike.h"
using namespace std;

class BikeCollection {  // BikeCollection 클래스: Manager가 등록한 자전거 목록을 관리하는 클래스
private:
    vector<Bike> managerBikes;  // 자전거 객체들을 저장하는 벡터
    size_t currentIndex = 0;  // 자전거 순차 탐색을 위한 인덱스

public:
    void addBike(const Bike& bike) {     // 자전거 추가 함수
        managerBikes.push_back(bike);   // 새로운 자전거를 컬렉션에 추가
    }

    bool isremoveBike(const string& bikeId) {   // 컬렉션에서 자전거 제거 함수
        for (auto it = managerBikes.begin(); it != managerBikes.end(); ++it) {
            if (it->getId() == bikeId) {
                managerBikes.erase(it);
                return true;
            }
        }
        return false;
    }

    Bike* findFirst() {  // 첫 번째 자전거 반환 함수
        if (managerBikes.empty()) return nullptr;
        currentIndex = 0;
        return &managerBikes[currentIndex];
    }   // 목록에서 첫 번째 자전거를 반환하며, 순차 탐색을 위한 인덱스를 초기화

    Bike* getNext() {       // 다음 자전거 반환 함수
        if (managerBikes.empty() || currentIndex + 1 >= managerBikes.size())
            return nullptr;
        return &managerBikes[++currentIndex];
    }   // 현재 인덱스를 기준으로 다음 자전거를 반환
};
#endif