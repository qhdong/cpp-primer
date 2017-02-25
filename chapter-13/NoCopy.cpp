class NoCopy {
public:
    NoCopy(): a(cnt) {}
    // NoCopy(const NoCopy&) = delete;
    // NoCopy& operator=(const NoCopy&) = delete;
    // ~NoCopy() = delete;
private:
    int &a;
    static int cnt;
};

int NoCopy::cnt = 0;

int main() {
    NoCopy a;
    NoCopy b = a;
    // NoCopy b = a;

    return 0;
}
