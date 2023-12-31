Тема 4 — Игра «100 спичек»
О проекте: Игра «100 спичек» — приложение, позволяющее вернуться в детство и вновь сыграть в любимую игру. Данная версия игры адаптирована как под операционную систему Windows, так и под Linux OS.
1)	Функциональность проекта.
Суть игры «100 спичек» заключается в том, что из кучки, первоначально содержащей 100 спичек, двое играющих поочередно берут по несколько спичек: не менее одной и не более десяти. Выигрывает тот, кто взял последнюю спичку. Игра построена на двух алгоритмах (с возможносью выбора режима): «Игрок против Игрока» и «Игрок против Компьютера».
2)	Формат входных данных.
Изначально пользователь выбирает, против кого он будет играть (игрока или компьютера). 
  2.1) Если выбран режим игры против игрока, то вводятся имена игроков, а далее предлагается выбор: кто будет ходить первым, а кто - вторым.
  2.2) Напротив, если выбран режим игры против компьютера, то вводится имя игрока, и он решает: будет ли компьютер ходить первым или вторым.
В обоих случаях поступает предложение: «сколько взять спичек?». В случае игры двух игроков каждый из них решает самостоятельно. А в случае игры с компьютером выбор делает только игрок, в то время как компьютер в зависимости от оставшихся спичек выбирает необходимое количество. 
3)	Интерфейс приложения.
Интерфейс приложения – консоль (она является как полем вывода, так и полем ввода входных данных). В приложении предусмотрен визуальный учёт количества спичек (после каждого хода количество спичек будет уменьшаться и выводиться на экран их количество в цифрах). При вводе некорректного числа у нас предусмотрено два случая:
  3.1) Если пользователь хочет взять больше спичек, чем осталось в кучке (например, в кучке 5 спичек, а игрок вводит 8), то на экран выводится сообщение: “Wrong amount. Please try again”;
  3.2) Если пользователь хочет взять больше спичек, чем предусмотрено правилами игры (например, 15 спичек), то на экран выводится сообщение: “The number entered is greater than required. Please try again”.
По итогу игры будет объявлен победитель и его имя.
