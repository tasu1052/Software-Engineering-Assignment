#include "Register.h"

Register::Register(ifstream& inStream, vector<User>& users)
    : in(inStream), users(users) {} // Register 클래스 생성자 구현

User Register::memberInfoInput() {  // 사용자 ID, 비밀번호, 전화번호를 입력받아 User 객체 생성 및 리스트에 추가
    string id, pw, pn;
    in >> id >> pw >> pn;

    User newUser(id, pw, pn);   // User 인스턴스 생성
    users.push_back(newUser);   // User 목록에 추가

    return newUser;
}