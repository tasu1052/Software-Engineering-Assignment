// ��� ����
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

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();  // ����� ����� ó���ϴ� ���� �Լ�

// ���� ��Ʈ�� ���� ����
ifstream in_fp; // �Է� ���� ��Ʈ��
ofstream out_fp;    // ��� ���� ��Ʈ��

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    //cout << "���� ���� ���� ����: " << in_fp.is_open() << endl;
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();   // ����� ��� ó��

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()   // ����� ����� �а� �ش� �۾��� �����ϴ� �Լ�
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;     // ���α׷� ���� ���� �÷���

    vector<User> users; // �Ϲ� ����� ���
    vector<Manager> managers;   // ������ ���
    BikeCollection bikeCollection;  // ��ϵ� ������ ���
    RentedBikeCollection rentedCollection;  // �뿩�� ������ ���
    User* currentUser = nullptr;    // ���� �α��ε� �����
    Manager* currentManager = nullptr;  // ���� �α��ε� ������

    managers.push_back(Manager("admin", "admin"));  //������ ���

    // �ٿ���� Ŭ���� ��ü ����
    RegisterUI registerUI(in_fp, out_fp, users);    // ȸ������ �ٿ���� Ŭ����
    LoginUI loginUI(in_fp, out_fp, users, managers, currentUser, currentManager);   // �α��� �ٿ���� Ŭ���� 
    LogoutUI logoutUI(out_fp, currentUser, currentManager); // �α׾ƿ� �ٿ���� Ŭ����
    AddBikeUI addBikeUI(in_fp, out_fp); // ������ ��� �ٿ���� Ŭ����
    RentalBikeUI rentalBikeUI(in_fp, out_fp, bikeCollection, rentedCollection); // ������ �뿩 �ٿ���� Ŭ����
    ShowRentalBikeUI showRentalBikeUI(in_fp, out_fp, rentedCollection); // �뿩 ������ ��� ��� �ٿ���� Ŭ����
    ExitUI exitUI(out_fp);  // ���� �ٿ���� Ŭ����

    while (!is_program_exit)    // ���� ��� ����
    {
        in_fp >> menu_level_1 >> menu_level_2;  // �Է����Ͽ��� �޴� ���� 2���� �б�

        switch (menu_level_1)   // �޴� ����
        {
            case 1:                //ȸ������
            {
                switch (menu_level_2)
                {
                    case 1:   // "1.1. ȸ������
                    {    // �ش� ��� ���� 
                        User newUser = registerUI.startRegister();  // ����� ���� �Է¹ޱ�
                        break;
                    }
                }
                break;
            }

            case 2: // �α��� / �α׾ƿ� 
            {
                switch (menu_level_2)
                {
                    case 1: // 2.1 �α���
                    {
                        loginUI.startLogin();   // �α��� �õ�
                        break;
                    }
                    case 2: // 2.2 �α׾ƿ�
                    {
                        logoutUI.startLogout(); // �α׾ƿ� �õ�
                        break;
                    }
                }
                break;
            }

            case 3: // ������ ���
            {
                switch(menu_level_2)
                {
                    case 1: // 3.1 ������ ���
                    {
                        addBikeUI.startAddBike(bikeCollection); // ������ ���
                        break;
                    }
                }
                break;
            }

            case 4: // ������ �뿩
            {
                switch (menu_level_2)
                {
                    case 1: // 4.1 ������ �뿩
                    {
                        rentalBikeUI.startRental(); // ������ �뿩 ��û
                        break;
                    }
                }
                break;
            }

            case 5: // �뿩 ������ ����Ʈ ��ȸ
            {
                switch (menu_level_2)
                {
                    case 1 :    // 5.1 �뿩 ������ ����Ʈ ��ȸ
                    {
                        showRentalBikeUI.startShow();    // �뿩 ������ ����Ʈ ���
                        break;
                    }
                }
                break;
            }

            case 6:               //�ý��� ����
            {
                switch (menu_level_2)
                {
                    case 1:   // 6.1. ����
                    {
                        exitUI.startExit(); // ���� �޽��� ���
                        is_program_exit = 1;    // ���� Ż��
                        break;
                    }
                }
                break;
            }

        }
    }
}