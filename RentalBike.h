#pragma once
#ifndef RENTALBIKE_H
#define RENTALBIKE_H

#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"
using namespace std;

class RentalBike {  // ������ �뿩 ������ ó���ϴ� ��Ʈ�� Ŭ����
private:
    BikeCollection& bikeCollection; // ������ ��� ����
    RentedBikeCollection& rentedCollection; // �뿩�� ������ ��� ����

public:
    RentalBike(BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection); // ������: ������ ��ϰ� �뿩 ����� ������ �޾� �ʱ�ȭ
    bool isrentBike(const string& bikeId);  // �����Ÿ� ID�� ã�� �뿩�ϰ� ���� ���� ��ȯ
};
#endif