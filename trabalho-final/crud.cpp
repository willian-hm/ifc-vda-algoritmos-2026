// Trabalho Final - CRUD de Pacientes

// Perguntas pro professor:
// O código começa por 1 ou 0? Que daí só usa o i daí
// Pedir pro professor se os char precisa do & ou não no cadastrar() em array char

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

// Registro (struct) com as variáveis dos pacientes
struct paciente
{
    int codigo;
    char nome[100];
    char cpf[20];
    char nascimento[11];
    char sexo[2];
    char telefone[20];
    char endereco[200];
    char tipoSanguineo[3];
    char convenio[50];
    bool ativo;
};

struct paciente p[MAX];

int i = 2; // Iniciar o índice em 2 pois já temos 2 pacientes cadastrados
int j = 0;
int proxCod = 3; // Próximo código a ser atribuído ao próximo paciente cadastrado

// FUNÇÕES
void pacientesIniciais()
{
    p[0].codigo = 1;
    strcpy(p[0].nome, "Joao da Silva");
    strcpy(p[0].cpf, "123.456.789-00");
    strcpy(p[0].nascimento, "01/01/1990");
    strcpy(p[0].sexo, "M");
    strcpy(p[0].telefone, "(11) 1234-5678");
    strcpy(p[0].endereco, "Rua Exemplo, 123 - Sao Paulo/SP");
    strcpy(p[0].tipoSanguineo, "O+");
    strcpy(p[0].convenio, "Unimed");
    p[0].ativo = true;

    p[1].codigo = 2;
    strcpy(p[1].nome, "Maria Oliveira");
    strcpy(p[1].cpf, "987.654.321-00");
    strcpy(p[1].nascimento, "15/05/1985");
    strcpy(p[1].sexo, "F");
    strcpy(p[1].telefone, "(11) 8765-4321");
    strcpy(p[1].endereco, "Avenida Principal, 456 - Rio de Janeiro/RJ");
    strcpy(p[1].tipoSanguineo, "A+");
    strcpy(p[1].convenio, "AMIL");
    p[1].ativo = true;
}

void cadastrar()
{
    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]", &p[i].nome);
    printf("Digite o CPF do paciente: ");
    scanf("%s", &p[i].cpf);
    printf("Digite a data de nascimento do paciente (dd/mm/aaaa): ");
    scanf("%s", &p[i].nascimento);
    printf("Digite o sexo do paciente (M/F): ");
    scanf("%s", &p[i].sexo);
    printf("Digite o telefone do paciente: ");
    scanf(" %[^\n]", &p[i].telefone);
    printf("Digite o endereco do paciente: ");
    scanf(" %[^\n]", &p[i].endereco);
    printf("Digite o tipo sanguineo do paciente: ");
    scanf("%s", &p[i].tipoSanguineo);
    printf("Digite o convenio do paciente: ");
    scanf(" %[^\n]", &p[i].convenio);

    printf("\nPaciente cadastrado com sucesso!\n");
    printf("Codigo gerado: %i\n", proxCod);

    p[i].codigo = proxCod;
    p[i].ativo = true;

    proxCod++;
    i++;

    system("pause");

}
void editar()
{
    int cod;
    printf("Digite o codigo do paciente a ser editado: ");
    scanf("%i", &cod);

    for (j = 0; j < i; j++)
    {
        if (p[j].codigo == cod && p[j].ativo)
        {
            printf("Digite o novo nome do paciente: ");
            scanf(" %[^\n]", &p[j].nome);
            printf("Digite o novo CPF do paciente: ");
            scanf("%s", &p[j].cpf);
            printf("Digite a nova data de nascimento do paciente (dd/mm/aaaa): ");
            scanf("%s", &p[j].nascimento);
            printf("Digite o novo sexo do paciente (M/F): ");
            scanf("%s", &p[j].sexo);
            printf("Digite o novo telefone do paciente: ");
            scanf(" %[^\n]", &p[j].telefone);
            printf("Digite o novo endereco do paciente: ");
            scanf(" %[^\n]", &p[j].endereco);
            printf("Digite o novo tipo sanguineo do paciente: ");
            scanf("%s", &p[j].tipoSanguineo);
            printf("Digite o novo convenio do paciente: ");
            scanf(" %[^\n]", &p[j].convenio);
            break;
        }
    }

    if (j == i)
    {
        printf("Paciente com codigo %i nao encontrado.\n", cod);
    }

    system("pause");

}
void excluir()
{
    int cod;
    printf("Digite o codigo do paciente a ser excluido: ");
    scanf("%i", &cod);

    for (j = 0; j < i; j++)
    {
        if (p[j].codigo == cod && p[j].ativo)
        {
            p[j].ativo = false;
            printf("Paciente com codigo %i excluido.\n", cod);
            break;
        }
    }

    if (j == i)
    {
        printf("Paciente com codigo %i nao encontrado.\n", cod);
    }

    system("pause");

}
void consultar()
{
    int cod;
    printf("Digite o codigo do paciente a ser consultado: ");
    scanf("%i", &cod);

    for (j = 0; j < i; j++)
    {
        if (p[j].codigo == cod && p[j].ativo)
        {
            printf("Codigo: %i\n", p[j].codigo);
            printf("Nome: %s\n", p[j].nome);
            printf("CPF: %s\n", p[j].cpf);
            printf("Nascimento: %s\n", p[j].nascimento);
            printf("Sexo: %s\n", p[j].sexo);
            printf("Telefone: %s\n", p[j].telefone);
            printf("Endereco: %s\n", p[j].endereco);
            printf("Tipo Sanguineo: %s\n", p[j].tipoSanguineo);
            printf("Convenio: %s\n", p[j].convenio);
            break;
        }
    }

    if (j == i)
    {
        printf("Paciente com codigo %i nao encontrado.\n", cod);
    }

    system("pause");

}
void listar()
{
    for (int j = 0; j < i; j++)
    {
        if (p[j].ativo == true)
        {
            printf("Codigo: %i\n", p[j].codigo);
            printf("Nome: %s\n", p[j].nome);
            printf("CPF: %s\n", p[j].cpf);
            printf("Nascimento: %s\n", p[j].nascimento);
            printf("Sexo: %s\n", p[j].sexo);
            printf("Telefone: %s\n", p[j].telefone);
            printf("Endereco: %s\n", p[j].endereco);
            printf("Tipo Sanguineo: %s\n", p[j].tipoSanguineo);
            printf("Convenio: %s\n", p[j].convenio);
            printf("\n");
        }
    }
    system("pause");
}

// MENU
main()
{
    pacientesIniciais();
    int op;

    while (true)
    {
        printf("\n=====================================\n");
        printf("      SISTEMA DE PACIENTES\n");
        printf("=====================================\n");
        printf("1 - Cadastrar paciente\n");
        printf("2 - Editar paciente\n");
        printf("3 - Excluir paciente\n");
        printf("4 - Consultar paciente\n");
        printf("5 - Listar pacientes\n");
        printf("6 - Sair\n");
        printf("=====================================\n");
        printf("Selecione uma opcao: ");
        scanf("%i", &op);
        printf("\n");

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