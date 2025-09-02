#pragma once
#ifndef REGISTERUI_H
#define REGISTERUI_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
#include "Register.h"
using namespace std;

class RegisterUI {  // 회원가입 UI를 담당하는 바운더리 클래스
private:
    ifstream& in;   // 입력 파일 스트림 참조
    ofstream& out;  // 출력 파일 스트림 참조
    vector<User>& users;    // 사용자 리스트 참조

public:
    RegisterUI(ifstream& inStream, ofstream& outStream, vector<User>& users);  // 생성자: 입력 스트림, 출력 스트림, 사용자 리스트를 받아 초기화

    User startRegister();   // 회원가입을 시작하고 회원 객체를 반환
    void showResult(const User& user);  // 회원가입 결과를 출력
};
#endif