// Trabalho Final - CRUD de Pacientes

// Sistema de cadastro e controle de Pacientes
// Objetivo:
// Você foi contratado pela clínica Saúde+ para desenvolver um sistema em C
// para cadastro e gerenciamento de pacientes. O sistema deve seguir boas práticas
// de programação e oferecer interface amigável com as validações de campo
// necessárias.
// Escopo do Sistema:
// O sistema deve realizar o cadastro e o gerenciamento dos pacientes com os
// seguintes atributos obrigatórios:
//  Código do paciente (gerado automaticamente de forma sequencial);
//  Nome completo;
//  CPF;
//  Data de nascimento;
//  Sexo;
//  Telefone;
//  Endereço;
//  Tipo sanguíneo;
//  Convênio (ou Particular).
// * Podem ser implementados outros atributos, caso julgue necessário.
// Observações:
//  O código do paciente deve ser gerado automaticamente seguindo a ordem
// de inserção;
//  Pacientes excluídos devem sofrer exclusão lógica (marcação de inativo) e
// não reaparecer em listagens/consultas; códigos não devem ser reutilizados;
//  O CPF deve possuir validação básica de formato (tamanho de caracteres);
//  Nome, telefone e endereço não podem ficar vazios.
// Funcionalidades obrigatórias:
//  Cadastrar novo paciente;
//  Editar dados de um paciente existente;
//  Excluir um paciente (exclusão lógica);
//  Consultar pacientes por:
//  Código;
//  Nome (busca por substring, case-insensitive);
//  CPF;
//  Listar todos os pacientes cadastrados (somente os ativos);
//  Menu interativo na função main() para navegação entre funcionalidades.
// * Funcionalidades extras são bem-vindas e serão consideradas como diferencial.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
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

// Função para cadastrar pacientes iniciais
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

// Função para cadastrar um novo paciente
void cadastrar()
{

    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]s", &p[i].nome);
    for (;;)
    {
        if (strlen(p[i].nome) == 0)
        {
            printf("O nome nao pode ficar vazio. Digite novamente: ");
            scanf(" %[^\n]s", &p[i].nome);
        }
        else
        {
            break;
        }
    }
    printf("Digite o CPF do paciente: ");
    scanf("%s", &p[i].cpf);
    for (;;)
    {
        if (strlen(p[i].cpf) == 0)
        {
            printf("O CPF nao pode ficar vazio. Digite novamente: ");
            scanf("%s", &p[i].cpf);
        }
        else if (strlen(p[i].cpf) != 14)
        {
            printf("O CPF deve conter 14 caracteres (formato xxx.xxx.xxx-xx). Digite novamente: ");
            scanf("%s", &p[i].cpf);
        }
        else
        {
            break;
        }
    }
    printf("Digite a data de nascimento do paciente (dd/mm/aaaa): ");
    scanf("%s", &p[i].nascimento);
    for (;;)
    {
        if (strlen(p[i].nascimento) == 0)
        {
            printf("A data de nascimento nao pode ficar vazia. Digite novamente (dd/mm/aaaa): ");
            scanf("%s", &p[i].nascimento);
        }
        else
        {
            break;
        }
    }
    printf("Digite o sexo do paciente (M/F): ");
    scanf("%s", p[i].sexo);

    for (;;)
    {
        if (strlen(p[i].sexo) == 0)
        {
            printf("O sexo nao pode ficar vazio. Digite novamente (M/F): ");
            scanf("%s", p[i].sexo);
        }
        else
        {
            break;
        }
    }

    printf("Digite o telefone do paciente: ");
    scanf(" %[^\n]s", &p[i].telefone);

    for (;;)
    {
        if (strlen(p[i].telefone) == 0)
        {
            printf("O telefone nao pode ficar vazio. Digite novamente: ");
            scanf(" %[^\n]s", &p[i].telefone);
        }
        else
        {
            break;
        }
    }

    printf("Digite o endereco do paciente: ");
    scanf(" %[^\n]s", &p[i].endereco);

    for (;;)
    {
        if (strlen(p[i].endereco) == 0)
        {
            printf("O endereco nao pode ficar vazio. Digite novamente: ");
            scanf(" %[^\n]s", &p[i].endereco);
        }
        else
        {
            break;
        }
    }

    printf("Digite o tipo sanguineo do paciente: ");
    scanf("%s", &p[i].tipoSanguineo);
    for (;;)
    {
        if (strlen(p[i].tipoSanguineo) == 0)
        {
            printf("O tipo sanguineo nao pode ficar vazio. Digite novamente: ");
            scanf("%s", &p[i].tipoSanguineo);
        }
        else
        {
            break;
        }
    }

    printf("Digite o convenio do paciente: ");
    scanf(" %[^\n]s", &p[i].convenio);
    for (;;)
    {
        if (strlen(p[i].convenio) == 0)
        {
            printf("O convenio nao pode ficar vazio. Digite novamente: ");
            scanf(" %[^\n]s", &p[i].convenio);
        }
        else
        {
            break;
        }
    }

    printf("\nPaciente cadastrado com sucesso!\n");
    printf("Codigo gerado: %i\n", proxCod);

    p[i].codigo = proxCod;
    p[i].ativo = true;

    proxCod++;
    i++;

    system("pause");
}

