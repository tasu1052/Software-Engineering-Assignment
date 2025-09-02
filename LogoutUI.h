#pragma once
#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include <string>
#include "Logout.h"
using namespace std;

class LogoutUI {    // LogoutUI 클래스: 로그아웃 기능에 대한 입출력을 담당하는 클래스
private:
    ofstream& out;   // 출력 스트림
    User*& currentUser; // 현재 로그인된 사용자 참조 포인터
    Manager*& currentManager;   // 현재 로그인된 관리자 참조 포인터

public:
    LogoutUI(ofstream& outStream, User*& user, Manager*& manager);  // 생성자: 출력 스트림과 현재 로그인 상태 포인터를 참조로 받음

    void startLogout(); // 로그아웃 기능 수행 메서드
    void showResult(const string& id); // 결과 출력 메서드
};
#endif