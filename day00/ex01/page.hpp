#ifndef PAGE_HPP
# define PAGE_HPP

class page{
        public:
                page(void);
                ~page(void);
                void    complete(void);
                void    afficher(void) const;

        private:
                string _first_name;
                string _last_name;
                string _nickname;
                string _secret;
}
#endif
