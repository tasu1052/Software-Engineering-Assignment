#include "LoginUI.h"
#include "Login.h"  // Controller ����

LoginUI::LoginUI(ifstream& inStream, ofstream& outStream,
    vector<User>& users, vector<Manager>& managers,
    User*& currentUser, Manager*& currentManager)
    : in(inStream), out(outStream),
    users(users), managers(managers),
    currentUser(currentUser), currentManager(currentManager) {} // ������ ����

void LoginUI::startLogin() {    // �α��� ���� �Լ�: �Է°��� �޾� ��Ʈ�� Ŭ������ ����
    string id, pw;
    in >> id >> pw;  // ����� �Է� �б�

    Login controller(users, managers, currentUser, currentManager);  // ��Ʈ�ѷ� ����
    bool success = controller.ischeckInfo(id, pw);  // �α��� Ȯ��

    if (success) {
        showResult(id, pw); //��� ��� �Լ� ȣ��
    }
}
void LoginUI::showResult(const string& id, const string& pw) {  //��� ��� �޼��� ����
    out << "2.1. �α���" << endl;
    out << "> " << id << " " << pw << endl;
    out << endl;
}