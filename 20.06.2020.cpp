#include <iostream>
using namespace std;
//1
template < typename T >
void my_swap(T& first, T& second) { //T - тип, указанный в параметре шаблона
	T temp(first); //временная переменная должна быть того же типа, что и параметры
	first = second;
	second = temp;
}
//2

//3
template < typename T >
void choicesSort(int* arrayPtr, int length_array) { // сортировка выбором
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++) {
		int temp = arrayPtr[0]; // временная переменная для хранения значения перестановки
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++) {
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter]) {
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}
//4
//Функция будет принимать указатель на данные 
//и кол-во элементов массива данных
//Сам алгоритм сортировки можете посмотреть в Интернете.
//Никаких оптимизаций и проверок аргументов применять не будем, нам нужна просто демонстрация.    
template < typename ElementType > //Использовал class, но можно и typename - без разницы
void bubbleSort(ElementType* arr, size_t arrSize) {
	for (size_t i = 0; i < arrSize - 1; ++i)
		for (size_t j = 0; j < arrSize - 1; ++j)
			if (arr[j + 1] < arr[j])
				my_swap(arr[j], arr[j + 1]);
}
// вывод массива на экран
template < typename ElementType >
void out_array(const ElementType* arr, size_t arrSize) {
	for (size_t i = 0; i < arrSize; ++i)
		cout << arr[i] << ' ';
	cout << endl;
}
//5
//6
//7
//8

int main() {
	cout << "zavdannja N 1" << endl;
	int a = 5;
	int b = 10;
	my_swap(a, b);
	cout << a << " " << b << endl;
	my_swap(a, b);
	cout << a << " " << b << endl;
	double c = 77.89;
	double d = 54.22;
	cout << c << " " << d << endl;
	my_swap(c, d);
	cout << c << " " << d << endl;
	cout << "\nzavdannja N 3" << endl;
	const size_t n = 5;
	int arr1[n] = { 10 , 5 , 7 , 3 , 4 };
	double arr2[n] = { 7.62 , 5.56 , 38.0 , 56.0 , 9.0 };
	choicesSort(, )
	cout << "\nzavdannja N 4" << endl;
	const size_t n = 5;
	int arr1[n] = { 10 , 5 , 7 , 3 , 4 };
	double arr2[n] = { 7.62 , 5.56 , 38.0 , 56.0 , 9.0 };
	cout << "Source arrays:\n";
	out_array(arr1, n);
	out_array(arr2, n);
	cout << "Sorted arrays:\n";
	bubbleSort(arr1, n);
	bubbleSort(arr2, n);
	out_array(arr1, n);
	out_array(arr2, n);
	cout << "\nzavdannja N 5" << endl;

	cout << "\nzavdannja N 6" << endl;

	cout << "\nzavdannja N 7" << endl;

	cout << "\nzavdannja N 8" << endl;

	cout << "\nzavdannja N 3" << endl;

}