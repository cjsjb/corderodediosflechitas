\context Staff = "cello1" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello 1"
	\set Staff.shortInstrumentName = "Cl.1"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "bass"
		\key d \major

		a 1  |
		g 8 g g g g 4 g  |
		fis 1  |
		g 8 g g g g 4 g  |
%% 5
		d 1  |
		g 8 g g g g 4 g  |
		d 1  |
		e, 1  |
		g, 1  |
%% 10
		a, 1  |
		d, 1  |
		e, 1  |
		g, 1  |
		a, 1 ~  |
%% 15
		a, 1  |
		R1  |
		g 4 a 8 b 4 d' 8 e' fis'  |
		g' 1  |
		cis' 2. a 4  |
%% 20
		d 1  |
		e 1  |
		g 1  |
		a 1 ~  |
		a 1  |
%% 25
		b, 4. b, b, 4  |
		fis, 4. fis, fis, 4  |
		g, 4. g, g, 4  |
		a, 4. a, a, 4  |
		g, 4. g, g, 4  |
%% 30
		a, 2 a,  |
		d, 2 g,  |
		d, 2 r  |
		\bar "|."
	}
>>
