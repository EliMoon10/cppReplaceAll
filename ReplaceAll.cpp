std::string ReplaceAll(std::string &str, const std::string& from, const std::string& to) { //ReplaceAll�� �̿��Ͽ� ���ڸ� #�� ���� �������� �ٲ�
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

//main�� ���� ���� main�ܺο� �־�� �մϴ�.