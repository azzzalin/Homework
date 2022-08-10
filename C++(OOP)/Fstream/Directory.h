#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "Abonent.h"

using namespace std;

class Directory
{
private:
 vector<Abonent> abonents;
public:
 Directory(Abonent& _abonents) 
 {
  abonents.push_back(_abonents);
  WriteToFile(_abonents);
 }

void AddAbonent(Abonent& _abonents) 
{
  abonents.push_back(_abonents);
  WriteToFile(_abonents);
}

 Abonent FindByName(const string data)
{
  for (vector<Abonent>::iterator index = abonents.begin(); index != abonents.end(); index++) 
  {
   if (index->GetFirmName() == data)
    {
       Abonent tmp(*index);
       return tmp;
   }
  }
 }

 Abonent FindByOwner(const string data) 
 {
    
  for (vector<Abonent>::iterator index = abonents.begin(); index != abonents.end(); index++) 
  {
   if (index->GetOwnerName() == data)
    {
       Abonent tmp(*index);
       return tmp;
   }
  }
 }

 Abonent FindByNumber(const string data) 
 {
  for (vector<Abonent>::iterator index = abonents.begin(); index != abonents.end(); index++) 
  {
   if (index->GetPhone() == data)
    {
       Abonent tmp(*index);
       return tmp;
   }
  }
 }

 Abonent FindByCareer(const string data)
 {
  for (vector<Abonent>::iterator index = abonents.begin(); index != abonents.end(); index++) 
  {
   if (index->GetCareer() == data)
    {
       Abonent tmp(*index);
       return tmp;
   }
  }
 }

 void WriteToFile(Abonent& _abonents) 
 {

  ofstream dir_file;
  dir_file.open("dir_file.txt", ofstream::app);
  if (!dir_file.is_open()) {
   cout << "Ошибка записи данных в файл." << endl;
  }
  else {
   dir_file.write((char*)&_abonents, sizeof(Abonent));
  }
  dir_file.close();
 }
  void PrintAll() 
  {
        for (vector<Abonent>::iterator index = abonents.begin(); index != abonents.end(); index++) 
        {
            cout << index->GetFirmName() << endl;
            cout << index->GetOwnerName() << endl;
            cout << index->GetPhone() << endl;
            cout << index->GetCareer() << endl;
        }

    }

};
