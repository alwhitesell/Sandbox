#ifndef PAUSE_STATE_H
#define PAUSE_STATE_H

#include "state.h"

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>


class PauseState : public State
{
public:
							PauseState(StateStack& stack, Context context);

	virtual void			draw();
	virtual bool			update(sf::Time);
	virtual bool			handleEvent(const sf::Event&);


private:
	sf::Sprite				mBackgroundSprite;
	sf::Text				mPausedText;
	sf::Text				mInstructionText;
};

#endif
