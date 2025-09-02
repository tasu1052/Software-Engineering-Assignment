#include "AddBikeUI.h"

AddBikeUI::AddBikeUI(ifstream& inStream, ofstream& outStream)
    : in(inStream), out(outStream) {}   // 생성자: 파일 입력 스트림과 출력 스트림을 멤버 변수에 저장

void AddBikeUI::startAddBike(BikeCollection& bikeCollection) {  // 자전거 등록을 처리하는 함수
    string id, name;
    in >> id >> name;   // 1. 사용자로부터 자전거 ID와 이름을 입력받음

    AddBike controller(bikeCollection);
    controller.addBike(id, name);    // 2. AddBike 컨트롤러를 통해 자전거를 BikeCollection에 추가

    showResult(id, name);   // 3. 결과를 출력
}

void AddBikeUI::showResult(const string& id, const string& name) {  // 자전거 등록 결과를 출력하는 함수
    out << "3.1. 자전거 등록" << endl;
    out << "> " << id << " " << name << endl;
    out << endl;
}
