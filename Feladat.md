# Feladat

Adott egy gyökerezett fa, amely $n$ csúcsot tartalmaz. A csúcsokat $1, 2, ..., n$ számokkal azonosítjuk, ahol az 1-es csúcs a gyökér. Minden csúcsnak van egy értéke.

A feladatod az alábbi típusú lekérdezések feldolgozása:

1. A csúcs értékének módosítása: A $s$ csúcs értékét módosítsuk $x$-re.
2. A csúcs al-fája értékeinek összege: Kiszámítjuk a $s$ csúcs al-fájában található csúcsok értékeinek összegét.

## Input

- Az első sor két egész számot tartalmaz: $n$ (a csúcsok száma) és $q$ (a lekérdezések száma).
- A második sor $n$ egész számot tartalmaz: $v_1, v_2, ..., v_n$, amelyek a csúcsok értékei.
- A következő $n-1$ sorban két-két számot találsz: $a$ és $b$, amelyek azt jelentik, hogy van egy él a $a$ és $b$ csúcs között.
- Az utolsó $q$ sorban következnek a lekérdezések. Minden lekérdezés kétféle formátumban lehet:
    - `1 s x`: A $s$ csúcs értékét módosítani kell $x$-re.
    - `2 s`: A $s$ csúcs al-fájának értékeinek összegét kell kiszámítani.

## Output

- Minden `2 s` típusú lekérdezéshez írjuk ki a $s$ csúcs al-fájában lévő csúcsok értékeinek összegét.

## Constraints

- $1 \le n, q \le 2 \cdot 10^5$
- $1 \le a, b, s \le n$
- $1 \le v_i, x \le 10^9$
