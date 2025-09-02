#include "Login.h"

Login::Login(const vector<User>& users, const vector<Manager>& managers,
    User*& currentUser, Manager*& currentManager)
    : users(users), managers(managers),
    loginUser(currentUser), loginManager(currentManager) {} // ������ ����: ������ ���� ����Ʈ �� �����͸� �ʱ�ȭ

bool Login::ischeckInfo(const string& id, const string& pw) {   // ID�� ��й�ȣ�� Ȯ���Ͽ� �α��� ���� �����ϴ� �޼��� ����
    for (const auto& manager : managers) {  // ������ ��Ͽ��� �˻�
        if (manager.getId() == id && manager.getPassword() == pw) {
            loginManager = const_cast<Manager*>(&manager);
            return true;
        }
    }

    for (const auto& user : users) {     // ����� ��Ͽ��� �˻�
        if (user.getId() == id && user.getPassword() == pw) {
            loginUser = const_cast<User*>(&user);
            return true;
        }
    }
    return false;
}