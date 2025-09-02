#pragma once
#ifndef USER_H
#define USER_H
#include "Member.h"
#include <string>
using namespace std;
class User : public Member {    // 회원의 정보를 담은 엔티티 클래스
private:    // Member 클래스를 상속하고, 전화번호 필드를 추가로 가짐
    string phoneNumber; // 회원의 전화번호

public:
    User(const string& id, const string& password, const string& phoneNumber)
        : Member(id, password), phoneNumber(phoneNumber) {} //회원 생성자

    string getPhoneNumber() const { return phoneNumber; }   //전화번호 반환 메서드 선언
};
#endif