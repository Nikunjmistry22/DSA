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
        itr = self.head
        while (itr.next):
            itr = itr.next
        itr.next = Node(data, None)

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

    def nth_node_from_end(self,n):
        slow=self.head
        fast=self.head
        count=0
        if self.head is not None:
            while(count<n):
                if fast is None:
                    return
                fast=fast.next
                count+=1
        while(fast ):
            slow=slow.next
            fast=fast.next
        return slow.data

    def swap_last_first(self):
        first=self.head
        slow=self.head
        fast=self.head
        count=0
        while(fast.next and slow):
            fast=fast.next
            slow=slow.next
        temp=slow.data
        slow.data=first.data
        first.data=temp
        '''
        temp=slow.data
        slow.data=fast.data
        fast.val=temp'''
ll=LinkList()
ll.insert_at_beg(45)
ll.insert_at_end(4)
ll.insert_at_end(30)
ll.insert_at_end(48)
#ll.print()
#print(ll.nth_node_from_end(3))
ll.swap_last_first()
ll.print()