# Memory Map

This document describes the memory addresses used in Super Dodgeball.

## Zero Page and Low Memory ($00-$FF)

| Address | Size | Description                                          | Symbol in vars.inc      |
|---------|------|------------------------------------------------------|-------------------------|
| $69     | 1    | MMC1 mapper data                                     | ACTIVE_BG1_BANK         |
| $6F     | 1    | Number of human players (Bean Ball: 1-4)             | NUM_HUMAN_PLAYERS       |
| $7A     | 1    | Player 2 Team                                        | PLAYER_2_TEAM           |
| $7B     | 1    | Player 1 Team                                        | PLAYER_1_TEAM           |
| $80     | 1    | Players alive on P2 team (normal)/CPU team (Bean Ball) | PLAYERS_ALIVE_P2      |
| $81     | 1    | Players alive on P1 team (normal)/Human team (Bean Ball) | PLAYERS_ALIVE_P1    |
| $FB     | 1    | Last value written to 4016 (NES controller register) | CONTROLLER_4016_LAST    |
| $FC     | 1    | Background Y Scroll value                            | NES_V_SCROLL            |
| $FD     | 1    | Background X Scroll value                            | NES_H_SCROLL            |
| $FE     | 1    | Internal copy of PPUMASK                             | PPU_MASK_STATUS         |
| $FF     | 1    | Internal copy of PPUCTRL                             | PPU_CONTROL_STATUS      |

## Stack and Extended Memory ($100+)

| Address | Size | Description                                          | Symbol in vars.inc      |
|---------|------|------------------------------------------------------|-------------------------|
| $100    | 1    | NMI flags                                            | NMI_FLAGS               |
| $168    | 1    | Used for left arrow tile in Bean Ball               | BEAN_BALL_LEFT_ARROW    |
| $169    | 1    | Used for right arrow tile in Bean Ball              | BEAN_BALL_RIGHT_ARROW   |

## Mid-Range Memory ($600+)

| Address | Size | Description                                          | Symbol in vars.inc      |
|---------|------|------------------------------------------------------|-------------------------|
| $613    | 1    | Palette offset                                       | PALETTE_OFFSET          |
| $614    | 1    | Current palette address                              | CURR_PALETTE_ADDR       |
| $617    | 1    | Current index into OAM                               | OAM_CURR_INDEX          |
| $6D9    | 1    | Currently loaded PRG bank                            | CURR_PRG_BANK           |
| $6EA    | 1    | Difficulty level                                     | DIFFICULTY_LEVEL        |
| $6FC    | 1    | Versus Mode team colors                              | VERSUS_TEAM_COLORS      |

## Sound and Music Memory ($700+)

| Address | Size | Description                                          | Symbol in vars.inc      |
|---------|------|------------------------------------------------------|-------------------------|
| $700    | 1    | Sound Type ($00 = Sound Effect, $02 = Music, $40 = ??) | SOUND_TYPE           |
| $701    | 1    | Current Song/Sound                                   | CURR_SONG_SOUND         |
| $717    | 1    | Music Speed/Tempo                                    | MUSIC_SPEED_TEMPO       |

## Reset Detection Memory ($7F0+)

| Address | Size | Description                                          | Symbol in vars.inc      |
|---------|------|------------------------------------------------------|-------------------------|
| $7F0    | 7    | "KUMAGAI" string used for reset detection            | KUMAGAI_STRING          |
