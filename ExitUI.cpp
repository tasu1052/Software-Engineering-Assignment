#include "ExitUI.h"

ExitUI::ExitUI(ofstream& outStream) : out(outStream) {} // ������ ����

void ExitUI::startExit() {
    Exit controller(out);   // ��Ʈ�ѷ� ��ü ����
    controller.exitProgram();   // ���� ��� ����
}
