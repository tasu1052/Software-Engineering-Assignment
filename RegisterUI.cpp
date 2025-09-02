#include "RegisterUI.h"

RegisterUI::RegisterUI(ifstream& inStream, ofstream& outStream, vector<User>& users)
    : in(inStream), out(outStream), users(users) {} // RegisterUI �ٿ���� Ŭ���� ������ ����

User RegisterUI::startRegister() {  // Register ��Ʈ�ѷ��� ���� ����� ������ �Է¹ް� User ��ü ��ȯ
    Register controller(in, users);
    User newUser = controller.memberInfoInput();
    showResult(newUser);
    return newUser;
}

void RegisterUI::showResult(const User& user) { // ����� ���� ����� ��� ���Ͽ� �ۼ�
    out << "1.1. ȸ������" << endl;
    out << "> " << user.getId() << " " << user.getPassword() << " " << user.getPhoneNumber() << endl;
    out << endl;
}