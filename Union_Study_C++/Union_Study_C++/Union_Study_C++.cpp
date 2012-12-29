// Union_Study_C++.cpp : Defines the entry point for the console application.
//
// program name : study struct data with unio key
// writer       : Damme88_Phamtoanbonmat@gmail.com
// Compiler     : VC C++ 2010
// Time         : statuday - 23h48p - 22/12/2012.

#include "stdafx.h"


union IntegerData {
  int integer_;
  unsigned char ch_[2];
} Integer;

void main() {
  cout << "Enter Integer = ";
  cin >> Integer.integer_;
  cout << "low byte of Integer is : " <<Integer.ch_[0] <<endl;
  cout << "hight byte of Integer is : " << Integer.ch_[1] << endl;

  _getch();
}

// note
// theo nhu vi du o tren thi interger se la truong chiem 2 byte
// ch la mot mang co 2 phan tu - moi phan tu co size = 1byte
// do value cua integer khi truyen vao thi se duoc chia deu trong vung nho
// va do kieu data cau truc la union nen integer va ch la chung vung nho
// do do ch_[0] chiem 1 byte se the hien 1 byte du lieu dau cua integer 00h va la byte thap
// con ch_[1] se chiem 1 byte the hien 1 byte du lieu cuoi cua integer 00h va la byte cao
// vi du integer = 36 -> data dang nhi phan la 0000 0000 - 0010 0100