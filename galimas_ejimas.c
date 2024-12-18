int galimas_ejimas(int N, int lenta[N][N], int naudoti[N][N], int x, int y){
    if (x < 0 || x >= N || y < 0 || y >= N || naudoti[x][y]) {
        return 0;
    }

    return 1;
}
