# Laba3HW

# Домашняя работа (Условие)
Написать и отладить программу вычисления силы тока по
известным значениям напряжения и сопротивления электрической
цепи.

# Алгоритм и блок-схема

1. Начало
   
2. Объявить переменные:

  I -> переменная для записи результата (сила тока)
  U -> напряжение
  R -> сопротивление
  
3. Получаем значения переменных U,R от пользователя:

4. Вычислить силу тока  по формуле I=U/R:

5. Записать ответ в переменную I:

  I = U / R;

6. Вывести результаты расчетов с подстановкой всех значений в текст.

7. Конец

# Блок-схема 

<img width="222" height="648" alt="image" src="https://github.com/user-attachments/assets/139cfbed-6db1-4b01-a1fa-1f10b6cc29d6" />

Ссылка на диаграмму - https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E3Zhdb5swFIZ%2FDZedjAmEXDYf7SatWtdM6rUbXKAzMXWcr%2F36HbAd7LKkyYTYVKmyzOtjY95zHkzqBZNidytImd3xhDIPo2TnBVMPYx9h7FV%2FKNkrJYqQElKRJzqoEeb5L2pmanWdJ3TlBErOmcxLV1zw5ZIupKMRIfjWDXvmzL1rSVLaEuYLwtrqY57ITKkxHjb6Z5qnmbmzH43USEFMsH6SVUYSvrWkYOYFE8G5VL1iN6GsMs%2F4oubdHBk9bEzQpTxngvz5kNz%2BuJ88Bi93r7Orh9W31%2B9XOjs0abnQLKulFV%2BLBT2xlomTe2NetexcX3IhM57yJWGzRh0Lvl4mtNohgqsm5ivnJYg%2BiC9Uyr0uDLKWHKRMFkyPHoyECqS8oFLsYQ%2BCMiLzjftMRJdCeog7TL3nOTwtRrpsg1AnURetHyJ3CUlESqWe1XgOHWsbjVRn4oKsnEiCZS5jAEFl4jbLJZ2XpM7OFjh0LYLCK%2BmX5QpAskzDaEPYWq%2Flgf2jadWOkQch8dD0oR3X7UxPokLSnbWntvmZxcNQG7dt2PEN2sZsNHDMHqDj6XKMvtTVQYe1HnzYWsc913pwTq3XJQxdiCKMUcZTQQpwpKQihw1Q8Xbsvhm4HI%2FnfEfNUXQcl7odYw1H1UKBKWJu6jasSUKmD%2B3E6k9NCzHjug09HDGwYJzkG%2Bimsr61kp5EZfwbESQn9C%2F4jP7AJ3b5xKN3XoadARp1CGj4YQENegY0PAdQ17p3iDvK0wEFdfzEdd%2B3DiEbnVgrGFlhsQmul9JDNqPX%2BmDrCZbW27QzWOIOYRn%2BK1jgY74u3hN7G%2FUC1aBnqIbHk%2FXfn3qK0mNnX9xCLrD62D3v1JShRbX9%2BdmmfdQXt62XbGfcjs7JfOff9tdWDqbW10nUmaHIdwwNUPwpPI3YGZbCZfMDWbHX%2FJshmP0G%3C%2Fdiagram%3E%3C%2Fmxfile%3E

# Реализация программы
```
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	float I,U,R;
	printf("Введите напряжение:\n");
	scanf_s("%d", &U);
	printf("Введите сопротивление:\n");
	scanf_s("%d", &R);
	I = U / R;
	printf("Сила тока равна %.2f А", I);
}
```

# Пример работы программы при вводе значений 10 и 4

Введите напряжение:

10

Введите сопротивление:

4

Сила тока равна 2.50 А

# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
