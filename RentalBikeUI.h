#pragma once
#ifndef RENTALBIKEUI_H
#define RENTALBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"
using namespace std;

class RentalBikeUI {    // ������ �뿩 UI�� ����ϴ� �ٿ���� Ŭ����
private:
    ifstream& in;   // �Է� ��Ʈ�� ����
    ofstream& out;  // ��� ��Ʈ�� ����
    BikeCollection& bikeCollection; // �뿩 ������ ������ ���
    RentedBikeCollection& rentedCollection; // �뿩�� ������ ���

public:
    RentalBikeUI(ifstream& inStream, ofstream& outStream,
        BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection);    // ������: ����� ��Ʈ�� �� ������ �÷��� �ʱ�ȭ

    void startRental(); // ������ �뿩�� �����ϴ� �޼��� ����
    void showResult(const string& bikeId); // ��� ��� �޼��� ����
};
#endif