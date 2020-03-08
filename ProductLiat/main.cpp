#include "List.h"
#include "Product.h"
int main() {
	setlocale(0, "");
	List<Product> productlist;
	productlist.add(Product());
	productlist.add(Product("Хлеб", 20, Date(2000, 1, 1), 3));
	productlist.add(Product("Машинка", 1000, Date(2020, 1, 1), 60));

	//productlist.del(Product("Хлеб", 20, Date(2000, 1, 1), 3));
	productlist.show();

	 Node<Product>*   el = productlist.getHead();
	while (el!=NULL)
	{
		if (el->info.isExpired()){
			productlist.del(el->info);
			break;
		}
		el = el->next;
	}

	productlist.show();
	system("pause");
}