\context Staff = "violin2" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín 2"
	\set Staff.shortInstrumentName = "Vn.2"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin2" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble"
		\key d \major

		R1  |
		r4 b'' a'' g''  |
		fis'' 1  |
		g'' 4 g'' fis'' e''  |
%% 5
		d'' 1  |
		d'' 1  |
		d'' 1  |
		e'' 1  |
		d'' 1  |
%% 10
		cis'' 1  |
		fis'' 1  |
		e'' 1  |
		d'' 1  |
		cis'' 1 ~  |
%% 15
		cis'' 1  |
		R1  |
		e'' 1  |
		d'' 1  |
		e'' 1  |
%% 20
		fis'' 1  |
		e'' 1  |
		d'' 1  |
		cis'' 1 ~  |
		cis'' 1  |
%% 25
		b' 8 ( fis' d' ) b' ( fis' d' ) b' ( fis' )  |
		a' 8 ( fis' cis' ) a' ( fis' cis' ) a' ( fis' )  |
		b' 8 ( g' d' ) b' ( g' d' ) b' ( g' )  |
		cis'' 8 ( a' e' ) cis'' ( a' e' ) cis'' ( a' )  |
		b' 8 ( g' d' ) b' ( g' d' ) b' ( g' )  |
%% 30
		cis'' 8 ( a' e' cis' ) e' 2  |
		fis' 2 g'  |
		fis' 2 r  |
		\bar "|."
	}
>>
