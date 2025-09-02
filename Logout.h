#pragma once
#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "User.h"
#include "Manager.h"
using namespace std;

class Logout {  // Logout 클래스: 현재 로그인된 사용자나 관리자를 로그아웃 처리하는 컨트롤 클래스
private:
    User*& loggedInUser;    // 현재 로그인된 사용자 참조 포인터
    Manager*& loggedInManager;  // 현재 로그인된 관리자 참조 포인터

public:
    Logout(User*& user, Manager*& manager); // 생성자: 현재 로그인 상태 포인터를 참조로 받음

    string logout();     // 로그아웃 처리 후 로그아웃한 아이디 반환, 없으면 빈 문자열 반환
};
#endif