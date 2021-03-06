#include "Player.h"

using namespace state;

Player::Player() {}

Player::~Player() {}

int Player::getUid() { return uid; }

std::string Player::getName() { return name; }

void Player::setName(std::string name) { this->name = name; }

bool Player::getPlaying() { return playing; }

void Player::setPlaying(bool playing) { this->playing = playing; }

PlayerStatus Player::getStatus() { return status; }

void Player::setStatus(PlayerStatus status) { this->status = status; }

Player *const Player::clone() {}
