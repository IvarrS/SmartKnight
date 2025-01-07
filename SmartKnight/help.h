#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED
void LentosGeneravimas(int N, int lenta[N][N]);
void PradinisTaskas(int *randomX, int *randomY, int N, int lenta[N][N]);
int GalimiZingsniai(int randomX, int randomY, int N, int lenta[N][N]);
void Judejimas(int N, int lenta[N][N], int *JudejimoX, int *JudejimoY);
void AtspausdintiLenta(int N, int Lenta[N][N]);
void Pabaiga(int rezultatas);
#endif // HELP_H_INCLUDED
