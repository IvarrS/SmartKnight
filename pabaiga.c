int pabaiga(int N, int lenta[N][N], int naudoti[N][N], int x, int y) {
    int cord_x[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int cord_y[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++) {
        int new_x = x + cord_x[i];
        int new_y = y + cord_y[i];
        if (galimas_ejimas(lenta, naudoti, new_x, new_y)) {
            return 0;
        }
    }
    return 1;
