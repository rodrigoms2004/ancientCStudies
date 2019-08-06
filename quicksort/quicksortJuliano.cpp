//
//  Quick Sort
//  AED2
//
//  Created by Juliano-Mac on 04/07/14.
//  Copyright (c) 2014 AGameEngine. All rights reserved.

#include <vector>
#include <iostream>

using namespace std;

void printList(vector<int> listToPrint)
{
   
for (int i = 0; i < listToPrint.size(); i++)
{
       cout << listToPrint[i] << " ";
}
   cout << endl;
}

vector<int> partition(vector<int> list, int esq, int dir, int* returni, int *returnj)
{
   int x, w;
   int i = esq;
   int j = dir;
   
   x = (i + j) / 2;
   do {
       while (list[x] > list[i]) {
           i++;
       }
       while (list[x] < list[j]) {
           j--;
       }
       if (i <= j) {
           w = list[i];
           list[i] = list[j];
           list[j] = w;
           i++;
           j--;
       }
   } while (!(i > j));
   
   *returni = i;
   *returnj = j;
   return list;
}

vector<int> sort(vector<int> list, int leftIndex, int rightIndex, int k)
{
   int* auxi = new int;
   int* auxj = new int;
   
   list = partition(list, leftIndex, rightIndex, auxi, auxj);

   int i = *auxi;
   int j = *auxj;
   
//    Quicksort nao parcial
//    if (leftIndex < j) {
//        list = sort(list, leftIndex, j, k);
//    }
//    if (i < rightIndex) {
//        list = sort(list, i, rightIndex, k);
//    }
   if ((j - leftIndex) >= (k - 1)) {
       if (leftIndex < j) {
           list = sort(list, leftIndex, j, k);
       }
   }
   else {
       if (leftIndex < j) {
           list = sort(list, leftIndex, j, k);
       }
       if (i < rightIndex) {
           list = sort(list, i, rightIndex, k);
       }
   }
   
   return list;
}

vector<int> partialQuickSort (vector<int> sortList, int k)
{
   return sort(sortList, 0, sortList.size() - 1, k);;
}

int main ()
{
   int n;

   cout << "Digite K:" << endl;
   int k;
   
   cin >> k;
   
   cout << "Digite a lista, termine de digitar e use algum caracter não número: " << endl;
   
   vector<int> listToSort;
   
   while (cin >> n) {
       listToSort.push_back(n);
   }

   cout << "Lista não ordenada: " << endl;
   printList(listToSort);
   
   cout << "Lista  ordenada: " << endl;
   printList(partialQuickSort(listToSort, k));


   return 0;
}
