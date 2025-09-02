#pragma once
#ifndef SHOWRENTALBIKEUI_H
#define SHOWRENTALBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "ShowRentalBike.h"
#include "RentedBikeCollection.h"

using namespace std;

class ShowRentalBikeUI {    // �뿩�� ������ ����� �����ִ� �ٿ���� Ŭ����
private:
    ifstream& in;   // �Է� ���� ��Ʈ�� ����
    ofstream& out;  // ��� ���� ��Ʈ�� ����
    RentedBikeCollection& rentedCollection; // �뿩�� ������ ��� ����

public:
    ShowRentalBikeUI(ifstream& inStream, ofstream& outStream, RentedBikeCollection& rentedCollection);  // ������: �Է�, ��� ��Ʈ���� �뿩�� ������ ��� �ʱ�ȭ
    void startShow();    // �뿩 ��� ��� ���μ��� ����
};
#endif