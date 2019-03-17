std::string ReplaceAll(std::string &str, const std::string& from, const std::string& to) { //ReplaceAll을 이용하여 숫자를 #과 공백 조합으로 바꿈
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

//main에 넣지 말고 main외부에 넣어야 합니다.