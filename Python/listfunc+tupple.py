friends = ["rohan","devanshi","monty","sachin"]
nums = [23,34,12,24,13]
friends.extend(nums)
friends.append("its a number")
friends.insert(1, "sahib")
friends.remove("rohan")
friends.pop()
nums.sort()
print(nums)
print(friends)
print(friends.index("monty"))
print(friends.count("sachin"))
friends2 = friends
print(friends2)
friends.clear()
print(friends)