# python 3
# 題目: https://www.tqc.org.tw/user/Example/B973D99B-4C85-44B2-9133-BD34827395B4.pdf

class PYA01:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA01.py"
	def run(self, value):
		print("\noutput:")
		for i in [0, 2]:
			print(f"|%7.2f  %7.2f|" %(value[0+i], value[1+i]))
		for i in [0, 2]:
			print(f"|%-7.2f  %-7.2f|" %(value[0+i], value[1+i]))
	def start(self):
		va = []
		print("please input 4 value:")
		for i in range(4):
			va.append(float(input(f"{(i+1)}.> ")))
		self.run(va)

class PYA02:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA02.py"
	def run(self, value):
		flag = [0, 0]
		if value % 3 == 0:
			flag[0] = 1
		if value % 5 == 0:
			flag[1] = 1
		if flag[0] == 0 and flag[1] == 0:
			print(f"{value} is not a multiple of 3 or 5.")
		elif flag[0] == 1 and flag[1] == 1:
			print(f"{value} is a multiple of 3 and 5.")
		elif flag[0] == 1 or flag[1] == 1:
			print(f"{value} is a multiple of {str(3) if flag[0] == 1 else str(5)}.")
	def start(self):
		print("please input a value in integer")
		self.run(int(input("> ")))
		
class PYA03:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA03.py"
	def run(self, value):
		sum = 0
		for i in range(value[0], value[1]+1):
			if i % 2 == 0:
				sum += i
		print(f"{sum}")
	def start(self):
		va = []
		print("plaese input 2 integer:")
		for i in [0, 1]:
			va.append(int(input("> ")))
		self.run(va)

class PYA04:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA04.py"
	def run(self):
		value = []
		print("please input value:")
		while True:
			i = int(input("> "))
			value.append(i)
			if i == 9999:
				break
		print(self.min(value))
	def min(self, value):
		min = 9999
		for i in range(len(value)):
			if min > value[i]:
				min = value[i]
		return min
	def start(self):
		self.run()

class PYA05:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA05.py"
	def run(self):
		print("plaese input 2 value:")
		value = []
		for i in [0, 1]:
			value.append(int(input("> ")))
		print(self.compute(value[0], value[1]))
	def compute(self, x, y):
		return x * y
	def start(self):
		self.run()

class PYA06:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA06.py"
	def run(self, value):
		sum = 0
		for i in range(len(value)):
			sum += self.cardReader(value[i])
		print(sum)
	def cardReader(self, card):
		for i in range(2, 11):
			if str(i).find(card) != -1:
				return i
		if card.find("A") != -1:
			return 1
		elif card.find("J") != -1:
			return 11
		elif card.find("Q") != -1:
			return 12
		elif card.find("K") != -1:
			return 13
	def start(self):
		va = []
		print("plaese input 5 card:")
		for i in range(5):
			va.append(str(input("> ")))
		self.run(va)

class PYA07:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA07.py"
	def run(self, value):
		Str = ""
		for i in range(len(value)):
			Str += f"{value[i]}, "
		print(f"Combined tuple before sorting: ({Str[:-2]})")
		value = self.bubble(value)
		Str = ""
		for i in range(len(value)):
			Str += f"{value[i]}, "
		print(f"Combined list after sorting: [{Str[:-2]}]")
	def bubble(self, value):
		for i in range(len(value)):
			for o in range(i):
				if value[o] > value[o+1]:
					value[o], value[o+1] = value[o+1], value[o]
		return value
	def start(self):
		va = []
		for o in [1, 2]:
			print(f"Create tuple{o}:")
			while True:
				i = int(input("> "))
				if i == -9999:
					break
				va.append(i)
		self.run(va)

class PYA08:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA08.py"
	def run(self, value):
		sum = 0
		for i in range(len(value)):
			print(f"ASCII code for '{value[i]}' is {ord(value[i])}")
			sum += ord(value[i])
		print(sum)
	def start(self):
		print("please input a String:")
		Str = input("> ")
		self.run(Str)

class PYA09:
	def __init__(self):
		pass
	def __str__(self):
		return "PYA09.py"
	def run(self, value):
		sum = 0
		for i in range(len(value)):
			sum += int(value[i])
		print(sum)
	def start(self):
		with open("read.txt", "r", encoding="utf-8") as f:
			self.run(f.read().split(" "))

if __name__ == "__main__":
	py = PYA01()
	py.start()
	py = PYA02()
	py.start()
	py = PYA03()
	py.start()
	py = PYA04()
	py.start()
	py = PYA05()
	py.start()
	py = PYA06()
	py.start()
	py = PYA07()
	py.start()
	py = PYA08()
	py.start()
	py = PYA09()
	py.start()

