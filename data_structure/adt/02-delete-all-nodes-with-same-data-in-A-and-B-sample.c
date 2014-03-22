/* http://www.mian4.net/mianshiti/it/cpp/29387.html */
struct node {
	int		data;
	struct         *front, *next;
};
BOOL
DeteleNode(Node * pHeader, DataType Value)
{
	if (pHeader == NULL)
		return;
	BOOL		bRet = FALSE;
	Node           *pNode = pHead;
	while (pNode != NULL) {
		if (pNode->data == Value) {
			if (pNode->front == NULL) {
				pHeader = pNode->next;
				pHeader->front = NULL;
			} else {
				if (pNode->next != NULL) {
					pNode->next->front = pNode->front;
				}
				pNode->front->next = pNode->next;
			}
			Node           *pNextNode = pNode->next;
			delete		pNode;
			pNode = pNextNode;
			bRet = TRUE;
      //不要break或return, 删除所有
		} else {
			pNode = pNode->next;
		}
	}
	return bRet;
}
void
DE(Node * pHeadA, Node * pHeadB)
{
	if (pHeadA == NULL || pHeadB == NULL) {
		return;
	}
	Node           *pNode = pHeadA;
	while (pNode != NULL) {
		if (DeteleNode(pHeadB, pNode->data)) {
			if (pNode->front == NULL) {
				pHeadA = pNode->next;
				pHeadA->front = NULL;
			} else {
				pNode->front->next = pNode->next;
				if (pNode->next != NULL) {
					pNode->next->front = pNode->front;
				}
			}
			Node           *pNextNode = pNode->next;
			delete		pNode;
			pNode = pNextNode;
		} else {
			pNode = pNode->next;
		}
	}
}
