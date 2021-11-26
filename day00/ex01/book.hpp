#ifndef BOOK_HPP
# define BOOK_HPP

class page{
	public:
		page(void);
		~page(void);
		void	complete(void);
		void	afficher(void) const;

	private:
		string _first_name;
		string _last_name;
		string _nickname;
		string _secret;
}

class book{
	public:
		book(void);
		~book(void);
		void	add(void);
		void	search(void) const;
		void	aff_contact(int c) const;
		void	get_input(void);

	private:
		page	_book[8];
		int	_nb_page;
		
}
#endif
