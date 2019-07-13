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

		\time 4/4
		\clef "treble_8"
		\key c \major

		R1*5  |
		g 4 g g g  |
		e 4 d 8 c 4 d 8 c 4  |
		f 4 f a 8 f 4 g 8 ~  |
		g 2. r4  |
%% 10
		g 4 g g g  |
		e 8 d 4 c r8 c c  |
		f 8 e d c d d 4 c 8 ~  |
		c 2. r4  |
		R1  |
%% 15
		g 4 g e e  |
		d 4. c r8 c  |
		a 4 g f e  |
		g 2. r4  |
		a 4 a g f  |
%% 20
		g 4. c r4  |
		R1  |
		r2 r4 b 8 b  |
		b 8 b ~ b b ~ b 2  |
		c' 4 c' 2.  |
%% 25
		a 4 g 8 e 4 g 8 e g  |
		a 2. r4  |
		b 4. c' 4 c' 8 d' 4  |
		g 2. r4  |
		a 8 a b c' 4 r8 g g  |
%% 30
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. r4  |
		R1  |
		g 4 g e e  |
		d 4. c r8 c  |
%% 35
		f 4 e d c  |
		d 2. r4  |
		a 4 a g f  |
		g 4. c r4  |
		R1  |
%% 40
		r2 r4 b 8 b  |
		b 8 b ~ b b ~ b 2  |
		c' 4 c' 2.  |
		a 4 g 8 e 4 g 8 e g  |
		a 2. r4  |
%% 45
		b 4. c' 4 c' 8 d' 4  |
		g 2. r4  |
		a 8 a b c' 4 r8 g g  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. r4  |
%% 50
		R1  |
		g 4 g e e  |
		d 4. c r4  |
		f 4 e d c  |
		d 2. r4  |
%% 55
		a 4 a g f  |
		g 4. c r4  |
		R1  |
		r2 r4 b 8 b  |
		b 8 b ~ b b ~ b 2  |
%% 60
		c' 4 c' 2.  |
		a 4 g 8 e 4 g 8 e g  |
		a 2. r4  |
		b 4. c' 4 c' 8 d' 4  |
		g 2. r4  |
%% 65
		a 8 a b c' 4 r8 g g  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2. g 8 g  |
		c' 8 c' c' c' b b 4 c' 8 ~  |
		c' 2 r4 g 8 g  |
%% 70
		c' 8 c' c' c' b b 4 -\staccato r8  |
		c' 4 r r2  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- mer, __
		por que Tú con -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tú que me conduces...
		Tú que me con -- du -- ces
		a tus fuen -- tes de paz,
		Tú "me has" bau -- ti -- za -- "do..."
		"...por" tu sen -- da voy.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- "mer..." __
		       "...con" -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tú que me preparas...
		Tú que me pre -- pa -- ras
		tu me -- sa en la fe,
		Tú me das la co -- "pa..."
		"...re" -- bo -- san "do es" -- tá.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- "mer..." __
		       "...con" -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar. __

		% Tu bondad comigo...
		Tu bon -- dad con -- mi -- go
		lle -- "ga has" -- "ta el" fi -- nal,
		y mi vi -- "da en" -- te -- "ra..."
		"...pa" -- ra ti se -- rá.

		% Estribillo
		Aun -- que mar -- che por "la os" -- cu -- ri -- dad
		na -- "da he" de te -- "mer..." __
		       "...con" -- mi -- go vas,
		mi pas -- tor que "me ha" -- ce so -- se -- gar, __
		mi pas -- tor que "me ha" -- ce so -- se -- gar, __
		mi pas -- tor que "me ha" -- ce so -- se -- gar.
	}
>>
