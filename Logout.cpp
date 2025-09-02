#include "Logout.h"

Logout::Logout(User*& user, Manager*& manager)
    : loggedInUser(user), loggedInManager(manager) {}   // 생성자: 외부에서 현재 로그인된 사용자/관리자 포인터를 받아 멤버 초기화

string Logout::logout(){    //로그아웃 처리 함수 구현
    if (loggedInUser != nullptr) {  // 사용자가 로그인된 경우 로그아웃
        string id = loggedInUser->getId();  // ID 저장
        loggedInUser = nullptr; // 포인터 초기화로 로그아웃 처리
        return id;
    }
    else if (loggedInManager != nullptr) {  // 관리자가 로그인된 경우 로그아웃
        string id = loggedInManager->getId();   // ID 저장
        loggedInManager = nullptr;  // 포인터 초기화로 로그아웃 처리
        return id;
    }
    return "";  // 로그인된 계정이 없는 경우 빈 문자열 반환
}