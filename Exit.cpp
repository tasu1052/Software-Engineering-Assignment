#include "Exit.h"

Exit::Exit(ofstream& outStream) : out(outStream) {} // 생성자 구현

void Exit::exitProgram() {  // 프로그램 종료 메시지를 출력
    out << "6.1. 종료" << endl;
    out << endl;
}
