#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include "Member.h"
using namespace std;
class Manager : public Member { //������ ������ ���� ��ƼƼ Ŭ����
public: // Member Ŭ������ ��ӹ޾� ID�� ��й�ȣ ����
    Manager(const string& id, const string& password)
        : Member(id, password) {}   //������ ������
};
#endif