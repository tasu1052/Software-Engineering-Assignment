#include "ShowRentalBikeUI.h"

ShowRentalBikeUI::ShowRentalBikeUI(ifstream& inStream, ofstream& outStream, RentedBikeCollection& rentedCollection)
    : in(inStream), out(outStream), rentedCollection(rentedCollection) {}   // ������ ����: �Է� ��Ʈ��, ��� ��Ʈ��, �뿩�� ������ ����� �ʱ�ȭ

void ShowRentalBikeUI::startShow() {    // �뿩�� ������ ��� ��� �Լ� ����
    ShowRentalBike controller(out, rentedCollection);   // ��Ʈ�ѷ� ��ü ����
    controller.showRentalList();    // �뿩 ��� ���
}