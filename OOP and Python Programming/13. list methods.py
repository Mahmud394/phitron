""" 
list.append(x) -> Add an item to the end of the list
list.extend(iterable) -> Extend the list by appending all the items from the iterable
list.insert(i, x) -> Insert an item at a given position.
list.remove(x) -> Remove the first item from the list whose value is equal to x. 
list.pop([i]) -> Remove the item at the given position in the list
list.pop() -> remove the last item
list.clear() -> Remove all items from the list
list.index(x[, start[, end]]) ->
list.count(x) ->Return the number of times x appears in the list.
list.sort(*, key=None, reverse=False) -> Sort the items of the list in place 
list.reverse() ->Reverse the elements of the list in place.
list.copy() ->Return a shallow copy of the list. Similar to a[:].
"""

list = [34, 45, 6, 7, 3, 4, 2, 1, 56, 8]
list.append(69)
print(list)
list.insert(2, 67)
print(list)
if 67 in list:
    list.remove(67)
print(list)
last = list.pop()
print(last,list)
sorted = list.sort()
print(list)
list.reverse()
print(list)