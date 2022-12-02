/* if (n == 0 || head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int length = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        length++;
    }
    temp->next = head;
    int i = length - n;
    temp = head;
    while (i > 1 && temp != NULL)
    {
        temp = temp->next;
        i--;
    }
    Node *newHead = temp->next;
    temp->next = NULL;
    return newHead;
    */