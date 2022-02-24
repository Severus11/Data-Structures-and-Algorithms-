

class MinStack:
    def __init__(self):
        self.q = []
        self.minEle =0
    
    def isEmpty(self):
        return False if len(self.q) else True
    
    def push(self, x):
        if self.isEmpty():
            self.q.append(x)
            self.minEle = x
        else:
            self.q.append(x)
            if x < self.minEle:
                self.minEle = x
    
    def pop(self):
        return self.q[-1]

    def getMin(self):
        return self.minEle


def main():
    st = MinStack()
    st.push(3)
    st.push(56)
    st.push(1)
    st.push(78)
    st.push(110)
    st.push(33)
    u = st.getMin()
    f = st.isEmpty()
    st.pop()

    print(u)

if __name__ == "__main__":
    main()



