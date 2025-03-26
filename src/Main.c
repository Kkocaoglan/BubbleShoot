#include "raylib.h"

// Ekran boyutlarý
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define SCREEN_TITLE "Top Patlatma Oyunu"

// Oyun durumu için yapý
typedef struct {
    int score;
    bool gameOver;
    // Daha sonra eklenecek diðer oyun deðiþkenleri
} GameState;

// Oyunun baþlangýç ayarlarýný yapýlandýrma fonksiyonu
void InitializeGame(GameState* gameState) {
    // Oyun baþlangýç deðerlerini ayarlama
    gameState->score = 0;
    gameState->gameOver = false;
}

// Oyun güncellemelerini yapan fonksiyon
void UpdateGame(GameState* gameState) {
    // Oyunun her karesinde yapýlacak güncellemeler
    // Örneðin: input kontrolü, top hareketleri vb.

    // Þimdilik boþ, daha sonra detaylandýrýlacak
}

// Oyunu çizen fonksiyon
void DrawGame(GameState* gameState) {
    BeginDrawing();

    // Arka planý temizle
    ClearBackground(RAYWHITE);

    // Oyun durumunu ekrana yazdýr
    DrawText(TextFormat("Skor: %d", gameState->score), 10, 10, 20, BLACK);

    EndDrawing();
}

int main() {
    // Raylib penceresini baþlat
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);

    // FPS ayarý (saniyede 60 kare)
    SetTargetFPS(60);

    // Oyun durumu yapýsýný oluþtur
    GameState gameState;

    // Oyunu baþlat
    InitializeGame(&gameState);

    // Ana oyun döngüsü
    while (!WindowShouldClose() && !gameState.gameOver) {
        // Oyunu güncelle
        UpdateGame(&gameState);

        // Oyunu çiz
        DrawGame(&gameState);
    }

    // Pencereyi kapat
    CloseWindow();

    return 0;
}