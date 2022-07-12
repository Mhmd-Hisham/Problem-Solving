class MyCalendar:

    def __init__(self):
        self.events = []

    def book(self, start: int, end: int) -> bool:
        
        cant_book = lambda x, y, s, e: (x == s) or (s < x < e) or (s < y <= e)
        x, y = start, end
        for s, e in self.events:
            if cant_book(x, y, s, e) or \
               cant_book(s, e, x, y):
                return False
        self.events.append((start, end))
        return True
        


# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)