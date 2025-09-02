#include "RentalBike.h"

RentalBike::RentalBike(BikeCollection& bikeCollection, RentedBikeCollection& rentedCollection)
    : bikeCollection(bikeCollection), rentedCollection(rentedCollection) {} // RentalBike Ŭ���� ������ ����

bool RentalBike::isrentBike(const string& bikeId) { // ������ ID�� �������� �뿩 ���� ���� Ȯ�� �� �뿩 ó��
    Bike* bike = bikeCollection.findFirst();    // ù �����ź��� ����
    while (bike != nullptr) {
        if (bike->getId() == bikeId) {
            rentedCollection.addRentedBike(RentedBike(bike->getId(), bike->getName()));
            return true;
        }
        bike = bikeCollection.getNext();    // ���� �����ŷ� �̵�
    }
    return false;    // �ش� ID�� �����Ű� ����
}