\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key d \major

		% intro
            R1*6  |

            r4 r8 fis' \times 2/3 { fis' 4 e' fis' }  |
            g' 1  |
            r4 r8 d' d' d' b d'  |
%% 10
            \times 2/3 { e' 4 e' fis' } e' e'  |
            r4 fis' 8 fis' \times 2/3 { fis' 4 e' fis' }  |
            b' 4 ( a' 8 g' 4 fis' 8 ) e' 4  |
            r2 b 4 d'  |
            e' 1 ~  |
%% 15
            e' 1  |
            r4 r8 fis' \times 2/3 { fis' 4 e' fis' }  |
            g' 1  |
            r4. d' 8 d' d' b d'  |
            \times 2/3 { e' 4 e' fis' } e' e'  |
%% 20
            r4 fis' 8 fis' \times 2/3 { fis' 4 e' fis' }  |
            b' 4 ( a' 8 g' 4 fis' 8 ) e' 4  |
            r2 b 4 d'  |
            e' 1 ~  |
            e' 2. r8 fis'  |
%% 25
            fis' 8 b' b' b' 2 b' 8  |
            a' 4 fis' 2.  |
            b' 4 b' 8 b' 4 a' 8 b' 4  |
            a' 4 a' 2.  |
            b' 1  |
%% 30
            a' 2 r4 e'  |
            fis' 2 ( g'  |
            fis' 2 ) r  |
		\bar "|."
	} % Voice

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Cor -- de -- ro de Dios,
		que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios,
		que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios, que qui -- tas
		el pe -- ca -- do del mun -- do,
		da -- nos la paz. __
	}
>>
