<h1 align="center">Libft 42 Lisboa 📚 </h1>

```c
            /* ************************************************************************** */
            /*                                                                            */
            /*                                                        :::      ::::::::   */
            /*   Libft                                             :+:      :+:    :+:   */
            /*                                                    +:+ +:+         +:+     */
            /*   By: dbaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
            /*                                                +#+#+#+#+#+   +#+           */
            /*   Created: 2025/10/30 by dbaltaza                  #+#    #+#             */
            /*   Updated: 2025/10/30 by dbaltaza                 ###   ########.fr       */
            /*                                                                            */
            /* ************************************************************************** */
```

## 📋 Sobre o Projeto

Criação da tua própria biblioteca de funções C que será usada em projetos futuros.

**Nota Final:** 125/100

---

## 📊 Funções Implementadas

### Part 1 - Libc Functions (23/23)
Reimplementação de funções standard da libc.

`isalpha` `isdigit` `isalnum` `isascii` `isprint` `strlen` `memset` `bzero` `memcpy` `memmove` `strlcpy` `strlcat` `toupper` `tolower` `strchr` `strrchr` `strncmp` `memchr` `memcmp` `strnstr` `atoi` `calloc` `strdup`

### Part 2 - Additional Functions (11/11)
Funções úteis não presentes na libc.

`substr` `strjoin` `strtrim` `split` `itoa` `strmapi` `striteri` `putchar_fd` `putstr_fd` `putendl_fd` `putnbr_fd`

### Bonus - Linked Lists (9/9)
Manipulação de listas encadeadas.

`lstnew` `lstadd_front` `lstsize` `lstlast` `lstadd_back` `lstdelone` `lstclear` `lstiter` `lstmap`

---

## 🛠️ Compilação

```bash
make            # Compila a biblioteca
make bonus      # Compila com bonus
make clean      # Remove objetos
make fclean     # Remove tudo
make re         # Recompila
```

---

## 💡 Pontos Importantes

✅ Todas as funções passam na Norminette  
✅ Sem memory leaks (testado com valgrind)  
✅ Proteção de malloc em todas as alocações  
✅ Makefile não recompila ficheiros já compilados  
✅ Bonus só conta se mandatory perfeito

---

## 🧪 Como Testar

```bash
# Tripouille Tester
git clone https://github.com/Tripouille/libftTester.git
cd libftTester && make

# Verificar memory leaks
valgrind --leak-check=full ./your_test
```

---

**Made by:** dbaltaza  
**Campus:** 42 Lisboa  
**Year:** 2025
