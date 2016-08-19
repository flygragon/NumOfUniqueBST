// NumOfUniqueBST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"NumOfUniqueBST.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	NumOfUniqueBST NUBST;
	cout << NUBST.numOfBSTs(n) << '\n';
    return 0;
}

