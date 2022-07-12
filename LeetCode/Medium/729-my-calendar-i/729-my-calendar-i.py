class MyCalendar:

    def __init__(self):
        self.events = []

    def book(self, start: int, end: int) -> bool:
        cant_book = lambda x, y, s, e: (s <= x < e) or (s < y <= e)
        for s, e in self.events:
            if cant_book(start, end, s, e) or \
               cant_book(s, e, start, end):
                return False

        self.events.append((start, end))
        return True
        


# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)