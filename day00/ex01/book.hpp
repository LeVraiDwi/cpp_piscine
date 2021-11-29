#ifndef BOOK_HPP
# define BOOK_HPP

class book{
	public:
		book(void);
		~book(void);
		void	add(void);
		void	search(void) const;

	private:
		int	_aff_index(void) const;
		void	_aff_line(int index) const;
		page	_book[8];
		int	_nb_page;
		
}
#endif
