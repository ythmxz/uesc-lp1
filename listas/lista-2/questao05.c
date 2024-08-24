/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 05
*/
/*
Crie um programa qual entre com argumentos e desenvolva funções que:

a) Calcule o valor líquido do salário à ser recebido por um colaborador;

b) Calcule o valor total do salário à ser pago a um colaborador, por parte da empresa;
*/

#include <stdio.h>
#include <stdlib.h>

double inss(double salarioBruto);

int main(int argc, char *argv[]) {

	const double VALOR_DEPENDENTES = 189.59;
	const double DEBITO_FIXO = 528.00;
	const double ALIQUOTA_1 = 7.5 / 100;
	const double ALIQUOTA_2 = 15 / 100;
	const double ALIQUOTA_3 = 22.5 / 100;
	const double ALIQUOTA_4 = 27.5 / 100;

	int tipoPessoa = atoi(argv[1]);

	int dependentes = 0;
	double salarioBruto = atof(argv[2]), salarioLiquido = 0.00, calculoSalario = 0.00;
	double valeAlimentacao = atof(argv[3]), valeTransporte = atof(argv[4]), outrosCreditos = atof(argv[5]);
	double planoSaude = atof(argv[6]), pensao = atof(argv[7]), outrosDebitos = atof(argv[8]), somaDebitos = 0.00;
	double valorINSS = 0.00;
	double faixa1 = 0.00, faixa2 = 0.00, faixa3 = 0.00, faixa4 = 0.00;
	double deducao1 = 0.00, deducao2 = 0.00, deducao3 = 0.00, deducao4 = 0.00;
	double etapa1 = 0.00, etapa2 = 0.00, etapa3 = 0.00;
	double imposto1 = 0.00, imposto2 = 0.00, imposto3 = 0.00, imposto4 = 0.00, imposto5 = 0.00, totalImpostos = 0.00;

	int tipoImposto = atof(argv[2]), tipoServico = atof(argv[4]);
	double baseLucro = 0;
	double faturamento = atof(argv[3]);
	double receita = atof(argv[3]), despesas = atof(argv[4]);

	switch ( tipoPessoa ) {

		case 1:


			printf("\n[CRÉDITOS]\n");

			printf("\n- Salário bruto......: R$%.2lf", salarioBruto);
			printf("\n- Vale-alimentação...: R$%.2lf", valeAlimentacao);
			printf("\n- Vale-transporte....: R$%.2lf", valeTransporte);
			printf("\n- Créditos adicionais: R$%.2lf", outrosCreditos);

			printf("\n[DÉBITOS]\n");

			printf("\n- Plano de Saúde.....: R$%.2lf", planoSaude);
			printf("\n- Dependentes........: %d", dependentes);
			printf("\n- Pensão alimentícia.: R$%.2lf", pensao);
			printf("\n- Débitos adicionais.: R$%.2lf", outrosDebitos);

			somaDebitos = ( planoSaude + (dependentes * VALOR_DEPENDENTES) + pensao + outrosDebitos );

			valorINSS = inss(salarioBruto);

			if ( somaDebitos < DEBITO_FIXO )
				calculoSalario = ( (salarioBruto - valorINSS) + outrosCreditos - DEBITO_FIXO );
			else
				calculoSalario = ( (salarioBruto - valorINSS) + outrosCreditos - somaDebitos );

			faixa1 = 2259.20, faixa2 = 2826.65, faixa3 = 3751.05, faixa4 = 4664.68;
			deducao1 = 169.44, deducao2 = 381.44, deducao3 = 662.77, deducao4 = 896.00;

			printf("\nFAIXAS  | VALORES (R$)          | ALÍQUOTA | DEDUÇÃO (R$)\n");
			printf("\nFaixa 1 | Até R$%6.2lf         | ISENTO   | R$0.00", faixa1);
			printf("\nFaixa 2 | R$%6.2lf a R$%6.2lf | 7.5%%     | R$%.2lf", faixa1 + 0.01, faixa2, deducao1);
			printf("\nFaixa 3 | R$%6.2lf a R$%6.2lf | 15%%      | R$%.2lf", faixa2 + 0.01, faixa3, deducao2);
			printf("\nFaixa 4 | R$%6.2lf a R$%6.2lf | 22.5%%    | R$%.2lf", faixa3 + 0.01, faixa4, deducao3);
			printf("\nFaixa 5 | Acima de R$%6.2lf    | 27.5%%    | R$%.2lf", faixa4 + 0.01, deducao4);


			etapa1 = ( ((faixa2 - faixa1) * ALIQUOTA_1) + deducao1 );
			etapa2 = ( ((faixa3 - faixa2) * ALIQUOTA_2) + deducao2 );
			etapa3 = ( ((faixa4 - faixa3) * ALIQUOTA_3) + deducao3 );


			( calculoSalario <= faixa1 ) ? imposto1 = 0:
			( calculoSalario > faixa1 ) ? imposto1 = 0: (imposto1 = 0);

			( calculoSalario > faixa1 + 0.01 && calculoSalario <= faixa2 ) ?
			imposto2 = ( ((calculoSalario - faixa1) * ALIQUOTA_1) + deducao1 ) :
			( calculoSalario > faixa2 ) ? imposto2 = etapa1 : (imposto2 = 0);

			( calculoSalario > faixa2 + 0.01 && calculoSalario <= faixa3 ) ?
			imposto3 = ( ((calculoSalario - faixa2) * ALIQUOTA_2) + deducao2 ) :
			( calculoSalario > faixa3 ) ? imposto3 = etapa2 : (imposto3 = 0);

			( calculoSalario > faixa3 + 0.01 && calculoSalario <= faixa4 ) ?
			imposto4 = ( ((calculoSalario - faixa3) * ALIQUOTA_3) + deducao3 ) :
			( calculoSalario > faixa4 ) ? imposto4 = etapa3 : (imposto4 = 0);

			( calculoSalario > faixa4 + 0.01 ) ?
			imposto5 = ( ((calculoSalario - faixa4) * ALIQUOTA_4) + deducao4 ) : (imposto5 = 0);

			totalImpostos = ( imposto1 + imposto2 + imposto3 + imposto4 + imposto5 );

			salarioLiquido = ( (calculoSalario - totalImpostos) + valeAlimentacao + valeTransporte );

			if ( salarioLiquido < 0 )
			salarioLiquido = 0;

			printf("\nO cálculo acontece da seguinte forma:\n");

			printf("\n{[(Salário bruto - INSS) + Créditos adicionais - Soma dos débitos] * Alíquota}"
				" - Dedução + (Vale-alimentação + Vale-transporte) = Salário Líquido\n");

			printf("\nA tabela de imposto ficou assim:\n");

			printf("\nFAIXAS  | IMPOSTO (R$)\n");
			printf("\nINSS    | R$%.2lf", valorINSS);
			printf("\nFaixa 1 | R$%.2lf", imposto1);
			printf("\nFaixa 2 | R$%.2lf", imposto2);
			printf("\nFaixa 3 | R$%.2lf", imposto3);
			printf("\nFaixa 4 | R$%.2lf", imposto4);
			printf("\nFaixa 5 | R$%.2lf", imposto5);
			printf("\nTOTAL   | R$%.2lf\n", totalImpostos);

			printf("\nSeu salário líquido será R$%.2lf!\n", salarioLiquido);

			break;

		case 2:

			switch ( tipoImposto ) {

				case 1:

					printf("\nSimples Nacional (MEIs, MEs e EPPs)\n");
					printf("\nSua tributação está inclusa no DAS. Procure mais informações.\n");

					break;

				case 2:

					printf("\nLucro Presumido (entre R$4 Mi a R$78 Mi / ano de faturamento)\n");

					printf("\n- Faturamento (trimestral): R$%.2lf\n", faturamento);

					printf("\nServiço prestado:\n");

					printf("\n1 - COMBUSTÍVEL (1.6%%) \n2 - TRANSPORTES (16%%*) \n3 - SERVIÇOS GERAIS (32%%) \n4 - COMÉRCIO (8%%)\n");

					faixa1 = 60000.00;

					( tipoServico == 1 ) ? baseLucro = ( faturamento * 1.6 / 100 ) :
					( tipoServico == 2 ) ? baseLucro = ( faturamento * 16.0 / 100 ) :
					( tipoServico == 3 ) ? baseLucro = ( faturamento * 32.0 / 100 ) :
					( tipoServico == 4 ) ? baseLucro = ( faturamento * 8.0 / 100 ) : (baseLucro = 0.00);

					( baseLucro <= faixa1 ) ? imposto1 = (baseLucro * 15.0 / 100) :
					( baseLucro > faixa1 ) ? imposto1 = (faixa1 * 15.0 / 100) : (imposto1 = 0.00);

					( baseLucro > faixa1 ) ? imposto2 = (((baseLucro - faixa1) * 25 / 100)): (imposto2 = 0.00);

					totalImpostos = (imposto1 + imposto2);

					printf("\n- Imposto aplicado ao lucro até R$%.2lf: R$%.2lf"
							"\n- Imposto aplicado ao lucro acima de R$%.2lf: R$%.2lf\n",faixa1, imposto1, faixa1, imposto2);

					printf("\nCom base no seu faturamento trimestral de R$%.2lf a sua base de lucro é de "
							"R$%.2lf e seu IRPJ trimestral será de R$%.2lf!\n", faturamento, baseLucro, totalImpostos);

					break;

				case 3:

					printf("\n\nLucro Real (obrigatório acima de R$78 Mi / ano)");

					printf("\n\n- Receita (mensal): R$%.2lf", receita);
					printf("\n- Despesas (mensal): R$%.2lf", despesas);

					baseLucro = ( receita - despesas );

					if ( baseLucro <= 0 ) {

						printf("\n\nVocê não posui valores a declarar!\n");
						return 0;

					}

					faixa1 = 20000.00;

					( baseLucro <= faixa1 ) ? imposto1 = ( baseLucro * 15.0 / 100 ) :
					( baseLucro > faixa1 ) ? imposto1 = ( faixa1 * 15.0 / 100 ) : (imposto1 = 0.0);

					( baseLucro > faixa1 ) ? imposto2 = ( (baseLucro - faixa1) * 25.0 / 100 ) : (imposto2 = 0);

					totalImpostos = ( imposto1 + imposto2 );

					printf("\n- Imposto aplicado ao lucro até R$%.2lf: R$%.2lf"
							"\n- Imposto aplicado ao lucro acima de R$%.2lf: R$%.2lf\n",faixa1, imposto1, faixa1, imposto2);

					printf("\nCom base no seu faturamento mensal de R$%.2lf "
							"o seu IRPJ mensal será de R$%.2lf!\n", baseLucro, totalImpostos);

					break;

				case 4:

					printf("\nLucro Arbitrado\n");
					printf("\nProcure a Receita Federal para resolver sua situação tributária.\n");

					break;

			}

			break;

		default:

			printf("\n\nAlgo deu errado! Encerrando o programa.\n");
			return 1;

	}

	return 0;

}

double inss(double salarioBruto) {

	const double TETO_INSS = 908.85;

	double inss = 0.00;

	if ( salarioBruto <= 1420.00 )
	inss = ( salarioBruto * (7.5 / 100) );

	else if ( salarioBruto > 1420.00 && salarioBruto <= 2666.68 )
	inss = ( salarioBruto * (9.0 / 100) );

	else if ( salarioBruto > 2666.68 && salarioBruto <= 4000.03 )
	inss = ( salarioBruto * (12.0 / 100) );

	else if ( salarioBruto > 4000.03 )
	inss = ( salarioBruto * (14.0 / 100) );

	else
	inss = 0.00;

	if ( inss > TETO_INSS )
	inss = TETO_INSS;

	return inss;

}
