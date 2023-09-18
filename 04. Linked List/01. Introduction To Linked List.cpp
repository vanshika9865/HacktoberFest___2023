Question: You are given a array 'Arr' of size 'N' consisting of postive integer. Make a linkedlist from the array and return the head of linkedlist. 

Node* constructLL(vector<int>& arr) {
    Node* temp = new Node(arr[0]);
    Node *ans = temp;
    for(int i=1;i<arr.size();i++){
        Node *x = new Node(arr[i]);
        temp->next = x;
        temp = temp->next;
    }
    return ans;
}
