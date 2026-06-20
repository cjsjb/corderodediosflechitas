\context Staff = "cello2" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello 2"
	\set Staff.shortInstrumentName = "Cl.2"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello2" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "bass"
		\key d \major

		d 1  |
		d 2 g, 4 g,  |
		d, 2 d, 4 d,  |
		g, 2 g, 4 g,  |
%% 5
		a, 1  |
		g, 1  |
		a, 1  |
		e 1  |
		d 1  |
%% 10
		e 1  |
		d 1  |
		e 1  |
		d 1  |
		e 1 ~  |
%% 15
		e 1  |
		R1  |
		e, 1  |
		g, 1  |
		a, 1  |
%% 20
		d, 1  |
		e 1  |
		d 1  |
		e 1 ~  |
		e 1  |
%% 25
		b, 4. b, b, 4  |
		fis, 4. fis, fis, 4  |
		g, 4. g, g, 4  |
		a, 4 b, 8 cis 4 d 8 e fis  |
		g 4. g g 4  |
%% 30
		a 2 e  |
		d 2 d  |
		d 2 r  |
		\bar "|."
	}
>>
