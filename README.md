# push_swap
Проект школы 21, в котором требуется реализовать сортировку двух стеков данным набором операций над стеками.
Операции:
1. sa (swap A)  - первый и второй элемент меняются местами, то есть второй элемент становится вершиной стека
2. sb (swap B)  - аналогично sa.
3. ss - sa и sb одновременно, при проверке считается за одну операцию.
4. pa (push A) - добавление элемента в стек А из стека В.
5. pb (push B) - аналогично pa.
6. ra (rotate A) - вершина стека А переносится в конец стека, второй элемент стека становится вершиной.
6. rb (rotate B) - аналогично ra.
7. rr - ra и rb одновременно, при проверке считается за одну операцию.
8. rra (reverse rotate A) - последний элемент стека А становится вершиной стека, первый элемент становится вторым.
9. rrb - аналогично rrb.
10. rrr - rra и rrb одновременно, при проверке считается за одну операцию.

## Выбор алгоритма сортировки
Для успешной сдачи проекта необходимо отсортировать стек А за наименьшее число шагов.
Для 100 и 500 элементов определены границы:
##### менее 700 и 5500 - 5 баллов,
##### менее 900 и 7000 - 4 балла,
##### менее 1100 и 8500 - 3 балла,
##### менее 1300 и 9000 - 2 балла,
##### менее 1500 и 10500 - 1 балл,
соответственно.

Поэтому, чтобы сдать на максимум баллов, надо выбирать алгоритмы со сложностью log2(n) * n или быстрее.

664 = log2(100) * 100; 

4482 = log2(500) * 500

## Алгоритм быстрой сортровки

