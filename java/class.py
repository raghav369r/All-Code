class mobile:
	def __init__(self,brand,mod,pri,ra):
		self.brand=brand
		self.model=mod
		self.price=pri
		self.ram=ra
		self.rom=8
	def display(self):
		print("Mobile Brand= ",self.brand)
		print("Mobile Model= ",self.model)
		print("Mobile price= ",self.price)
		print("Mobile RAM= ",self.ram)
		print("Mobile ROM= ",self.rom)
oneplus=mobile("One Plus","Nord 2",300000,128)
oneplus.display()
