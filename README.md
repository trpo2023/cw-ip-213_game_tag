# Курсовой проект "Пятнашки"
Игра головоломка "Пятнашки". Представляет из себя квадратное поле с цифрами внутри, которые можно перемещать. Внутри этого поля 15 цифр расположенных в случайном порядке и 1 пустая ячейка, в которую можно сдвигать одну из ближайщих цифр. 

Цель игры – упорядочивание цифр по порядку с пустой ячейкой в конце. 

## Сценарии использования:
- Начало новой игры со случайно расставленными цифрами на поле
- Перемещение цифр на пустую клетку с целью правильного составления чисел от 1 до 15
- Проверка правильности расположения костяшек

## Формат входных данных:
- Входные данные для игры "Пятнашки" - это случайное расположение чисел на поле 4x4.
- Команды пользователя вводятся в виде букв для движения

## Интерфейс приложения:
Приложение работает в интерактивном режиме и не имеет графического интерфейса. 

- Для сборки и компиляции файлов: make

- Запуск игры: ./tag (через папку bin)

- Запуск теста: ./tag-s (через папку bin)

- Для компиляции теста: make test

Взаимодействие с пользователем осуществляется через консольное приложение, в котором он может задать действия, используя кнопки W, A, S, D + Enter на клавиатуре.

## Чтение исходных данных извне программы:
Игра "Пятнашки" на языке C не предполагает чтение исходных данных извне программы, поэтому конфигурационный файл или протокол взаимодействия не требуется.

## Авторы:
- [Юданов Олег ИП-213](https://github.com/Oleg257)
- [Вараксин Иван ИП-213](https://github.com/VanyaVAR)
