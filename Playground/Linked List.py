class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def printList(self):
        if self.head is None:
            print("List is Empty.")
        
        currentNode = self.head
        while True:
            if currentNode is None:
                break
            print(currentNode.data)
            currentNode = currentNode.next
    
    def insertEnd(self, newNode):
        if self.head is None:
            self.head = newNode
        else:
            lastNode = self.head
            while True:
                if lastNode.next is None:
                    break
                lastNode = lastNode.next
            lastNode.next = newNode
    
    def insertAt(self, newNode, position):
        currentNode = self.head
        currentPosition = 0

        while True:
            if currentPosition == position:
                previousNode.next = newNode
                newNode.next = currentNode
                break
            previousNode = currentNode
            currentNode = currentNode.next
            currentPosition+=1
    
    def insertHead(self, newNode):
        temp = self.head
        self.head = newNode
        self.head.next = temp
        del temp


        
nodeA = Node("A")
nodeB = Node("B")
nodeC = Node("C")
nodeD = Node("D")

linkedList = LinkedList()

linkedList.insertEnd(nodeB)
# linkedList.insertEnd(nodeC)
linkedList.insertEnd(nodeD)

linkedList.insertHead(nodeA)

linkedList.insertAt(nodeC, 2)

linkedList.printList()