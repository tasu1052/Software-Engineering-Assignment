#pragma once
#ifndef RENTEDBIKECOLLECTION_H
#define RENTEDBIKECOLLECTION_H

#include "RentedBike.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class RentedBikeCollection {    // �뿩�� �����ŵ��� �����ϴ� Ŭ����
private:
    vector<RentedBike> rentedBikes; // �뿩�� ������ ����Ʈ
    size_t currentIndex = 0;  // �ݺ� Ž���� ���� ���� �ε���

public:
    void findFirst() {  // ù ��° �����Ÿ� ����Ű���� �ε��� �ʱ�ȭ
        currentIndex = 0;
    }

    bool isgetNext(RentedBike& bike) {      // ���� �����Ű� �ִ� ��� ���� ���ڷ� �����ϰ� true ��ȯ
        if (currentIndex < rentedBikes.size()) {
            bike = rentedBikes[currentIndex++];
            return true;
        }
        return false;
    }

    void addRentedBike(const RentedBike& bike) {     // ������ �뿩 ������ ����Ʈ�� �߰��ϰ� ����
        rentedBikes.push_back(bike);
        sort(rentedBikes.begin(), rentedBikes.end(),
            [](const RentedBike& a, const RentedBike& b) {
                return a.getId() < b.getId();
            });
    }

    bool isremoveRentedBike(const string& id) { // �־��� ID�� �ش��ϴ� �����Ÿ� ����Ʈ���� ����
        for (auto it = rentedBikes.begin(); it != rentedBikes.end(); ++it) {
            if (it->getId() == id) {
                rentedBikes.erase(it);
                return true;
            }
        }
        return false;
    }

    RentedBike* getRentedBike(const string& id) {   // �־��� ID�� �ش��ϴ� �����Ÿ� �˻��Ͽ� �����ͷ� ��ȯ
        for (auto& bike : rentedBikes) {
            if (bike.getId() == id) {
                return &bike;
            }
        }
        return nullptr;
    }
};
#endif