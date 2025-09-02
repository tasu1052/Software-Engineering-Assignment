#pragma once
#pragma once
#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;
class Bike {    // Bike Ŭ����: ������ ������ ��Ÿ���� Ŭ����
protected:
    string id;  // ������ ���� ID
    string name;    // ������ �̸�

public:
    Bike(const string& id, const string& name)  
        : id(id), name(name) {} // ������: ID�� �̸��� �ʱ�ȭ

    string getId() const { return id; } // ������ ID ��ȯ
    string getName() const { return name; } // ������ �̸� ��ȯ
};
#endif