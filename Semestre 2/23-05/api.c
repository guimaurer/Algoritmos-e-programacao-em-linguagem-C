#include <stdio.h>
#include <curl/curl.h>

// Função de callback para escrever os dados recebidos em um arquivo
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    FILE* file = (FILE*)userp;
    size_t written = fwrite(contents, size, nmemb, file);
    return written;
}

int main() {
    CURL* curl;
    CURLcode res;

    // CEP que deseja consultar
    const char* cep = "12345678";

    // Abre o arquivo para escrita
    FILE* file = fopen("retorno.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Inicializa o libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if (curl) {
        char url[128];
        snprintf(url, sizeof(url), "https://brasilapi.com.br/api/cep/v1/%s", cep);

        // Configura a URL da requisição GET
        curl_easy_setopt(curl, CURLOPT_URL, url);

        // Define a função de callback para escrever os dados no arquivo
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);

        // Executa a requisição
        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            printf("Erro ao fazer a requisição: %s\n", curl_easy_strerror(res));

        // Libera o libcurl
        curl_easy_cleanup(curl);
    }

    // Fecha o arquivo
    fclose(file);

    // Finaliza o libcurl
    curl_global_cleanup();

    return 0;
}
