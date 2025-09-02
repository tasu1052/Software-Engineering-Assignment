#include "Logout.h"

Logout::Logout(User*& user, Manager*& manager)
    : loggedInUser(user), loggedInManager(manager) {}   // ������: �ܺο��� ���� �α��ε� �����/������ �����͸� �޾� ��� �ʱ�ȭ

string Logout::logout(){    //�α׾ƿ� ó�� �Լ� ����
    if (loggedInUser != nullptr) {  // ����ڰ� �α��ε� ��� �α׾ƿ�
        string id = loggedInUser->getId();  // ID ����
        loggedInUser = nullptr; // ������ �ʱ�ȭ�� �α׾ƿ� ó��
        return id;
    }
    else if (loggedInManager != nullptr) {  // �����ڰ� �α��ε� ��� �α׾ƿ�
        string id = loggedInManager->getId();   // ID ����
        loggedInManager = nullptr;  // ������ �ʱ�ȭ�� �α׾ƿ� ó��
        return id;
    }
    return "";  // �α��ε� ������ ���� ��� �� ���ڿ� ��ȯ
}