#ifndef BOOK_HPP
# define BOOK_HPP

class page{
	public:
		page(void);
		~page(void);
		void	complete(void);
		void	afficher(void) const;

	private:
		string	_first_name;
		string	_last_name;
		string	_nickname;
		string	_secret;
		int	_fill;
}

class book{
	public:
		book(void);
		~book(void);
		void	add(void);
		void	search(void) const;
		void	aff_contact(int c) const;

	private:
		void	_aff_line(int i, int l) const;
		void	_format_string(string str) const;
		void	_wait(void) const;
		page	_book[8];
		int	_nb_page;
		
}
#endif
