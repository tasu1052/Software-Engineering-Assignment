#include "LoginUI.h"
#include "Login.h"  // Controller 포함

LoginUI::LoginUI(ifstream& inStream, ofstream& outStream,
    vector<User>& users, vector<Manager>& managers,
    User*& currentUser, Manager*& currentManager)
    : in(inStream), out(outStream),
    users(users), managers(managers),
    currentUser(currentUser), currentManager(currentManager) {} // 생성자 구현

void LoginUI::startLogin() {    // 로그인 시작 함수: 입력값을 받아 컨트롤 클래스에 전달
    string id, pw;
    in >> id >> pw;  // 사용자 입력 읽기

    Login controller(users, managers, currentUser, currentManager);  // 컨트롤러 생성
    bool success = controller.ischeckInfo(id, pw);  // 로그인 확인

    if (success) {
        showResult(id, pw); //결과 출력 함수 호출
    }
}
void LoginUI::showResult(const string& id, const string& pw) {  //결과 출력 메서드 구현
    out << "2.1. 로그인" << endl;
    out << "> " << id << " " << pw << endl;
    out << endl;
}