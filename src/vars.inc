; Original Game Variables

ACTIVE_BG1_BANK         = $69    ; MMC1 mapper data
NUM_HUMAN_PLAYERS       = $6F    ; Number of human players (Bean Ball: 1-4)
PLAYER_2_TEAM           = $7A    ; Player 2 Team
PLAYER_1_TEAM           = $7B    ; Player 1 Team
PLAYERS_ALIVE_P2        = $80    ; Players alive on P2 team (normal)/CPU team (Bean Ball)
PLAYERS_ALIVE_P1        = $81    ; Players alive on P1 team (normal)/Human team (Bean Ball)
CONTROLLER_4016_LAST    = $FB    ; Last value written to 4016 (NES controller register)
NES_V_SCROLL            = $FC    ; Background Y Scroll value
NES_H_SCROLL            = $FD    ; Background X Scroll value
PPU_MASK_STATUS         = $FE    ; Internal copy of PPUMASK
PPU_CONTROL_STATUS      = $FF    ; Internal copy of PPUCTRL
NMI_FLAGS               = $100   ; NMI flags
ACTIVE_NES_BANK         = $0103
BEAN_BALL_LEFT_ARROW    = $168   ; Used for left arrow tile in Bean Ball
BEAN_BALL_RIGHT_ARROW   = $169   ; Used for right arrow tile in Bean Ball


; SNES Register Value storage
NMITIMEN_STATUS = $05C0
VMAIN_STATUS    = $05C1
INIDISP_STATE   = $05C2

SPRITE_LOOP_JUNK= $01A0 ; $0660


SPRITE_LOOKUP_LB = $007D
SPRITE_LOOKUP_HB = $007E
SPRITE_LOOKUP_DB = $007F

; Bank Switch Jump Variables
BANK_SWITCH_LB = $0190
BANK_SWITCH_HB = BANK_SWITCH_LB + 1
BANK_SWITCH_DB = BANK_SWITCH_LB + 2

; OBJ_CHR_BANK_SWITCH = $15C0
BG_CHR_BANK_SWITCH = $15C1
CHR_BANK_CURR_P1   = $15C2
BG_CHR_BANK_CURR   = $15C3
DATA_CHR_BANK_CURR = $15C7
TARGET_BANK_OFFSET = $15C8

CHR_BANK_READ_LB   = $15C4
CHR_BANK_READ_HB   = $15C5
CHR_BANK_READ_DB   = $15C6


HUD_HDMA_ENABLE    = $0FF0
HUD_HDMA_TABLE     = $1600


SNES_OAM_TRANSLATE_NEEDED = $0FF0
SNES_OAM_START = $1000

ATTR_HI_ADDR = $54  ; NES game specified value
ATTR_LO_ADDR = $53  ; NES game specified value
ATTR_VALUE   = $57  ; NES game specified value
ATTR_TARGET_STARTING_HB = $0193
ATTR_TARGET_STARTING_LB = $0194

ATTR_CURR_VM_WRITE_HB = $0195
ATTR_CURR_VM_WRITE_LB = $0196
ATTR_CURR_ATTR_VALUE  = $0197

; CHR_BANK_WORK
CHR_BANK_LOADED_TABLE = $1620
CHR_BANK_BANK_TO_LOAD = $1610
CHR_BANK_TARGET_BANK  = $1611

CHR_BANK_NEXT_OBJ_BANK= $1612
OBJ_CHR_HB          = $1615

; Paletter lookup consolidation
PALETTE_OFFSET = $613
CURR_PALETTE_ADDR = $614
OAM_CURR_INDEX = $617            ; Current index into OAM

PALETTE_LOAD_LB = $ED
PALETTE_LOAD_HB = $EE
PALETTE_LOAD_DB = $EF


; Game State Variables
CURR_PRG_BANK     = $6D9         ; Currently loaded PRG bank
DIFFICULTY_LEVEL  = $6EA         ; Difficulty level
VERSUS_TEAM_COLORS = $6FC        ; Versus Mode team colors
SOUND_TYPE        = $700         ; Sound Type ($00 = Sound Effect, $02 = Music, $40 = ??)
CURR_SONG_SOUND   = $701         ; Current Song/Sound
MUSIC_SPEED_TEMPO = $717         ; Music Speed/Tempo
KUMAGAI_STRING    = $7F0         ; "KUMAGAI" string used for reset detection (7 bytes)


; MSU Variables 1220 - 129F
; 1220 - 123f - 0x20 track availability (does .pcm file exist on game start)
; 1240 - 125f - 0x20 track enabled (do we want to use it)
; 1260 - 126f - various msu variabes
; 127f - 129f - currently unused
TRACKS_AVAILABLE = $1220     ; Is MSU track present
TRACKS_ENABLED = $1240       ; Is MSU track enabled

.DEFINE CURRENT_NSF     $126F
.DEFINE MSU_TRACK_IDX   $126E
.DEFINE MSU_AVAILABLE   $126D
.DEFINE MSU_PLAYING      $126C
.DEFINE MSU_TRIGGER     $126B
.DEFINE MSU_SELECTED     $126A

.DEFINE MSU_CURR_VOLUME $1269
.DEFINE MSU_CURR_CTRL   $1268

.DEFINE MSU_TIMER_HB    $1267
.DEFINE MSU_TIMER_LB    $1266
.DEFINE MSU_TIMER_ON    $1265
.DEFINE MSU_TIMER_INDX  $1264
.DEFINE MSU_700_OVERWRITE $1263
.DEFINE MSU_SONG_PLAYING $1262
.DEFINE MSU_701_OVERWRITE $1261