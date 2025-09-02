#pragma once
#ifndef EXITUI_H
#define EXITUI_H

#include <fstream>
#include "Exit.h"

using namespace std;

class ExitUI {  // ExitUI 클래스: 사용자로부터 종료 명령을 받아 컨트롤러에 전달하는 UI 클래스
private:
    ofstream& out;  // 출력 스트림 참조

public:
    ExitUI(ofstream& outStream);    // 생성자: 출력 스트림을 초기화
    void startExit();   // 종료 기능을 시작하는 UI 메서드
};

#endif