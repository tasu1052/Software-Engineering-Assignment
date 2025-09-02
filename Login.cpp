#include "Login.h"

Login::Login(const vector<User>& users, const vector<Manager>& managers,
    User*& currentUser, Manager*& currentManager)
    : users(users), managers(managers),
    loginUser(currentUser), loginManager(currentManager) {} // 생성자 구현: 참조로 받은 리스트 및 포인터를 초기화

bool Login::ischeckInfo(const string& id, const string& pw) {   // ID와 비밀번호를 확인하여 로그인 여부 결정하는 메서드 구현
    for (const auto& manager : managers) {  // 관리자 목록에서 검색
        if (manager.getId() == id && manager.getPassword() == pw) {
            loginManager = const_cast<Manager*>(&manager);
            return true;
        }
    }

    for (const auto& user : users) {     // 사용자 목록에서 검색
        if (user.getId() == id && user.getPassword() == pw) {
            loginUser = const_cast<User*>(&user);
            return true;
        }
    }
    return false;
}