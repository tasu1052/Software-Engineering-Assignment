#include "RegisterUI.h"

RegisterUI::RegisterUI(ifstream& inStream, ofstream& outStream, vector<User>& users)
    : in(inStream), out(outStream), users(users) {} // RegisterUI 바운더리 클래스 생성자 구현

User RegisterUI::startRegister() {  // Register 컨트롤러를 통해 사용자 정보를 입력받고 User 객체 반환
    Register controller(in, users);
    User newUser = controller.memberInfoInput();
    showResult(newUser);
    return newUser;
}

void RegisterUI::showResult(const User& user) { // 사용자 가입 결과를 출력 파일에 작성
    out << "1.1. 회원가입" << endl;
    out << "> " << user.getId() << " " << user.getPassword() << " " << user.getPhoneNumber() << endl;
    out << endl;
}