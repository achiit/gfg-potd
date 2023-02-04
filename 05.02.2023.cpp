class Solution
{
public:
    
    int intersectPoint(Node* head1, Node* head2){
  int lenA = 0, lenB = 0;
  Node *pA = head1, *pB = head2;
  
  // Get the length of list A
  while (pA != NULL) {
    lenA++;
    pA = pA->next;
  }
  
  // Get the length of list B
  while (pB != NULL) {
    lenB++;
    pB = pB->next;
  }
  
  // Reset pointers to heads of the lists
  pA = head1;
  pB = head2;
  
  // Move the pointer of the longer list ahead to align both lists
  int diff = abs(lenA - lenB);
  if (lenA > lenB) {
    for (int i = 0; i < diff; i++) {
      pA = pA->next;
    }
  } else {
    for (int i = 0; i < diff; i++) {
      pB = pB->next;
    }
  }
  
  // Find the intersection point
  while (pA != pB) {
    pA = pA->next;
    pB = pB->next;
  }
  
  return pA->data;
}
    
};
