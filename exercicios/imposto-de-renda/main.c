/*
Yuri Thomaz dos Santos Carvalho
Exercício - Imposto de Renda
*/

#include <stdio.h>

int main() {

	const double VALOR_DEPENDENTES = 189.59;
	const double TETO_INSS = 908.85;
	const double DEBITO_FIXO = 528.00;
	const double ALIQUOTA_1 = 7.5 / 100;
	const double ALIQUOTA_2 = 15 / 100;
	const double ALIQUOTA_3 = 22.5 / 100;
	const double ALIQUOTA_4 = 27.5 / 100;

	int tipoPessoa = 0;

	int tabela = 0, dependentes = 0;
	double salarioBruto = 0.00, salarioLiquido = 0.00, calculoSalario = 0.00;
	double valeAlimentacao = 0.00, valeTransporte =0.00, outrosCreditos = 0.00;
	double planoSaude = 0.00, pensao = 0.00, outrosDebitos = 0.00, somaDebitos = 0.00;
	double inss = 0.00;
	double faixa1 = 0.00, faixa2 = 0.00, faixa3 = 0.00, faixa4 = 0.00;
	double deducao1 = 0.00, deducao2 = 0.00, deducao3 = 0.00, deducao4 = 0.00;
	double etapa1 = 0.00, etapa2 = 0.00, etapa3 = 0.00;
	double imposto1 = 0.00, imposto2 = 0.00, imposto3 = 0.00, imposto4 = 0.00, imposto5 = 0.00, totalImpostos = 0.00;

	int tipoImposto = 0, tipoServico = 0;
	double baseLucro = 0.00;
	double faturamento = 0.00;
	double receita = 0.00, despesas = 0.00;

	printf("\nCALCULADORA DE IMPOSTO DE RENDA\n");

	printf("\nSeja bem vindo ao cálculo do IRRF. Para começar, informe se deseja realizar o cálculo de:\n");

    REPETE_PESSOA:

	printf("\n1 - PESSOA FÍSICA (PF) \n2 - PESSOA JURÍDICA (PJ)\n");
	scanf("%d", &tipoPessoa);

		while ( tipoPessoa < 1 || tipoPessoa > 2 ) {

			printf("\nValor incorreto! Tente novamente.\n");
            goto REPETE_PESSOA;

		}

	switch ( tipoPessoa ) {

		case 1:

			printf("\nPrimeiro, precisamos de algumas informações financeiras:\n");

			printf("\n[CRÉDITOS]\n");

            REPETE_SALARIO:

			printf("\n- Salário bruto: R$");
			scanf("%lf", &salarioBruto);

			while ( salarioBruto < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_SALARIO;

			}

            REPETE_ALIMENTACAO:

			printf("\n- Vale-alimentação (não tributável): R$");
			scanf("%lf", &valeAlimentacao);

			while ( valeAlimentacao < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_ALIMENTACAO;

			}

            REPETE_TRANSPORTE:

			printf("\n- Vale-transporte (não tributável): R$");
			scanf("%lf", &valeTransporte);

			while ( valeTransporte < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_TRANSPORTE;

			}

            REPETE_CREDITOS:

			printf("\n- Créditos adicionais: R$");
			scanf("%lf", &outrosCreditos);

			while ( outrosCreditos < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_CREDITOS;

			}

			printf("\n[DÉBITOS]\n");

            REPETE_PLANO_SAUDE:

			printf("\n- Plano de saúde: R$");
			scanf("%lf", &planoSaude);

			while ( planoSaude < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_PLANO_SAUDE;

			}

            REPETE_DEPENDENTES:

			printf("\n- Dependentes: ");
			scanf("%d", &dependentes);

			while ( dependentes < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_DEPENDENTES;

			}

            REPETE_PENSAO:

			printf("\n- Pensão alimentícia: R$");
			scanf("%lf", &pensao);

			while ( pensao < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_PENSAO;

			}

            REPETE_DEBITOS:

			printf("\n- Débitos adicionais: R$");
			scanf("%lf", &outrosDebitos);

			while ( outrosDebitos < 0 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_DEBITOS;

			}

			printf("\nResumo:\n");

			printf("\n- Salário bruto......: R$%.2lf", salarioBruto);
			printf("\n- Vale-alimentação...: R$%.2lf", valeAlimentacao);
			printf("\n- Vale-transporte....: R$%.2lf", valeTransporte);
			printf("\n- Créditos adicionais: R$%.2lf", outrosCreditos);
			printf("\n- Plano de Saúde.....: R$%.2lf", planoSaude);
			printf("\n- Dependentes........: %d", dependentes);
			printf("\n- Pensão alimentícia.: R$%.2lf", pensao);
			printf("\n- Débitos adicionais.: R$%.2lf\n", outrosDebitos);

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

			somaDebitos = ( planoSaude + (dependentes * VALOR_DEPENDENTES) + pensao + outrosDebitos );

			if ( somaDebitos < DEBITO_FIXO )
				calculoSalario = ( (salarioBruto - inss) + outrosCreditos - DEBITO_FIXO );

			else
				calculoSalario = ( (salarioBruto - inss) + outrosCreditos - somaDebitos );

			printf("\nEscolha uma tabela de alíquotas:\n");

            REPETE_TABELA:

			printf("\n1 - FEVEREIRO/2024 \n2 - CRIAR TABELA\n");
			scanf("%d", &tabela);

			while ( tabela < 1 || tabela > 2 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_TABELA;

			}

			switch ( tabela ) {

				case 1:

					faixa1 = 2259.20, faixa2 = 2826.65, faixa3 = 3751.05, faixa4 = 4664.68;
					deducao1 = 169.44, deducao2 = 381.44, deducao3 = 662.77, deducao4 = 896.00;

					printf("\nFAIXAS  | VALORES (R$)          | ALÍQUOTA | DEDUÇÃO (R$)\n");
					printf("\nFaixa 1 | Até R$%6.2lf         | ISENTO   | R$0.00", faixa1);
					printf("\nFaixa 2 | R$%6.2lf a R$%6.2lf | 7.5%%     | R$%.2lf", faixa1 + 0.01, faixa2, deducao1);
					printf("\nFaixa 3 | R$%6.2lf a R$%6.2lf | 15%%      | R$%.2lf", faixa2 + 0.01, faixa3, deducao2);
					printf("\nFaixa 4 | R$%6.2lf a R$%6.2lf | 22.5%%    | R$%.2lf", faixa3 + 0.01, faixa4, deducao3);
					printf("\nFaixa 5 | Acima de R$%6.2lf    | 27.5%%    | R$%.2lf\n", faixa4 + 0.01, deducao4);

				    break;

				case 2:

					printf("\n[FAIXAS]\n");

                    REPETE_FAIXA_1:

					printf("\n- Faixa 1: R$");
					scanf("%lf", &faixa1);

					while ( faixa1 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_FAIXA_1;

					}

                    REPETE_FAIXA_2:

					printf("\n- Faixa 2: R$");
					scanf("%lf", &faixa2);

					while ( faixa2 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_FAIXA_2;

					}

                    REPETE_FAIXA_3:

					printf("\n- Faixa 3: R$");
					scanf("%lf", &faixa3);

					while ( faixa3 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_FAIXA_3;

					}

                    REPETE_FAIXA_4:

					printf("\n- Faixa 4: R$");
					scanf("%lf", &faixa4);

					while ( faixa4 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_FAIXA_4;

					}

					printf("\n[DEDUÇÕES]");

                    REPETE_DEDUCAO_1:

					printf("\n- Dedução 1: R$");
					scanf("%lf", &deducao1);

					while ( deducao1 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_DEDUCAO_1;

					}

                    REPETE_DEDUCAO_2:

					printf("\n- Dedução 2: R$");
					scanf("%lf", &deducao2);

					while ( deducao2 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_DEDUCAO_2;

					}

                    REPETE_DEDUCAO_3:

					printf("\n- Dedução 3: R$");
					scanf("%lf", &deducao3);

					while ( deducao3 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_DEDUCAO_3;

					}

                    REPETE_DEDUCAO_4:

					printf("\n- Dedução 4: R$");
					scanf("%lf", &deducao4);

					while ( deducao4 < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_DEDUCAO_4;

					}

					printf("\nFAIXAS  | VALORES (R$)          | ALÍQUOTA | DEDUÇÃO (R$)\n");
					printf("\nFaixa 1 | Até R$%6.2lf         | ISENTO   | R$0.00", faixa1);
					printf("\nFaixa 2 | R$%6.2lf a R$%6.2lf | 7.5%%     | R$%.2lf", faixa1 + 0.01, faixa2, deducao1);
					printf("\nFaixa 3 | R$%6.2lf a R$%6.2lf | 15%%      | R$%.2lf", faixa2 + 0.01, faixa3, deducao2);
					printf("\nFaixa 4 | R$%6.2lf a R$%6.2lf | 22.5%%    | R$%.2lf", faixa3 + 0.01, faixa4, deducao3);
					printf("\nFaixa 5 | Acima de R$%6.2lf    | 27.5%%    | R$%.2lf\n", faixa4 + 0.01, deducao4);

				    break;

				default:

					printf("\nAlgo deu errado! Encerrando o programa.\n");
				    return 1;

			}

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
			printf("\nINSS    | R$%.2lf", inss);
			printf("\nFaixa 1 | R$%.2lf", imposto1);
			printf("\nFaixa 2 | R$%.2lf", imposto2);
			printf("\nFaixa 3 | R$%.2lf", imposto3);
			printf("\nFaixa 4 | R$%.2lf", imposto4);
			printf("\nFaixa 5 | R$%.2lf\n", imposto5);
			printf("\nTOTAL   | R$%.2lf\n", totalImpostos);

			printf("\nSeu salário líquido será R$%.2lf!\n", salarioLiquido);

		    break;

		case 2:

			printf("\nEscolha qual tipo de imposto será calculado:\n");

            REPETE_IMPOSTO:

			printf("\n1 - Simples Nacional (MEIs, MEs e EPPs)"
					"\n2 - Lucro Presumido (entre R$4 Mi a R$78 Mi / ano de faturamento)"
					"\n3 - Lucro Real (obrigatório acima de R$78 Mi / ano)"
					"\n4 - Lucro Arbitrado\n");
			scanf("%d", &tipoImposto);

			while ( tipoImposto < 1 || tipoImposto > 4 ) {

				printf("\nValor incorreto! Tente novamente.\n");
                goto REPETE_IMPOSTO;

			}

			switch ( tipoImposto ) {

				case 1:

					printf("\nSua tributação está inclusa no DAS. Procure mais informações.\n");
				    break;

				case 2:

                    REPETE_FATURAMENTO:

					printf("\n- Faturamento (trimestral): R$");
					scanf("%lf", &faturamento);

					while ( faturamento < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_FATURAMENTO;

					}

					printf("\nServiço prestado:\n");

                    REPETE_SERVICO:

					printf("\n1 - COMBUSTÍVEL (1.6%%) \n2 - TRANSPORTES (16%%*) \n3 - SERVIÇOS GERAIS (32%%) \n4 - COMÉRCIO (8%%)\n");
					scanf("%d", &tipoServico);

					while ( tipoServico < 1 || tipoServico > 4 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_SERVICO;

					}

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

                    REPETE_RECEITA:

					printf("\n- Receita (mensal): R$");
					scanf("%lf", &receita);

					while ( receita < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_RECEITA;

					}

                    REPETE_DESPESAS:

					printf("\n- Despesas (mensal): R$");
					scanf("%lf", &despesas);

					while ( despesas < 0 ) {

						printf("\nValor incorreto! Tente novamente.\n");
                        goto REPETE_DESPESAS;

					}

					baseLucro = ( receita - despesas );

					if ( baseLucro <= 0 ) {

						printf("\nVocê não posui valores a declarar!\n");

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

					printf("\nProcure a Receita Federal para resolver sua situação tributária.\n");
				    break;

			}

		    break;

		default:

			printf("\nAlgo deu errado! Encerrando o programa.\n");
		    return 1;

	}

	return 0;

}
