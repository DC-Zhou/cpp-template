class BoolString{
	private:
		std::string value;
	public:
		BoolString (std::string const& s)
		{
			: values(s);
		}
		template<typename T = std::string>
		T get() const{
			return value;
		}
};
