#include "Exit.h"

Exit::Exit(ofstream& outStream) : out(outStream) {} // ������ ����

void Exit::exitProgram() {  // ���α׷� ���� �޽����� ���
    out << "6.1. ����" << endl;
    out << endl;
}
