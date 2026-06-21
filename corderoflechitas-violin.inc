\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "Vn."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble"
		\key d \major

		r4 r8 fis' fis' 8. e' d' 8  |
		b 2. b 4  |
		d' 4. fis' 8 fis' 8. e' d' 8  |
		b 2. b 4  |
%% 5
		d' 4. fis' 8 fis' 8. e' d' 8  |
		b 1  |
		a 1  |
		g' 4 a' 8 b' 4 d'' 8 e'' fis''  |
		g'' 1  |
%% 10
		a'' 2. a'' 4  |
		d'' 1  |
		g' 4 a' 8 b' 4 d'' 8 e'' fis''  |
		g'' 1  |
		a'' 1 ~  |
%% 15
		a'' 1  |
		R1  |
		g' 4 a' 8 b' 4 d'' 8 e'' fis''  |
		g'' 1  |
		a'' 2. a'' 4  |
%% 20
		d'' 1  |
		g' 4 a' 8 b' 4 d'' 8 e'' fis''  |
		g'' 1  |
		a'' 1 ~  |
		a'' 1  |
%% 25
		d'' 8 ( b' fis' ) d'' ( b' fis' ) d'' ( b' )  |
		cis'' 8 ( a' fis' ) cis'' ( a' fis' ) cis'' ( a' )  |
		d'' 8 ( b' g' ) d'' ( b' g' ) d'' ( b' )  |
		e'' 8 ( cis'' a' ) e'' ( cis'' a' ) e'' ( cis'' )  |
		d'' 8 ( b' g' ) d'' ( b' g' ) d'' ( b' )  |
%% 30
		e'' 8 ( cis'' a' e' ) a' 2  |
		a' 2 b'  |
		a' 2 r  |
		\bar "|."
	}
>>
