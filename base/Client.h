//
// Created by renan on 13/08/18.
//

#ifndef DESIGN_PATTERNS_CLIENT_H
#define DESIGN_PATTERNS_CLIENT_H


#include <string>
#include <ostream>

enum Identification {
    INDUVIDUAL, INSTITUTIONAL
};

class Client {
public:
    friend std::ostream &operator<<(std::ostream &, const Client &);

public:
    Client(const std::string &name, Identification kind);

    const std::string &getName() const;

    void setName(const std::string &name);

    Identification getKind() const;

    void setKind(Identification kind);

private:

    std::string name;
    Identification kind;
};


#endif //DESIGN_PATTERNS_CLIENT_H
