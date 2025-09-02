#pragma once
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include <iostream>
#include <fstream>
#include <string>
#include "AddBike.h"
using namespace std;

class AddBikeUI {   // ������ ��� ����� ����� �������̽� Ŭ����
private:
    ofstream& out;  // ��� ���� ��Ʈ�� ����
    ifstream& in;   // �Է� ���� ��Ʈ�� ����

public:
    AddBikeUI(ifstream& inStream, ofstream& outStream); // ������: �Է�/��� ��Ʈ�� �ʱ�ȭ
    void startAddBike(BikeCollection& bikeCollection);   // ����ڷκ��� ������ ���� �Է��� �ް� ����� �����ϴ� �޼��� ����
    void showResult(const string& id, const string& name);  // ������ ��� ����� ����ϴ� �޼��� ����
};
#endif