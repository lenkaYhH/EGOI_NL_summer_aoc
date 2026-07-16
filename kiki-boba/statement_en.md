# Kiki bouba

“Kiki” and “bouba” form a fascinating sound-symbolic connection, where people spontaneously associate sharp sounds like “kiki” with jagged shapes and softer sounds like “bouba” with rounder shapes. This reveals an underlying link between sounds and visual properties, providing insight into how our brains intuitively create meaning and associations.

Fergus has long held a keen interest in phonetics, and based on this sound-symbolic connection, he has developed a theory! He believes that all words can be categorized into four categories. In other words, each word is either a word corresponding to the figure on the left, like “kiki”, a word corresponding to the figure on the right, like “bouba”, a word that is a combination of both, or a word that is none of the aforementioned alternatives.

*Figure 1: The figure on the left is commonly associated with "kiki". The figure on the right is commonly associated with "bouba".*

Fergus determines that a word belongs to a category according to the following rules:

- If there are more `b` characters than `k` characters in the word, then the word is a **"bouba"** word.
- If there are more `k` characters than `b` characters in the word, then the word is a **"kiki"** word.
- If the word contains an equal number of `b` and `k` characters, then Fergus calls it a **"boki"** word.
- However, there is one exception: if the word contains neither `b` nor `k`, then the word is neither close to a "bouba" word nor a "kiki" word. Fergus calls such a word a **"none"** word.

Help Fergus write a program that, given a word, can categorize it according to these rules.

Source: <https://open.kattis.com/problems/kikibouba>

## Input

The input consists of a single line containing a string made up of the characters `a`-`z`, representing the word that Fergus wants to categorize.

## Output

Print one of the following categories:

- `bouba`
- `kiki`
- `boki`
- `none`

There is always exactly one correct category.

## Test Groups

Your solution will be tested on several groups of test cases. To earn the points for a group, all test cases in that group must be passed.

### Group 1
The word is only one character long.

### Group 2
The word contains at least one of either `k` or `b`, but never both at the same time.

### Group 3
No additional constraints.

## Samples

### Sample Input 1

```text
bouba
```

### Sample Output 1

```text
bouba
```

**Explanation**: The word contains two `b` characters and no `k` characters. Since there are more `b`'s than `k`'s, the answer is `bouba`.

### Sample Input 2

```text
kiki
```

### Sample Output 2

```text
kiki
```

### Sample Input 3

```text
kobra
```

### Sample Output 3

```text
boki
```

**Explanation**: The word contains one `b` and one `k`. Since there are equally many of both characters, the answer is `boki`.

### Sample Input 4

```text
ljus
```

### Sample Output 4

```text
none
```