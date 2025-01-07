#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED
void LentosGeneravimas(int N, int lenta[N][N]);
void PradinisTaskas(int *randomX, int *randomY, int N, int lenta[N][N]);
int GalimiZingsniai(int randomX, int randomY, int N, int lenta[N][N], int galimiJudejimai[][2]);
void Judejimas(int N, int lenta[N][N], int *dabartinisX, int *dabartinisY, int galimiJudejimai[][2]);
void AtspausdintiLenta(int N, int Lenta[N][N]);
void Pabaiga(int rezultatas);
#endif // HELP_H_INCLUDED
