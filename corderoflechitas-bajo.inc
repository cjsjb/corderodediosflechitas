\context Staff = "Bajo" <<
	\set Staff.instrumentName = "Bajo"
	\set Staff.shortInstrumentName = "B."
	\set Staff.midiInstrument = "Acoustic Grand Piano"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "instrumento-bajo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1
		\once \override Staff.TimeSignature #'style = #'() \time 4/4

		\clef "bass"
		\key d \major
		d, 1  |
		g, 1  |
		d, 1  |
		g, 1  |
%% 5
		d, 1  |
		g, 1  |
		d, 1  |
		e, 1  |
		g, 1  |
%% 10
		a, 1  |
		d, 1  |
		e, 1  |
		g, 1  |
		a, 1  |
%% 15
		a, 1  |
		d, 1  |
		e, 1  |
		g, 1  |
		a, 1  |
%% 20
		d, 1  |
		e, 1  |
		g, 1  |
		a, 1  |
		a, 1  |
%% 25
		b, 1  |
		fis, 1  |
		g, 1  |
		a, 1  |
		g, 1  |
%% 30
		a, 2 r  |
		d, 2 g,  |
		d, 1  |
		\bar "|."
	}
>>
