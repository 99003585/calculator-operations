src = calculator.cpp test_calculator.cpp
project = target
target: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: $(project)
	./$^