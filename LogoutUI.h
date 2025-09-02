#pragma once
#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include <string>
#include "Logout.h"
using namespace std;

class LogoutUI {    // LogoutUI Ŭ����: �α׾ƿ� ��ɿ� ���� ������� ����ϴ� Ŭ����
private:
    ofstream& out;   // ��� ��Ʈ��
    User*& currentUser; // ���� �α��ε� ����� ���� ������
    Manager*& currentManager;   // ���� �α��ε� ������ ���� ������

public:
    LogoutUI(ofstream& outStream, User*& user, Manager*& manager);  // ������: ��� ��Ʈ���� ���� �α��� ���� �����͸� ������ ����

    void startLogout(); // �α׾ƿ� ��� ���� �޼���
    void showResult(const string& id); // ��� ��� �޼���
};
#endif