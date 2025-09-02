#pragma once
#ifndef REGISTER_H
#define REGISTER_H

#include <fstream>
#include <string>
#include <vector>
#include "User.h"
using namespace std;

class Register {    // 회원가입 기능을 담당하는 컨트롤 클래스
private:
    ifstream& in;   // 입력 스트림 참조
    vector<User>& users;  // 사용자 리스트 참조

public:
    Register(ifstream& inStream, vector<User>& users);  // 생성자: 입력 스트림과 사용자 리스트를 받아 초기화

    User memberInfoInput(); // 사용자 정보를 입력받고 User 객체 생성 후 리스트에 추가
};

#endif