// Função para exibir os dados de um paciente a partir do indice do paciente encontrado na função de busca
void buscaPorCodigo(int codigo)
{
    if (p[codigo].codigo != 0 && p[codigo].ativo)
    {
        printf("Codigo: %i\n", p[codigo].codigo);
        printf("Nome: %s\n", p[codigo].nome);
        printf("CPF: %s\n", p[codigo].cpf);
        printf("Nascimento: %s\n", p[codigo].nascimento);
        printf("Sexo: %s\n", p[codigo].sexo);
        printf("Telefone: %s\n", p[codigo].telefone);
        printf("Endereco: %s\n", p[codigo].endereco);
        printf("Tipo Sanguineo: %s\n", p[codigo].tipoSanguineo);
        printf("Convenio: %s\n", p[codigo].convenio);
    }
    else
    {
        printf("Paciente nao encontrado.\n");
    }

    system("pause");
}

// Converte char pra minúsculo
void minusculo(char nome[])
{
    for (int j = 0; j < strlen(nome); j++)
    {
        nome[j] = tolower(nome[j]);
    }
}

// Função para buscar um paciente por código, nome ou CPF e retornar o índice do paciente encontrado
int busca()
{
    int op;
    int codigo;

    printf("=======PAINEL DE BUSCA=======\n");
    printf("Digite:\n");
    printf("1 - Buscar por codigo\n");
    printf("2 - Buscar por Nome\n");
    printf("3 - Buscar por CPF\n");
    printf("==============================\n");
    scanf("%i", &op);
    printf("\n");

    if (op == 1)
    {
        // Busca por codigo
        printf("Digite o codigo do paciente a ser consultado: ");
        scanf("%i", &codigo);

        for (j = 0; j < i; j++)
        {
            if (p[j].codigo == codigo && p[j].ativo)
            {
                break;
            }
        }
    }
    else if (op == 2)
    {
        // Busca por Nome
        char nome[100];
        printf("Digite o nome do paciente a ser consultado: ");
        scanf(" %[^\n]", nome);

        minusculo(nome);

        for (j = 0; j < i; j++)
        {
            char nomePaciente[100];
            strcpy(nomePaciente, p[j].nome);

            minusculo(nomePaciente);

            if (strstr(nomePaciente, nome) != 0 && p[j].ativo)
            {
                codigo = p[j].codigo;
                break;
            }
        }
    }
    else if (op == 3)
    {
        // Busca por CPF
        char cpf[20];
        printf("Digite o cpf do paciente a ser consultado: ");
        scanf(" %s", &cpf);
        for (j = 0; j < i; j++)
        {
            if (strcmp(p[j].cpf, cpf) == 0 && p[j].ativo)
            {
                codigo = p[j].codigo;
                break;
            }
        }
    }
    else
    {
        // retorna 0
        codigo = 0;
    }

    if (j == i)
    {
        printf("Paciente nao encontrado.\n");
    }

    return j;
}

// Função para editar um paciente existente
void editar()
{
    busca();
    if (j < i && p[j].ativo)
    {
        printf("Digite o novo nome do paciente: ");
        scanf(" %[^\n]s", &p[j].nome);
        printf("Digite o novo CPF do paciente: ");
        scanf("%s", &p[j].cpf);
        printf("Digite a nova data de nascimento do paciente (dd/mm/aaaa): ");
        scanf("%s", &p[j].nascimento);
        printf("Digite o novo sexo do paciente (M/F): ");
        scanf("%s", &p[j].sexo);
        printf("Digite o novo telefone do paciente: ");
        scanf(" %[^\n]s", &p[j].telefone);
        printf("Digite o novo endereco do paciente: ");
        scanf(" %[^\n]s", &p[j].endereco);
        printf("Digite o novo tipo sanguineo do paciente: ");
        scanf("%s", &p[j].tipoSanguineo);
        printf("Digite o novo convenio do paciente: ");
        scanf(" %[^\n]s", &p[j].convenio);
    }
    else
    {
        printf("Paciente nao encontrado.\n");
    }

    system("pause");
}
//  Função para excluir um paciente (marcar como inativo)
void excluir()
{
    busca();

    if (j < i && p[j].ativo)
    {
        p[j].ativo = false;
        printf("Paciente com codigo %i excluido.\n", p[j].codigo);
    }
    else
    {
        printf("Paciente com codigo %i nao encontrado.\n", p[j].codigo);
    }

    system("pause");
}

// Função para consultar um paciente (buscar e exibir os dados)

void consultar()
{
    busca();
    if (j != i)
    {
        buscaPorCodigo(j);
    }
}

// Função para listar todos os pacientes ativos
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
            printf("Opcao invalida\n");
            break;
        }
        }

        if (op == 6)
        {
            break;
        }
    }
}