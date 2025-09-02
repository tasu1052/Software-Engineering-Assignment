#pragma once
#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "BikeCollection.h"
using namespace std;

class AddBike { // ������ ����� ����ϴ� ��Ʈ�� Ŭ����
private:
    BikeCollection& bikeCollection; // ������ ����� �����ϴ� �÷���

public:
    AddBike(BikeCollection& bikeCollection);    // ������: �ܺο��� ���޹��� BikeCollection ��ü�� ����
    void addBike(const string& id, const string& name); // ���ο� �����Ÿ� �����Ͽ� �÷��ǿ� �߰��ϴ� �޼��� ����
};
#endif