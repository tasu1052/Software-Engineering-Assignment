#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <vector>
#include "User.h"
#include "Manager.h"
using namespace std;

class Login {   // Login 클래스: 사용자 또는 관리자의 로그인 정보를 확인하는 컨트롤 클래스
private:
    const vector<User>& users;  // 등록된 사용자 리스트
    const vector<Manager>& managers;     // 등록된 관리자 리스트
    User*& loginUser;    // 현재 로그인한 사용자 포인터
    Manager*& loginManager; // 현재 로그인한 관리자 포인터

public:
    Login(const vector<User>& users, const vector<Manager>& managers,
        User*& currentUser, Manager*& currentManager);  // 생성자: 사용자 및 관리자 리스트와 현재 로그인 포인터를 참조로 받음

    bool ischeckInfo(const string& id, const string& pw);   // 로그인 정보(id, pw)를 확인하고 해당 사용자 또는 관리자를 로그인 처리
};
#endif