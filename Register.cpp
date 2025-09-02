#include "Register.h"

Register::Register(ifstream& inStream, vector<User>& users)
    : in(inStream), users(users) {} // Register Ŭ���� ������ ����

User Register::memberInfoInput() {  // ����� ID, ��й�ȣ, ��ȭ��ȣ�� �Է¹޾� User ��ü ���� �� ����Ʈ�� �߰�
    string id, pw, pn;
    in >> id >> pw >> pn;

    User newUser(id, pw, pn);   // User �ν��Ͻ� ����
    users.push_back(newUser);   // User ��Ͽ� �߰�

    return newUser;
}