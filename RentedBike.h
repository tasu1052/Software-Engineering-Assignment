#pragma once
#ifndef RENTEDBIKE_H
#define RENTEDBIKE_H
#include "Bike.h"
#include <string>
using namespace std;
class RentedBike : public Bike {    // �뿩�� ������ ������ ��Ÿ���� ��ƼƼ Ŭ����
public: // Bike Ŭ������ ����Ͽ� �⺻ ������ ������ ������
    RentedBike(const string& id, const string& name)
        : Bike(id, name) {} // �뿩 ������ ������
};
#endif