// ������� ���� ������� ( ����) � ��������� �����
#include<iostream>
#include<stdio.h>

using namespace std;
float global = 12.12;

void char_messege(const char array[])// ����� ����� ��������� ����� ������ ������ 
{
    printf("%s\n", array);
}
float multiply(float x, float y) {
    float temp = x * y;
    return temp;
}
int recursiv(int i) {
    if (i < 10) return 1;// ����� ��� �� ������� ����� � �������������� ��������� ��� ���� ������� 
    return i + recursiv(i / 2);



    return recursiv(i);

}// ������� ������� ���� ����� ���� ����������� ����� i 
void zamena(int x, int y)
{
    int temp;// ��������� var shi see ������ in ������� ������ shi using not
    temp = x;
    x = y;
    y = temp;
    cout << x << "\t" << y << "\n" << endl;
}
inline void char_messege(const char)
{
}
// �������� ������� ������� ������ ������� ��������� int

