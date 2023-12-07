#include "Player.h"
#include "Card.h"

Player::Player() {
    
}

void Player::setFirst(bool value) {
    this->wentFirst = value;
}

bool Player::checkFirst() {
    return wentFirst;
}