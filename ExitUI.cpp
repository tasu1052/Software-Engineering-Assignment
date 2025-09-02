#include "ExitUI.h"

ExitUI::ExitUI(ofstream& outStream) : out(outStream) {} // 생성자 구현

void ExitUI::startExit() {
    Exit controller(out);   // 컨트롤러 객체 생성
    controller.exitProgram();   // 종료 기능 실행
}
