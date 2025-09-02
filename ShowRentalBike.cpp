#include "ShowRentalBike.h"

ShowRentalBike::ShowRentalBike(ofstream& outStream, RentedBikeCollection& rentedCollection)
    : out(outStream), rentedCollection(rentedCollection) {} // ������ ����: ��� ��Ʈ���� �뿩�� ������ ����� �ʱ�ȭ

void ShowRentalBike::showRentalList() { // �뿩�� ������ ����� ����ϴ� �Լ� ����
    out << "5.1. ������ �뿩 ����Ʈ" << endl;

    rentedCollection.findFirst();   // ����� ó������ ��ȸ

    RentedBike bike("", "");    // ��ȸ�� ����� �ӽ� RentedBike ��ü ����
    while (rentedCollection.isgetNext(bike)) {  // ���� �����Ű� ���� ������ �ݺ�
        out << "> " << bike.getId() << " " << bike.getName() << endl;   // ������ ���� ���
    }

    out << endl;
}