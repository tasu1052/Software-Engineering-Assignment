#include "AddBike.h"

AddBike::AddBike(BikeCollection& bikeCollection) : bikeCollection(bikeCollection) {}    // ������: BikeCollection ��ü ������ �ʱ�ȭ

void AddBike::addBike(const string& id, const string& name) {   // ������ ID�� �̸��� �޾� ���ο� Bike ��ü�� ����� BikeCollection�� �߰�
    Bike newBike(id, name);     // ���ο� ������ ��ü ����
    bikeCollection.addBike(newBike);    // �÷��ǿ� ������ �߰�
}
