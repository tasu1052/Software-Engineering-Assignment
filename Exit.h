#pragma once
#ifndef EXIT_H
#define EXIT_H

#include <fstream>
using namespace std;

class Exit {    // Exit 클래스: 프로그램 종료 기능을 수행하는 컨트롤러 클래스
private:
    ofstream& out;  // 출력 스트림 참조

public:
    Exit(ofstream& outStream);  // 생성자: 출력 스트림 참조를 초기화
    void exitProgram(); // 프로그램 종료 처리를 수행하는 메서드 선언
};
#endif