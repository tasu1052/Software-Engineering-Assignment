#pragma once
#ifndef LOGINUI_H
#define LOGINUI_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
#include "Manager.h"
using namespace std;

class LoginUI { // LoginUI Ŭ����: ����ڷκ��� �Է��� �޾� �α��� ��Ʈ�� Ŭ������ ȣ���ϴ� UI Ŭ����
private:
    ifstream& in;   // �Է� ��Ʈ��
    ofstream& out;  // ��� ��Ʈ��
    vector<User>& users;    // ����� ����Ʈ
    vector<Manager>& managers;  // ������ ����Ʈ
    User*& currentUser; // ���� �α��ε� ����� ������
    Manager*& currentManager;   // ���� �α��ε� ������ ������

public:
    LoginUI(ifstream& inStream, ofstream& outStream,
        vector<User>& users, vector<Manager>& managers,
        User*& currentUser, Manager*& currentManager);  // ������: ��Ʈ��, ����Ʈ, �α��� �����͵��� �ʱ�ȭ

    void startLogin();  // �α��� ���μ����� �����ϴ� �޼��� ����
    void showResult(const string& id, const string& pw);    //��� ��� �޼��� ����
};
#endif