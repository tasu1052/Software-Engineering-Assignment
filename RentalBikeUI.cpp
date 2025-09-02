#include "RentalBikeUI.h"
#include "RentalBike.h"

RentalBikeUI::RentalBikeUI(ifstream& inStream, ofstream& outStream,
    BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection)
    : in(inStream), out(outStream), bikeCollection(bikeCollection), rentedCollection(rentedCollection) {}   // RentalBikeUI Ŭ���� ������ ����

void RentalBikeUI::startRental() {  // �Է¿��� ������ ID�� �޾� �뿩�� ó���ϰ� ��� ���
    string bikeId;
    in >> bikeId;

    RentalBike rentalCtrl(bikeCollection, rentedCollection);
    bool success = rentalCtrl.isrentBike(bikeId);

    showResult(bikeId); //��� ��� �Լ� ȣ��
}

void RentalBikeUI::showResult(const string& bikeId) {   // ����� ����ϴ� �޼��� ����
    out << "4.1. ������ �뿩" << endl;
    out << "> " << bikeId << endl;
    out << endl;
}