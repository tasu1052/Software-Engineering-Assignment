#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <vector>
#include "User.h"
#include "Manager.h"
using namespace std;

class Login {   // Login Ŭ����: ����� �Ǵ� �������� �α��� ������ Ȯ���ϴ� ��Ʈ�� Ŭ����
private:
    const vector<User>& users;  // ��ϵ� ����� ����Ʈ
    const vector<Manager>& managers;     // ��ϵ� ������ ����Ʈ
    User*& loginUser;    // ���� �α����� ����� ������
    Manager*& loginManager; // ���� �α����� ������ ������

public:
    Login(const vector<User>& users, const vector<Manager>& managers,
        User*& currentUser, Manager*& currentManager);  // ������: ����� �� ������ ����Ʈ�� ���� �α��� �����͸� ������ ����

    bool ischeckInfo(const string& id, const string& pw);   // �α��� ����(id, pw)�� Ȯ���ϰ� �ش� ����� �Ǵ� �����ڸ� �α��� ó��
};
#endif