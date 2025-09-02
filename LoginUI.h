#pragma once
#ifndef LOGINUI_H
#define LOGINUI_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
#include "Manager.h"
using namespace std;

class LoginUI { // LoginUI 클래스: 사용자로부터 입력을 받아 로그인 컨트롤 클래스를 호출하는 UI 클래스
private:
    ifstream& in;   // 입력 스트림
    ofstream& out;  // 출력 스트림
    vector<User>& users;    // 사용자 리스트
    vector<Manager>& managers;  // 관리자 리스트
    User*& currentUser; // 현재 로그인된 사용자 포인터
    Manager*& currentManager;   // 현재 로그인된 관리자 포인터

public:
    LoginUI(ifstream& inStream, ofstream& outStream,
        vector<User>& users, vector<Manager>& managers,
        User*& currentUser, Manager*& currentManager);  // 생성자: 스트림, 리스트, 로그인 포인터들을 초기화

    void startLogin();  // 로그인 프로세스를 시작하는 메서드 선언
    void showResult(const string& id, const string& pw);    //결과 출력 메서드 선언
};
#endif