#pragma once
#ifndef RENTEDBIKECOLLECTION_H
#define RENTEDBIKECOLLECTION_H

#include "RentedBike.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class RentedBikeCollection {    // 대여된 자전거들을 관리하는 클래스
private:
    vector<RentedBike> rentedBikes; // 대여된 자전거 리스트
    size_t currentIndex = 0;  // 반복 탐색을 위한 현재 인덱스

public:
    void findFirst() {  // 첫 번째 자전거를 가리키도록 인덱스 초기화
        currentIndex = 0;
    }

    bool isgetNext(RentedBike& bike) {      // 다음 자전거가 있는 경우 참조 인자로 전달하고 true 반환
        if (currentIndex < rentedBikes.size()) {
            bike = rentedBikes[currentIndex++];
            return true;
        }
        return false;
    }

    void addRentedBike(const RentedBike& bike) {     // 자전거 대여 정보를 리스트에 추가하고 정렬
        rentedBikes.push_back(bike);
        sort(rentedBikes.begin(), rentedBikes.end(),
            [](const RentedBike& a, const RentedBike& b) {
                return a.getId() < b.getId();
            });
    }

    bool isremoveRentedBike(const string& id) { // 주어진 ID에 해당하는 자전거를 리스트에서 제거
        for (auto it = rentedBikes.begin(); it != rentedBikes.end(); ++it) {
            if (it->getId() == id) {
                rentedBikes.erase(it);
                return true;
            }
        }
        return false;
    }

    RentedBike* getRentedBike(const string& id) {   // 주어진 ID에 해당하는 자전거를 검색하여 포인터로 반환
        for (auto& bike : rentedBikes) {
            if (bike.getId() == id) {
                return &bike;
            }
        }
        return nullptr;
    }
};
#endif