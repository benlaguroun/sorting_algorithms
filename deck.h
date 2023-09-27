i#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * Enumeration of card suits:
 * @SPADE: Represents the Spades suit.
 * @HEART: Represents the Hearts suit.
 * @CLUB: Represents the Clubs suit.
 * @DIAMOND: Represents the Diamonds suit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * Playing card structure:
 * @value: Value of the card, ranging from "Ace" to "King."
 * @kind: Kind of the card.
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * Deck of cards node structure:
 * @card: Pointer to the card associated with the node.
 * @prev: Pointer to the previous node in the deck.
 * @next: Pointer to the next node in the deck.
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
