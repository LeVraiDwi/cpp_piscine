#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain{
    public:
        Brain();
        Brain(Brain const & src);
        ~Brain();

        Brain & operator=(Brain const & rhs);
        std::string *   getIdeas();

    private:
        std::string _ideas[100];
};
#endif
