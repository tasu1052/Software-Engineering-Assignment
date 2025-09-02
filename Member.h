#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {  // ������ ������ ��� ��ƼƼ Ŭ����
protected:
    string id;  // ������ ID
    string password;    // ������ ��й�ȣ

public:
    Member(const string& id, const string& password)
        : id(id), password(password) {} //������ ������

    string getId() const { return id; } // ȸ�� ID ��ȯ �޼���
    string getPassword() const { return password; } // ȸ�� ��й�ȣ ��ȯ �޼���
};
#endif