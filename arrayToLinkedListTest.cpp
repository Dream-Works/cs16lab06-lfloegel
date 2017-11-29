#include "linkedListFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveNums[5]={42,57,61,3,-8}; //transforms array into linked list

  LinkedList *list = arrayToLinkedList(fiveNums,5);
  assertEquals( "[42]->[57]->[61]->[3]->[-8]->null", //each number becomes its own node
		linkedListToString(list), //takes new linked list created from array in arrayToLinkedList and changes it into a string                       
		"linkedListToString(list)");
  
  freeLinkedList(list); //deletes linked list basically 
  
  int empty[0]={};
  LinkedList *emptyList = arrayToLinkedList(empty,0); //emptyList is bascially list 
  assertEquals( "null", 
		linkedListToString(emptyList),
		"linkedListToString(emptyList)");
   
  freeLinkedList(emptyList);

  int singleton[]={12};
  LinkedList *singletonList = arrayToLinkedList(singleton,1);
  assertEquals( "[12]->null", 
		linkedListToString(singletonList),
		"linkedListToString(singletonList)");

  freeLinkedList(singletonList);
  
  return 0;
}
