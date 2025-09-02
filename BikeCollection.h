#pragma once
#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include <vector>
#include <string>
#include "Bike.h"
using namespace std;

class BikeCollection {  // BikeCollection Ŭ����: Manager�� ����� ������ ����� �����ϴ� Ŭ����
private:
    vector<Bike> managerBikes;  // ������ ��ü���� �����ϴ� ����
    size_t currentIndex = 0;  // ������ ���� Ž���� ���� �ε���

public:
    void addBike(const Bike& bike) {     // ������ �߰� �Լ�
        managerBikes.push_back(bike);   // ���ο� �����Ÿ� �÷��ǿ� �߰�
    }

    bool isremoveBike(const string& bikeId) {   // �÷��ǿ��� ������ ���� �Լ�
        for (auto it = managerBikes.begin(); it != managerBikes.end(); ++it) {
            if (it->getId() == bikeId) {
                managerBikes.erase(it);
                return true;
            }
        }
        return false;
    }

    Bike* findFirst() {  // ù ��° ������ ��ȯ �Լ�
        if (managerBikes.empty()) return nullptr;
        currentIndex = 0;
        return &managerBikes[currentIndex];
    }   // ��Ͽ��� ù ��° �����Ÿ� ��ȯ�ϸ�, ���� Ž���� ���� �ε����� �ʱ�ȭ

    Bike* getNext() {       // ���� ������ ��ȯ �Լ�
        if (managerBikes.empty() || currentIndex + 1 >= managerBikes.size())
            return nullptr;
        return &managerBikes[++currentIndex];
    }   // ���� �ε����� �������� ���� �����Ÿ� ��ȯ
};
#endif