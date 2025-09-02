#include "LogoutUI.h"

LogoutUI::LogoutUI(ofstream& outStream, User*& user, Manager*& manager)
    : out(outStream), currentUser(user), currentManager(manager) {} // ������ ����

void LogoutUI::startLogout() {  // �α׾ƿ� ���� �Լ�
    Logout controller(currentUser, currentManager); // ��Ʈ�ѷ� ���� �� ���� ���� ����

    string id = controller.logout();    // �α׾ƿ� ���� �� ID ��ȯ
    if (!id.empty()) {  //��� ��� �Լ� ȣ��
        showResult(id);
    }
}
void LogoutUI::showResult(const string& id) {   //��� ��� ���� �޼��� ����
    out << "2.2. �α׾ƿ�" << endl;
    out << "> " << id << endl;
    out << endl;
}