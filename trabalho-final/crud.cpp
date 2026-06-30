#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

#define MAX 100

// =============================================
// ESTRUTURA DE DADOS
// =============================================
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

struct consulta
{
    int codigoPaciente;
    char data[11];
    char medico[100];
    char diagnostico[200];
    bool consultaAtiva;
};

// =============================================
// VARIÁVEIS GLOBAIS
// =============================================

struct paciente p[MAX];

int i = 4; // Iniciar o índice em 2 pois já temos 2 pacientes cadastrados
int j = 0;
int proxCod = 5; // Próximo código a ser atribuído ao próximo paciente cadastrado

struct consulta c[MAX];

int qtdConsultas = 0;

// =============================================
// FUNÇÕES UTILITÁRIAS
// =============================================

// Converte uma string para letras minúsculas
void minusculo(char nome[])
{
    for (int j = 0; j < strlen(nome); j++)
    {
        nome[j] = tolower(nome[j]);
    }
}

// Imprime uma linha separadora no terminal
void separador()
{
    printf("-------------------------------------\n");
}

// Imprime o cabeçalho de uma seção com título
void cabecalho(const char titulo[])
{
    printf("\n=====================================\n");
    printf("  %s\n", titulo);
    printf("=====================================\n");
}

// Analisa se a String está vazia
void lerStringObrigatoria(char str[], const char warn[])
{
    for (;;)
    {
        if (strlen(str) == 0)
        {
            printf(warn);
            scanf(" %[^\n]s", &str);
        }
        else
        {
            break;
        }
    }
}

// Exibe todos os dados de um paciente formatados
void exibirPaciente(int id)
{
    separador();
    printf("Codigo:         %i\n", p[id].codigo);
    printf("Nome:           %s\n", p[id].nome);
    printf("CPF:            %s\n", p[id].cpf);
    printf("Nascimento:     %s\n", p[id].nascimento);
    printf("Sexo:           %s\n", p[id].sexo);
    printf("Telefone:       %s\n", p[id].telefone);
    printf("Endereco:       %s\n", p[id].endereco);
    printf("Tipo Sanguineo: %s\n", p[id].tipoSanguineo);
    printf("Convenio:       %s\n", p[id].convenio);
    separador();
}

// =============================================
// CADASTRO INICIAL
// =============================================

// Pré-cadastra dois pacientes para facilitar os testes do sistema
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

    p[2].codigo = 3;
    strcpy(p[2].nome, "Carlos Pereira");
    strcpy(p[2].cpf, "111.222.333-44");
    strcpy(p[2].nascimento, "22/09/1978");
    strcpy(p[2].sexo, "M");
    strcpy(p[2].telefone, "(47) 99999-1111");
    strcpy(p[2].endereco, "Rua das Flores, 789 - Videira/SC");
    strcpy(p[2].tipoSanguineo, "B+");
    strcpy(p[2].convenio, "Unimed");
    p[2].ativo = true;

    p[3].codigo = 4;
    strcpy(p[3].nome, "Fernanda Souza");
    strcpy(p[3].cpf, "555.666.777-88");
    strcpy(p[3].nascimento, "10/12/1995");
    strcpy(p[3].sexo, "F");
    strcpy(p[3].telefone, "(49) 98888-2222");
    strcpy(p[3].endereco, "Avenida Central, 321 - Joaçaba/SC");
    strcpy(p[3].tipoSanguineo, "AB-");
    strcpy(p[3].convenio, "Bradesco Saude");
    p[3].ativo = true;
}

// Pré-cadastra consultas de pacientes para facilitar os testes do sistema
void consultasIniciais()
{
    c[0].codigoPaciente = 1;
    strcpy(c[0].data, "10/08/2026");
    strcpy(c[0].medico, "Dr. Carlos");
    strcpy(c[0].diagnostico, "Gripe");
    c[0].consultaAtiva = true;

    c[1].codigoPaciente = 1;
    strcpy(c[1].data, "15/08/2026");
    strcpy(c[1].medico, "Dra. Ana");
    strcpy(c[1].diagnostico, "Retorno");
    c[1].consultaAtiva = true;

    c[2].codigoPaciente = 2;
    strcpy(c[2].data, "20/08/2026");
    strcpy(c[2].medico, "Dr. Pedro");
    strcpy(c[2].diagnostico, "Check-up");
    c[2].consultaAtiva = true;

    qtdConsultas = 3;
}

