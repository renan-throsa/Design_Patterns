//
// Created by renan on 13/08/18.
//

#include "Client.h"

const std::string &Client::getName() const {
    return name;
}

void Client::setName(const std::string &name) {
    Client::name = name;
}

Identification Client::getKind() const {
    return kind;
}

void Client::setKind(Identification kind) {
    Client::kind = kind;
}

Client::Client(const std::string &name, Identification kind) : name(name), kind(kind) {}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "name: " << client.name << " kind: " << client.kind;
    return os;
}
