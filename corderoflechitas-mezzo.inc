\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key d \major

		% intro
		R1*3  |
		r4 b' a' g'  |
%% 5
		a' 1  |
		r4 b' a' g'  |
		a' 1  |
		r4 fis' 8 g' 4 fis' 8 e' d' ( ~ 
		% warning: overlong bar truncated here |
		d' 8 b 2 ) r8 b b  |
%% 10
		\times 2/3 { cis' 4 cis' d' } cis' cis'  |
		r4 fis' 8 fis' \times 2/3 { fis' 4 e' fis' }  |
		g' 4 ( fis' 8 e' 4 d' 8 ) b 4 ~  |
		b 4 r b d'  |
		a' 1 ~  |
%% 15
		a' 1  |
		R1  |
		r4 fis' 8 g' 4 fis' 8 e' d' ( ~ 
		% warning: overlong bar truncated here |
		d' 8 b 2 ) r8 b b  |
		\times 2/3 { cis' 4 cis' d' } cis' cis'  |
%% 20
		r4 fis' 8 fis' \times 2/3 { fis' 4 e' fis' }  |
		g' 4 ( fis' 8 e' 4 d' 8 ) b 4 ~  |
		b 4 r r2  |
		r4 cis' 8 d' e' fis' g' a'  |
		a' 2. r8 fis'  |
%% 25
		fis' 8 fis' fis' fis' 4. r8 fis'  |
		e' 4 cis' 2 ~ cis' 8 r  |
		g' 4 g' 8 g' 4 fis' 8 g' 4  |
		e' 4 e' 2 r4  |
		g' 1  |
%% 30
		e' 2 r4 e'  |
		fis' 2 ( g' 
		% warning: overlong bar truncated here |
		fis' 2 ) r  |
		\bar "|."
	} % Voice

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		% intro
		Uh uh uh uh.
		Uh uh uh uh.

		"...cor" -- de -- ro de Dios,
		"...el" pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		ten pie -- dad. __

		"...cor" -- de -- ro de Dios,
		"...el" pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so __ tros,
		de no -- so -- tros ten pie -- dad.

		Cor -- de -- ro de Dios, que qui -- tas
		el pe -- ca -- do del mun -- do,
		da -- nos la paz. __
	}
>>
