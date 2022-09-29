class Node:
    def __init__(self,data,next):
        self.data=data
        self.next=next

class LinkList:
    def __init__(self):
        self.head=None

    def insert_at_beg(self,data):
        node=Node(data,self.head)
        self.head=node

    def insert_at_end(self,data):
        if self.head is None:
            self.head=Node(data,None)
            return

        itr=self.head
        while(itr.next):
            itr=itr.next
        itr.next=Node(data,None)

    def print(self):
        if self.head is None:
            print("Empty")
            return

        itr=self.head
        llstr= ''
        while(itr!=None):
            llstr+=str(itr.data)+ ' '
            itr=itr.next
        print(llstr)

    def middle_element(self):
        slow=self.head
        fast=self.head
        while(fast is not None and fast.next is not None):
            fast=fast.next.next
            slow=slow.next
        print(slow.data)

if __name__ == '__main__':
    ll=LinkList()
    ll.insert_at_beg(45)
    ll.insert_at_beg(15)
    ll.insert_at_end(25)
    ll.insert_at_end(7)
    ll.insert_at_end(5)
    ll.insert_at_end(50)
    ll.print()
    ll.middle_element()
