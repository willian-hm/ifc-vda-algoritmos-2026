#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

// Registro (struct) com as variáveis dos pacientes
struct paciente
{
    int codigo;
    char nome[100];
    char cpf[15];
    char nascimento[11];
    char sexo[2];
    char telefone[15];
    char endereco[200];
    char tipoSanguineo[2];
    char convenio[50];
    bool ativo;
};

struct paciente p[MAX];

int i;
int proxCod = 1;

// FUNÇÕES
void cadastrar() {}
void editar() {}
void excluir() {}
void consultar() {}
void listar() {}


// MENU
main()
{
    int op;

    while (true)
    {
        printf("Selecione uma opção: ");
        scanf("%i", &op);

        switch (op)
        {
            case 1:
            {
                cadastrar();
                break;
            }
            case 2:
            {
                editar();
                break;
            }
            case 3:
            {
                excluir();
                break;
            }
            case 4:
            {
                consultar();
                break;
            }
            case 5:
            {
                listar();
                break;
            }
            case 6:
            {
                printf("Fechando o sistema...");
                break;
            }
            default:
            {
                printf("Opção inválida\n");
                break;
            }
        }

        if (op == 6)
        {
            break;
        }
    }
}