#pragma once
#ifndef EXITUI_H
#define EXITUI_H

#include <fstream>
#include "Exit.h"

using namespace std;

class ExitUI {  // ExitUI Ŭ����: ����ڷκ��� ���� ����� �޾� ��Ʈ�ѷ��� �����ϴ� UI Ŭ����
private:
    ofstream& out;  // ��� ��Ʈ�� ����

public:
    ExitUI(ofstream& outStream);    // ������: ��� ��Ʈ���� �ʱ�ȭ
    void startExit();   // ���� ����� �����ϴ� UI �޼���
};

#endif