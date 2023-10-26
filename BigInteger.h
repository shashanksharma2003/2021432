#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct BigInteger
{
    struct node *l;
    int sign;
    int length;
};

void sign_rev(struct node *);
struct BigInteger initialize(char *);


struct BigInteger add(struct BigInteger ,struct BigInteger );
struct BigInteger add_plus_plus(struct BigInteger ,struct BigInteger ,int );
struct BigInteger add_minus_plus(struct BigInteger ,struct BigInteger ,int );



struct BigInteger sub(struct BigInteger ,struct BigInteger );

struct BigInteger mul(struct BigInteger ,struct BigInteger );
struct BigInteger multiply(struct BigInteger  , struct BigInteger  ,int );

struct BigInteger div1(struct BigInteger , struct BigInteger  );
struct BigInteger division(struct BigInteger  , struct BigInteger  , int  , int );
void div_add(struct node * ,struct node * ,struct node * ,int * );
void div_sub(struct node * ,struct node * ,struct node * );
int compare(struct BigInteger  , struct BigInteger );
int compare_sub(struct node * , struct node *);


void display(struct BigInteger );
void print_ll(struct node *);

void turnicate(struct BigInteger );

void dump(struct BigInteger );

struct BigInteger mod(struct BigInteger  , struct BigInteger );
//struct BigInteger mod_sub(struct BigInteger a , struct BigInteger b);
