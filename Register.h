#pragma once
#ifndef REGISTER_H
#define REGISTER_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
using namespace std;

class Register {    // ȸ������ ����� ����ϴ� ��Ʈ�� Ŭ����
private:
    ifstream& in;   // �Է� ��Ʈ�� ����
    vector<User>& users;  // ����� ����Ʈ ����

public:
    Register(ifstream& inStream, vector<User>& users);  // ������: �Է� ��Ʈ���� ����� ����Ʈ�� �޾� �ʱ�ȭ

    User memberInfoInput(); // ����� ������ �Է¹ް� User ��ü ���� �� ����Ʈ�� �߰�
};

#endif