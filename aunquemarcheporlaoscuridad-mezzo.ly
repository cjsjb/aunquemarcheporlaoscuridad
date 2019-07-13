% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Aunque marche por la oscuridad"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Mezzosoprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*71  %% 1-71
}
globalTempo = {
	\tempo 4 = 140  \skip 1*71
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "aunquemarcheporlaoscuridad-acordes.inc"
		\new StaffGroup <<
			\include "aunquemarcheporlaoscuridad-mezzo.inc"
		>>
	>>

	\layout { }
}
