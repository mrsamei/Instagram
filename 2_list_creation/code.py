example = []
for in in range(10) :
	example.append(i)


# Better way :
example = [i for i in range(10)]


# generating list from another list :
example_2 = [i**2 for i in example]