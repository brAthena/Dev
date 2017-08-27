/****************************************************************************!
*                _           _   _   _                                       *
*               | |__  _ __ / \ | |_| |__   ___ _ __   __ _                  *
*               | '_ \| '__/ _ \| __| '_ \ / _ \ '_ \ / _` |                 *
*               | |_) | | / ___ \ |_| | | |  __/ | | | (_| |                 *
*               |_.__/|_|/_/   \_\__|_| |_|\___|_| |_|\__,_|                 *
*                                                                            *
*                            www.brathena.org                                *
******************************************************************************
* src/config/brathena.h                                                       *
* Configura��es b�sicas de ativa��o e f�rmulas da renova��o                  *
******************************************************************************
* Copyright (c) brAthena Dev Team                                            *
* Copyright (c) Hercules Dev Team                                            *
* Copyright (c) Athena Dev Teams                                             *
*                                                                            *
* Licenciado sob a licen�a GNU GPL                                           *
* Para mais informa��es leia o arquivo LICENSE na ra�z do emulador           *
*****************************************************************************/

#ifndef CONFIG_BRATHENA_H
#define CONFIG_BRATHENA_H


// N�vel Max. Global (Base)
// [CarlosHenrq, 2016-10-27] 175 somente quando em execu��o no modo renewal.
#ifdef RENEWAL
	#define MAX_LEVEL 175
#else
	#define MAX_LEVEL 99
#endif

// Tabela de N�vel M�ximo por Classes
enum _max_level_ {
	max_baselv_normal = 99,				// -> N�vel Base: Classes normais e bab�s.
	max_baselv_trans = 99,				// -> N�vel Base: Transclasses
	max_baselv_third = 175,				// -> N�vel Base: Terceiras classes (ser� lido apenas caso em modo renewal)
	max_baselv_sne_ko = 160,			// -> N�vel Base: Super Aprendiz Extendido e Kagerou/Oboro
	
	max_joblv_novice = 10,				// -> N�vel Classe: Aprendiz
	max_joblv_first = 50,				// -> N�vel Classe: Primeiras classes
	max_joblv_second = 50,				// -> N�vel Classe: Segundas classes
	max_joblv_novice_t = 10,			// -> N�vel Classe: Aprendiz T.
	max_joblv_first_t = 50,				// -> N�vel Classe: Primeiras classes T.
	max_joblv_second_t = 70,			// -> N�vel Classe: Transclasses
	max_joblv_third = 60,				// -> N�vel Classe: Terceiras classes e Beb�s (ser� lido apenas caso em modo renewal)
	max_joblv_sne_ko = 50,				// -> N�vel Classe: Super Aprendiz Extendido e Kagerou/Oboro
	max_joblv_guns_ninja = 70,			// -> N�vel Classe: Gunslinger e Ninja	
	max_joblv_taekwon = 50,				// -> N�vel Classe: Taekwon
	max_joblv_taekwon_master = 50,		// -> N�vel Classe: Mestre Taekwon
	max_joblv_soullinker = 50,			// -> N�vel Classe: Soul Linker
	max_joblv_sn_snb = 99,				// -> N�vel Classe: Super Aprendiz e Super Aprendiz Beb�	
};

#define hom_max_level 99 // N�vel m�ximo para Homunculus.
#define hom_S_max_level 150 // N�vel m�ximo para Homunculus S

// Retornar do dano refletido para o redentor? ( 1=habilitado  0=desabilitado )
#define DEVOTION_REFLECT_DAMAGE 0

// Ressuscitar personagem quando teleportado? ( 1=habilitado  0=desabilitado )
#define warp_no_ress 0

// Equipamentos dropados por monstros j� s�o identificados ? ( 1=identificado  0=n�o identificado )
#define mob_drop_identified 0

// Permitir que alian�as sejam estabelecidas durante o per�odo de Guerras? ( 1=N�o Permitido  0=Permitido )
#define alliance_in_woe 0

// Com essa fun��o, assim que se conectar ao seu servidor,
// voc� receber� uma mensagem com os valores referentes �s taxas de Experi�ncia,
// Drop e Penalidade de Morte do servidor, vigentes naquele momento.
#define show_message_exp 1

///|----------------------|
///| Sistema Vip Oficial  |
///|----------------------|

// Ativar sistema vip ? ( 1=habilitado  0=desabilitado )
// Padr�o dos Servidores oficiais: 1
// NOTA: Desative caso use outro sistema vip.
#define enable_system_vip 1

// Level para jogadores vip.
#define level_vip 1

// Taxa de exp extra. (base e classe)
// 100 = 1x de exp
#define extra_exp_vip_base 100
#define extra_exp_vip_job 100

// Redu��o da penalidade de morte.
#define penalty_exp_vip_base 100
#define penalty_exp_vip_job 100

#endif // CONFIG_BRATHENA_H
