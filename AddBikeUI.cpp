#include "AddBikeUI.h"

AddBikeUI::AddBikeUI(ifstream& inStream, ofstream& outStream)
    : in(inStream), out(outStream) {}   // ������: ���� �Է� ��Ʈ���� ��� ��Ʈ���� ��� ������ ����

void AddBikeUI::startAddBike(BikeCollection& bikeCollection) {  // ������ ����� ó���ϴ� �Լ�
    string id, name;
    in >> id >> name;   // 1. ����ڷκ��� ������ ID�� �̸��� �Է¹���

    AddBike controller(bikeCollection);
    controller.addBike(id, name);    // 2. AddBike ��Ʈ�ѷ��� ���� �����Ÿ� BikeCollection�� �߰�

    showResult(id, name);   // 3. ����� ���
}

void AddBikeUI::showResult(const string& id, const string& name) {  // ������ ��� ����� ����ϴ� �Լ�
    out << "3.1. ������ ���" << endl;
    out << "> " << id << " " << name << endl;
    out << endl;
}
