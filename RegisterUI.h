#pragma once
#ifndef REGISTERUI_H
#define REGISTERUI_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
#include "Register.h"
using namespace std;

class RegisterUI {  // ȸ������ UI�� ����ϴ� �ٿ���� Ŭ����
private:
    ifstream& in;   // �Է� ���� ��Ʈ�� ����
    ofstream& out;  // ��� ���� ��Ʈ�� ����
    vector<User>& users;    // ����� ����Ʈ ����

public:
    RegisterUI(ifstream& inStream, ofstream& outStream, vector<User>& users);  // ������: �Է� ��Ʈ��, ��� ��Ʈ��, ����� ����Ʈ�� �޾� �ʱ�ȭ

    User startRegister();   // ȸ�������� �����ϰ� ȸ�� ��ü�� ��ȯ
    void showResult(const User& user);  // ȸ������ ����� ���
};
#endif