// =============================================
// FUNÇÕES DE BUSCA
// =============================================

// Função para exibir os dados de um paciente a partir do indice do paciente encontrado na função de busca
void buscaPorCodigo(int codigo)
{
    if (p[codigo].codigo != 0 && p[codigo].ativo)
    {
        exibirPaciente(codigo);
    }
    else
    {
        printf("Paciente nao encontrado.\n");
    }
    system("pause");
}

// Função para buscar um paciente por código, nome ou CPF e retornar o índice do paciente encontrado
int busca()
{
    int op;
    int codigo;

    cabecalho("Painel de Busca");
    printf("Digite:\n");
    printf("1 - Buscar por código\n");
    printf("2 - Buscar por Nome\n");
    printf("3 - Buscar por CPF\n");
    separador();

    scanf("%i", &op);
    printf("\n");

    if (op == 1)
    {
        printf("Digite o código do paciente a ser consultado: ");
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
    { // Busca por Nome
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
    { // Busca por CPF
        char cpf[20];
        printf("Digite o CPF do paciente a ser consultado: ");
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
        printf("Paciente não encontrado.\n");
    }

    return j;
}

// =============================================
// FUNCIONALIDADES DO SISTEMA
// =============================================

// Função para cadastrar um novo paciente
void cadastrar()
{
    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]s", &p[i].nome);
    lerStringObrigatoria(p[i].nome, "O nome não pode ficar vazio. Digite novamente: ");

    printf("Digite o CPF do paciente: ");
    scanf("%s", &p[i].cpf);
    for (;;)
    {
        if (strlen(p[i].cpf) == 0)
        {
            printf("O CPF não pode ficar vazio. Digite novamente: ");
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
    lerStringObrigatoria(p[i].nascimento, "A data de nascimento não pode ficar vazia. Digite novamente (dd/mm/aaaa): ");

    printf("Digite o sexo do paciente (M/F): ");
    scanf("%s", p[i].sexo);
    lerStringObrigatoria(p[i].sexo, "O sexo não pode ficar vazio. Digite novamente (M/F): ");

    printf("Digite o telefone do paciente: ");
    scanf(" %[^\n]s", &p[i].telefone);
    lerStringObrigatoria(p[i].telefone, "O telefone não pode ficar vazio. Digite novamente: ");

    printf("Digite o endereco do paciente: ");
    scanf(" %[^\n]s", &p[i].endereco);
    lerStringObrigatoria(p[i].endereco, "O endereço não pode ficar vazio. Digite novamente: ");

    printf("Digite o tipo sanguíneo do paciente: ");
    scanf("%s", &p[i].tipoSanguineo);
    lerStringObrigatoria(p[i].tipoSanguineo, "O tipo sanguíneo não pode ficar vazio. Digite novamente: ");

    printf("Digite o convênio do paciente: ");
    scanf(" %[^\n]s", &p[i].convenio);
    lerStringObrigatoria(p[i].convenio, "O convênio não pode ficar vazio. Digite novamente: ");

    printf("\nPaciente cadastrado com sucesso!\n");
    printf("Código gerado: %i\n\n", proxCod);

    p[i].codigo = proxCod;
    p[i].ativo = true;

    proxCod++;
    i++;

    system("pause");
}

// Função para editar um paciente existente
void editar()
{
    busca();
    if (j < i && p[j].ativo)
    {
        printf("Digite o novo nome do paciente: ");
        scanf(" %[^\n]s", &p[j].nome);
        lerStringObrigatoria(p[j].nome, "O nome não pode ficar vazio. Digite novamente: ");

        printf("Digite o novo CPF do paciente: ");
        scanf("%s", &p[j].cpf);
        for (;;)
        {
            if (strlen(p[j].cpf) == 0)
            {
                printf("O CPF não pode ficar vazio. Digite novamente: ");
                scanf("%s", &p[j].cpf);
            }
            else if (strlen(p[j].cpf) != 14)
            {
                printf("O CPF deve conter 14 caracteres (formato xxx.xxx.xxx-xx). Digite novamente: ");
                scanf("%s", &p[j].cpf);
            }
            else
            {
                break;
            }
        }

        printf("Digite a nova data de nascimento do paciente (dd/mm/aaaa): ");
        scanf("%s", &p[j].nascimento);
        lerStringObrigatoria(p[j].nascimento, "A data de nascimento não pode ficar vazia. Digite novamente (dd/mm/aaaa): ");

        printf("Digite o novo sexo do paciente (M/F): ");
        scanf("%s", &p[j].sexo);
        lerStringObrigatoria(p[i].sexo, "O sexo não pode ficar vazio. Digite novamente (M/F): ");

        printf("Digite o novo telefone do paciente: ");
        scanf(" %[^\n]s", &p[j].telefone);
        lerStringObrigatoria(p[i].telefone, "O telefone não pode ficar vazio. Digite novamente: ");

        printf("Digite o novo endereço do paciente: ");
        scanf(" %[^\n]s", &p[j].endereco);
        lerStringObrigatoria(p[i].endereco, "O endereço não pode ficar vazio. Digite novamente: ");

        printf("Digite o novo tipo sanguíneo do paciente: ");
        scanf("%s", &p[j].tipoSanguineo);
        lerStringObrigatoria(p[i].tipoSanguineo, "O tipo sanguíneo não pode ficar vazio. Digite novamente: ");

        printf("Digite o novo convênio do paciente: ");
        scanf(" %[^\n]s", &p[j].convenio);
        lerStringObrigatoria(p[i].convenio, "O convênio não pode ficar vazio. Digite novamente: ");
    }
    else
    {
        printf("Paciente não encontrado.\n");
    }

    // Paciente editado
    exibirPaciente(j);

    system("pause");
}

//  Função para excluir um paciente (marcar como inativo)
void excluir()
{
    busca();

    if (j < i && p[j].ativo)
    {
        p[j].ativo = false;
        printf("Paciente com código %i excluído.\n", p[j].codigo);
    }
    else
    {
        printf("Paciente com código %i nao encontrado.\n", p[j].codigo);
    }

    system("pause");
}

//  Função para listar pacientes inativos e caso o usuário se interesse em recuperar algum deles
void excluidos()
{
    int cont = 0;
    char op[2];
    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n");
    printf("| Código | Nome                 | CPF            | Nascimento | Sexo | Telefone       | Endereço                     | Tipo | Convênio             |\n");
    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n");

    for (int j = 0; j < i; j++)
    {
        if (p[j].ativo == false)
        {
            printf("| %-6d | %-20.20s | %-14.14s | %-10.10s | %-4.4s | %-14.14s | %-28.28s | %-4.4s | %-20.20s |\n",
                   p[j].codigo,
                   p[j].nome,
                   p[j].cpf,
                   p[j].nascimento,
                   p[j].sexo,
                   p[j].telefone,
                   p[j].endereco,
                   p[j].tipoSanguineo,
                   p[j].convenio);
            cont++;
        }
    }

    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n\n");

    if (cont == 0)
    {
        printf("Nenhum paciente inativo!\n");
    }
    else
    {
        printf("Deseja reativar algum paciente? (y/n): ");
        scanf("%s", op);

        if (strcmp(op, "y") == 0)
        {
            int codigo;
            bool encontrado = false;

            printf("Digite o codigo do paciente: ");
            scanf("%i", &codigo);

            for (int j = 0; j < i; j++)
            {
                if (p[j].codigo == codigo && p[j].ativo == false)
                {
                    p[j].ativo = true;

                    printf("\nPaciente reativado com sucesso!\n");
                    exibirPaciente(j);

                    encontrado = true;
                    break;
                }
            }

            if (encontrado == false)
            {
                printf("Paciente inativo nao encontrado.\n");
            }
        }
        else if (strcmp(op, "n") == 0)
        {
            printf("Retornando ao menu...\n");
        }
        else
        {
            printf("Opcao invalida.\n");
        }
    }

    system("pause");
}

// Função para consultar um paciente (buscar e exibir os dados)
void consultar()
{
    busca();

    if (j < i)
    {
        exibirPaciente(j);
        system("pause");
    }
}

// Função para cadastrar consultas
void cadastrarConsulta()
{
    busca();

    if (j >= i)
    {
        return;
    }

    c[qtdConsultas].codigoPaciente = p[j].codigo;

    printf("Digite a data da consulta (dd/mm/aaaa): ");
    scanf("%s", &c[qtdConsultas].data);

    printf("Digite o nome do médico: ");
    scanf(" %[^\n]s", &c[qtdConsultas].medico);

    printf("Digite o diagnóstico: ");
    scanf(" %[^\n]s", &c[qtdConsultas].diagnostico);

    c[qtdConsultas].consultaAtiva = true;

    qtdConsultas++;

    printf("\nConsulta cadastrada com sucesso!\n");
    printf("Paciente: %s\n", p[j].nome);

    system("pause");
}

// Consulta o histórico de consultas do paciente
void consultarHistorico()
{
    busca();

    if (j >= i)
    {
        return;
    }

    int codigoPaciente = p[j].codigo;
    bool encontrouConsulta = false;

    cabecalho("HISTÓRICO DE CONSULTAS");

    printf("Paciente: %s\n", p[j].nome);
    printf("Código: %i\n\n", p[j].codigo);

    for (int k = 0; k < qtdConsultas; k++)
    {
        if (c[k].codigoPaciente == codigoPaciente &&
            c[k].consultaAtiva)
        {
            printf("Consulta %i\n", k + 1);
            printf("Data: %s\n", c[k].data);
            printf("Médico: %s\n", c[k].medico);
            printf("Diagnóstico: %s\n", c[k].diagnostico);
            separador();

            encontrouConsulta = true;
        }
    }

    if (encontrouConsulta == false)
    {
        printf("Nenhuma consulta encontrada para este paciente.\n");
    }

    system("pause");
}

// Excluir uma consulta
void excluirConsulta()
{
    busca();

    if (j >= i)
    {
        return;
    }

    int codigoPaciente = p[j].codigo;
    int numConsulta = 0;

    printf("\nCONSULTAS ENCONTRADAS\n");
    separador();

    for (int k = 0; k < qtdConsultas; k++)
    {
        if (c[k].codigoPaciente == codigoPaciente &&
            c[k].consultaAtiva)
        {
            printf("%d - %s | %s | %s\n",
                   k,
                   c[k].data,
                   c[k].medico,
                   c[k].diagnostico);

            numConsulta++;
        }
    }

    if (numConsulta == 0)
    {
        printf("Nenhuma consulta encontrada.\n");
        system("pause");
        return;
    }

    int indice;

    printf("\nDigite o índice da consulta que deseja excluir: ");
    scanf("%d", &indice);

    if (indice >= 0 &&
        indice < qtdConsultas &&
        c[indice].codigoPaciente == codigoPaciente &&
        c[indice].consultaAtiva)
    {
        c[indice].consultaAtiva = false;
        printf("Consulta excluída com sucesso!\n");
    }
    else
    {
        printf("Consulta inválida.\n");
    }

    system("pause");
}

// Função para listar todos os pacientes ativos
void listar()
{
    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n");
    printf("| Código | Nome                 | CPF            | Nascimento | Sexo | Telefone       | Endereço                     | Tipo | Convênio             |\n");
    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n");

    for (int j = 0; j < i; j++)
    {
        if (p[j].ativo)
        {
            printf("| %-6d | %-20.20s | %-14.14s | %-10.10s | %-4.4s | %-14.14s | %-28.28s | %-4.4s | %-20.20s |\n",
                   p[j].codigo,
                   p[j].nome,
                   p[j].cpf,
                   p[j].nascimento,
                   p[j].sexo,
                   p[j].telefone,
                   p[j].endereco,
                   p[j].tipoSanguineo,
                   p[j].convenio);
        }
    }

    printf("+--------+----------------------+----------------+------------+------+----------------+------------------------------+------+----------------------+\n");

    system("pause");
}

// =============================================
// MENU PRINCIPAL
// =============================================

main()
{
    setlocale(LC_ALL, ".UTF-8");

    pacientesIniciais();
    consultasIniciais();
    int op;

    while (true)
    {
        cabecalho("SISTEMA DE PACIENTES");
        printf("1 - Cadastrar paciente\n");
        printf("2 - Editar paciente\n");
        printf("3 - Excluir paciente\n");
        printf("4 - Consultar paciente\n");
        printf("5 - Listar pacientes\n");
        printf("6 - Pacientes excluidos\n");
        printf("7 - Histórico de consultas\n");
        printf("8 - Cadastrar consulta\n");
        printf("9 - Excluir consulta\n");
        printf("10 - Sair\n");
        separador();

        printf("Selecione uma opção: ");
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
            excluidos();
            break;
        }
        case 7:
        {
            consultarHistorico();
            break;
        }
        case 8:
        {
            cadastrarConsulta();
            break;
        }
        case 9:
        {
            excluirConsulta();
            break;
        }
        case 10:
        {
            printf("Fechando o sistema...");
            break;
        }
        default:
        {
            printf("Opcão inválida\n");
            break;
        }
        }

        if (op == 10)
        {
            break;
        }
    }
}