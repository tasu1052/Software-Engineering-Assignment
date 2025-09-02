#pragma once
#ifndef SHOWRENTALBIKE_H
#define SHOWRENTALBIKE_H

#include <fstream>
#include "RentedBikeCollection.h"

using namespace std;

class ShowRentalBike {  // �뿩�� ������ ����� ����ϴ� ��Ʈ�� Ŭ����
private:
    ofstream& out;  // ��� ���� ��Ʈ�� ����
    RentedBikeCollection& rentedCollection; // �뿩�� ������ ��� ����

public:
    ShowRentalBike(ofstream& outStream, RentedBikeCollection& rentedCollection);    // ������: ��� ��Ʈ���� �뿩�� ������ ��� �ʱ�ȭ
    void showRentalList();  // �뿩�� ������ ��� ��� �޼��� ����
};
#endif