#pragma once
#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "User.h"
#include "Manager.h"
using namespace std;

class Logout {  // Logout Ŭ����: ���� �α��ε� ����ڳ� �����ڸ� �α׾ƿ� ó���ϴ� ��Ʈ�� Ŭ����
private:
    User*& loggedInUser;    // ���� �α��ε� ����� ���� ������
    Manager*& loggedInManager;  // ���� �α��ε� ������ ���� ������

public:
    Logout(User*& user, Manager*& manager); // ������: ���� �α��� ���� �����͸� ������ ����

    string logout();     // �α׾ƿ� ó�� �� �α׾ƿ��� ���̵� ��ȯ, ������ �� ���ڿ� ��ȯ
};
#endif