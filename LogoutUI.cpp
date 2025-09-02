#include "LogoutUI.h"

LogoutUI::LogoutUI(ofstream& outStream, User*& user, Manager*& manager)
    : out(outStream), currentUser(user), currentManager(manager) {} // 생성자 구현

void LogoutUI::startLogout() {  // 로그아웃 시작 함수
    Logout controller(currentUser, currentManager); // 컨트롤러 생성 및 현재 상태 전달

    string id = controller.logout();    // 로그아웃 수행 및 ID 반환
    if (!id.empty()) {  //결과 출력 함수 호출
        showResult(id);
    }
}
void LogoutUI::showResult(const string& id) {   //결과 출력 수행 메서드 구현
    out << "2.2. 로그아웃" << endl;
    out << "> " << id << endl;
    out << endl;
}