#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include "Member.h"
using namespace std;
class Manager : public Member { //관리자 정보를 담은 엔티티 클래스
public: // Member 클래스를 상속받아 ID와 비밀번호 가짐
    Manager(const string& id, const string& password)
        : Member(id, password) {}   //관리자 생성자
};
#endif