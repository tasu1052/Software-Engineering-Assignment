// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <fstream>
#include "RegisterUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "AddBikeUI.h"
#include "RentalBikeUI.h"
#include "ShowRentalBikeUI.h"
#include "ExitUI.h"
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();  // 사용자 명령을 처리하는 메인 함수

// 파일 스트림 변수 선언
ifstream in_fp; // 입력 파일 스트림
ofstream out_fp;    // 출력 파일 스트림

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    //cout << "파일 열기 성공 여부: " << in_fp.is_open() << endl;
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();   // 사용자 명령 처리

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()   // 사용자 명령을 읽고 해당 작업을 실행하는 함수
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;     // 프로그램 종료 여부 플래그

    vector<User> users; // 일반 사용자 목록
    vector<Manager> managers;   // 관리자 목록
    BikeCollection bikeCollection;  // 등록된 자전거 목록
    RentedBikeCollection rentedCollection;  // 대여된 자전거 목록
    User* currentUser = nullptr;    // 현재 로그인된 사용자
    Manager* currentManager = nullptr;  // 현재 로그인된 관리자

    managers.push_back(Manager("admin", "admin"));  //관리자 등록

    // 바운더리 클래스 객체 생성
    RegisterUI registerUI(in_fp, out_fp, users);    // 회원가입 바운더리 클래스
    LoginUI loginUI(in_fp, out_fp, users, managers, currentUser, currentManager);   // 로그인 바운더리 클래스 
    LogoutUI logoutUI(out_fp, currentUser, currentManager); // 로그아웃 바운더리 클래스
    AddBikeUI addBikeUI(in_fp, out_fp); // 자전거 등록 바운더리 클래스
    RentalBikeUI rentalBikeUI(in_fp, out_fp, bikeCollection, rentedCollection); // 자전거 대여 바운더리 클래스
    ShowRentalBikeUI showRentalBikeUI(in_fp, out_fp, rentedCollection); // 대여 자전거 목록 출력 바운더리 클래스
    ExitUI exitUI(out_fp);  // 종료 바운더리 클래스

    while (!is_program_exit)    // 메인 명령 루프
    {
        in_fp >> menu_level_1 >> menu_level_2;  // 입력파일에서 메뉴 숫자 2개를 읽기

        switch (menu_level_1)   // 메뉴 구분
        {
            case 1:                //회원가입
            {
                switch (menu_level_2)
                {
                    case 1:   // "1.1. 회원가입
                    {    // 해당 기능 수행 
                        User newUser = registerUI.startRegister();  // 사용자 정보 입력받기
                        break;
                    }
                }
                break;
            }

            case 2: // 로그인 / 로그아웃 
            {
                switch (menu_level_2)
                {
                    case 1: // 2.1 로그인
                    {
                        loginUI.startLogin();   // 로그인 시도
                        break;
                    }
                    case 2: // 2.2 로그아웃
                    {
                        logoutUI.startLogout(); // 로그아웃 시도
                        break;
                    }
                }
                break;
            }

            case 3: // 자전거 등록
            {
                switch(menu_level_2)
                {
                    case 1: // 3.1 자전거 등록
                    {
                        addBikeUI.startAddBike(bikeCollection); // 자전거 등록
                        break;
                    }
                }
                break;
            }

            case 4: // 자전거 대여
            {
                switch (menu_level_2)
                {
                    case 1: // 4.1 자전거 대여
                    {
                        rentalBikeUI.startRental(); // 자전거 대여 요청
                        break;
                    }
                }
                break;
            }

            case 5: // 대여 자전거 리스트 조회
            {
                switch (menu_level_2)
                {
                    case 1 :    // 5.1 대여 자전거 리스트 조회
                    {
                        showRentalBikeUI.startShow();    // 대여 자전거 리스트 출력
                        break;
                    }
                }
                break;
            }

            case 6:               //시스템 종료
            {
                switch (menu_level_2)
                {
                    case 1:   // 6.1. 종료
                    {
                        exitUI.startExit(); // 종료 메시지 출력
                        is_program_exit = 1;    // 루프 탈출
                        break;
                    }
                }
                break;
            }

        }
    }
}