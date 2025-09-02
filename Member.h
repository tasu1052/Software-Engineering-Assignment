#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {  // 가입자 정보를 담는 엔티티 클래스
protected:
    string id;  // 가입자 ID
    string password;    // 가입자 비밀번호

public:
    Member(const string& id, const string& password)
        : id(id), password(password) {} //가입자 생성자

    string getId() const { return id; } // 회원 ID 반환 메서드
    string getPassword() const { return password; } // 회원 비밀번호 반환 메서드
};
#endif