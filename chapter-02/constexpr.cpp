int i = 20;
constexpr int *p = &i;
int main() {
    constexpr int mf = 20;
    constexpr int limit = mf + 1;
    // constexpr int *p = &mf;
    const int *p = nullptr;
    constexpr int *q = nullptr;

    constexpr int *pp = 0;
}
