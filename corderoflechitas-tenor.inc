\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key d \major

		% intro
		R1*2  |
		r4 d' 2 ~ d' 8 b 16 ( a )  |
		b 16 ( a ~ a 8 ~ a 2 ) r4  |
%% 5
		r4 d' 2 ~ d' 8 b 16 ( a )  |
		b 16 ( a ~ a 8 ~ a 2 ) r4  |
		r4 r8 d' d' 8. b d' 8  |
		b 1  |
		r4 r8 g g g e g  |
%% 10
		a 8. a b 8 a 4 a  |
		r4 d' 8 d' d' 8. cis' d' 8  |
		d' 4 ( cis' 8 b 4 a 8 ) g 4 ~  |
		g 4 r e g  |
		a 1 ~  |
%% 15
		a 1  |
		r4 r8 d' d' 8. b d' 8  |
		b 1  |
		r4. g 8 g g e g  |
		a 8. a b 8 a 4 a  |
%% 20
		r4 d' 8 d' d' 8. cis' d' 8  |
		d' 4 ( cis' 8 b 4 a 8 ) g 4 ~  |
		g 4 r b d'  |
		cis' 1 ~  |
		cis' 2. r8 fis  |
%% 25
		fis 8 d' d' d' 2 d' 8  |
		cis' 4 a 2.  |
		d' 4 d' 8 d' 4 cis' 8 d' 4  |
		cis' 4 cis' 2.  |
		d' 1  |
%% 30
		cis' 2 r4 cis'  |
		d' 1 ~  |
		d' 2 r  |
		\bar "|."
	} % Voice

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% intro
		Uh uh __ uh. __
		Uh uh __ uh. __

		Cor -- de -- ro de Dios,
		que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		ten pie -- dad. __

		Cor -- de -- ro de Dios,
		que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		ten pie -- dad.

		Cor -- de -- ro de Dios, que qui -- tas
		el pe -- ca -- do del mun -- do,
		da -- nos la paz. __
	}
>>
