/*----------------------------------------------------------
 * Lab #5: Recursion
 *
 * Date: 20-Nov-2026
 *
 * Authors:
 *     [Matricula] [Nombre del integrante 1]
 *     [Matricula] [Nombre del integrante 2]
 *----------------------------------------------------------*/

#include "intlist.h"
#include "recursion.h"

// Complexity: O(N)
int size(const IntList& a)
{
    if (is_empty(a)) {
        return 0;
    }
    return 1 + size(rest(a));
}

// Complexity: O(N)
IntList cons_end(int value, const IntList& a)
{
    if (is_empty(a)) {
        return cons(value, IntList {});
    }
    return cons(first(a), cons_end(value, rest(a)));
}

// Complexity: O(N)
int sum(const IntList& a)
{
    if (is_empty(a)) {
        return 0;
    }
    return first(a) + sum(rest(a));
}

// Complexity: O(N)
IntList duplicate(const IntList& a)
{
    if (is_empty(a)) {
        return a;
    }
    return cons(first(a),
                cons(first(a),
                     duplicate(rest(a))));
}

// Complexity: O(N)
int last(const IntList& a)
{
    if (is_empty(rest(a))) {
        return first(a);
    }
    return last(rest(a));
}

// Complexity: O(N)
IntList but_last(const IntList& a)
{
    if (is_empty(rest(a))) {
        return IntList {};
    }
    return cons(first(a), but_last(rest(a)));
}

// Complexity: O(N)
int maximum(const IntList& a)
{
    if (is_empty(rest(a))) {
        return first(a);
    }

    int max_rest = maximum(rest(a));
    if (first(a) > max_rest) {
        return first(a);
    }
    return max_rest;
}

// Complexity: O(N), where N is the size of A
IntList append(const IntList& a, const IntList& b)
{
    if (is_empty(a)) {
        return b;
    }
    return cons(first(a), append(rest(a), b));
}

// Complexity: O(N)
IntList repeat(int n, int value)
{
    if (n == 0) {
        return IntList {};
    }
    return cons(value, repeat(n - 1, value));
}

// Complexity: O(N^2)
IntList reverse(const IntList& a)
{
    if (is_empty(a)) {
        return IntList {};
    }
    return cons_end(first(a), reverse(rest(a)));
}

// Complexity: O(N + M), where N is the size of A, and M is the size of B
IntList merge(const IntList& a, const IntList& b)
{
    if (is_empty(a)) {
        return b;
    }

    if (is_empty(b)) {
        return a;
    }

    if (first(a) <= first(b)) {
        return cons(first(a), merge(rest(a), b));
    }

    return cons(first(b), merge(a, rest(b)));
}

// Complexity: O(min(N, M)), where N is the size of A, and M is the size of B
bool is_prefix(const IntList& a, const IntList& b)
{
    if (is_empty(a)) {
        return true;
    }
    if (is_empty(b)) {
        return false;
    }
    if (first(a) != first(b)) {
        return false;
    }
    return is_prefix(rest(a), rest(b));
}

// Complexity: O(N)
IntList insert(int value, const IntList& a)
{
    if (is_empty(a)) {
        return cons(value, IntList {});
    }
    if (value <= first(a)) {
        return cons(value, a);
    }
    return cons(first(a), insert(value, rest(a)));
}

// Complexity: O(N^2)
IntList insertion_sort(const IntList& a)
{
    if (is_empty(a)) {
        return IntList {};
    }
    return insert(first(a), insertion_sort(rest(a)));
}

// Complexity: O((log N)^2), for N > 0
IntList binary(int n)
{
    if (n == 0) {
        return IntList {};
    }
    return cons_end(n % 2, binary(n / 2));
}
