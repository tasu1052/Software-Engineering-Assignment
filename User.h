#pragma once
#ifndef USER_H
#define USER_H
#include "Member.h"
#include <string>
using namespace std;
class User : public Member {    // ȸ���� ������ ���� ��ƼƼ Ŭ����
private:    // Member Ŭ������ ����ϰ�, ��ȭ��ȣ �ʵ带 �߰��� ����
    string phoneNumber; // ȸ���� ��ȭ��ȣ

public:
    User(const string& id, const string& password, const string& phoneNumber)
        : Member(id, password), phoneNumber(phoneNumber) {} //ȸ�� ������

    string getPhoneNumber() const { return phoneNumber; }   //��ȭ��ȣ ��ȯ �޼��� ����
};
#endif