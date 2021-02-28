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

		\time 4/4
		\clef "treble"
		\key c \major

		R1*5  |
		g' 4 g' g' g'  |
		e' 4 d' 8 c' 4 d' 8 c' 4  |
		c' 4 c' c' 8 c' 4 b 8 ~  |
		b 2. r4  |
%% 10
		g' 4 g' g' g'  |
		e' 8 d' 4 c' r8 c' c'  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. r4  |
		R1  |
%% 15
		g' 4 g' e' e'  |
		d' 4. c' r8 c'  |
		c' 4 c' c' c'  |
		b 2. r4  |
		a' 4 a' g' f'  |
%% 20
		e' 4. c' r4  |
		a 2 c'  |
		c' 8 b ~ b b ~ b 2  |
		R1  |
		g' 4 g' g' g'  |
%% 25
		e' 4 d' 8 c' 4 d' 8 c' 4  |
		c' 4 c' c' 8 c' 4 b 8 ~  |
		b 2. r4  |
		g' 4 g' g' g'  |
		e' 8 d' 4 c' r8 c' c'  |
%% 30
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. r4  |
		R1  |
		g' 4 g' e' e'  |
		d' 4. c' r8 c'  |
%% 35
		c' 4 c' c' c'  |
		b 2. r4  |
		a' 4 a' g' f'  |
		e' 4. c' r4  |
		a 2 c'  |
%% 40
		c' 8 b ~ b b ~ b 2  |
		R1  |
		g' 4 g' g' g'  |
		e' 4 d' 8 c' 4 d' 8 c' 4  |
		c' 4 c' c' 8 c' 4 b 8 ~  |
%% 45
		b 2. r4  |
		g' 4 g' g' g'  |
		e' 8 d' 4 c' r8 c' c'  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. r4  |
%% 50
		R1  |
		g' 4 g' e' e'  |
		d' 4. c' r4  |
		c' 4 c' c' c'  |
		b 2. r4  |
%% 55
		a' 4 a' g' f'  |
		e' 4. c' r4  |
		a 2 c'  |
		c' 8 b ~ b b ~ b 2  |
		R1  |
%% 60
		g' 4 g' g' g'  |
		e' 4 d' 8 c' 4 d' 8 c' 4  |
		c' 4 c' c' 8 c' 4 b 8 ~  |
		b 2. r4  |
		g' 4 g' g' g'  |
%% 65
		e' 8 d' 4 c' r8 c' c'  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2 r4 c' 8 c'  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2 r4 c' 8 c'  |
%% 70
		c' 8 c' c' c' b b 4 -\staccato r8  |
		c' 4 r r2  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- mer, __
		por que Tú con -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tú que me conduces...
		Tú que me con -- du -- ces
		a tus fuen -- tes de paz,
		Tú "me has" bau -- ti -- za -- do,
		por tu sen -- da voy.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- mer, __
		por que Tú con -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tú que me preparas...
		Tú que me pre -- pa -- ras
		tu me -- sa en la fe,
		Tú me das la co -- pa,
		re -- bo -- san "do es" -- tá.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- mer, __
		por que Tú con -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tu bondad comigo...
		Tu bon -- dad con -- mi -- go
		lle -- "ga has" -- "ta el" fi -- nal,
		y mi vi -- "da en" -- te -- ra
		pa -- ra ti se -- rá.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- mer, __
		por que Tú con -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar, __
		mi pas -- tor que "me ha" -- ce so -- se -- gar, __
		mi pas -- tor que "me ha" -- ce so -- se -- gar.
	}
>>
