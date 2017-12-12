#ifndef __AISD_LIST__
#define __AISD_LIST__

#include <iostream>
using namespace std;

typedef int DataType;

struct Node
{
  DataType data;
  Node* next;
  // ����� ����� ���� ������������, ������, ���������� Node
};

class List
{
  // ����� ����
public:
  List() {};
  List(const List& list2);
  List& operator=(const List& list2);
  ~List() {};

  void InserToHead(const DataType& d); // �������� ������� d ������
  void InserToTail(const DataType& d); // �������� ������� d ���������
  void InsertAfter(Node* node, const DataType& d); // �������� ������� d ����� ����� node
  void Delete(const DataType& d); // ������� ����� �� ��������� data = d
  Node* Search(const DataType& d); // ����� ��������� �� ����� �� ��������� data = d
  void Clean(); // ������� ��� ������
  int GetSize(); // ������ ����� ������� � ������
  Node* GetHead(); // �������� ��������� �� ������ ����� ������

  void Inverse(); // ������������� ������, �.�. ������ ������ ���� � �������� �������
  List Merge(Node* node, const List& list2); // ������� ������3, ������� ������2 � ������� ������ ����� ��������� node  
  List Merge(const List& list2); // ������� ������3, ������� � ����� �������� ������ ������2

  friend ostream& operator<<(ostream& os, const List& l);
};

#endif