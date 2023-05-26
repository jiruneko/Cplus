class human{
    private:
    std::string name;
    int age;
public:
    void dataset(std::string inputname, int year) {
        name=inputname;
        age=year;
    }
    void printage() {
        printf("氏名:%s、　年齢:%d歳, name.c_str()", age);
    }
};