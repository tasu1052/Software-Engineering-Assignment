#pragma once
#ifndef EXIT_H
#define EXIT_H

#include <fstream>
using namespace std;

class Exit {    // Exit Ŭ����: ���α׷� ���� ����� �����ϴ� ��Ʈ�ѷ� Ŭ����
private:
    ofstream& out;  // ��� ��Ʈ�� ����

public:
    Exit(ofstream& outStream);  // ������: ��� ��Ʈ�� ������ �ʱ�ȭ
    void exitProgram(); // ���α׷� ���� ó���� �����ϴ� �޼��� ����
};
#endif