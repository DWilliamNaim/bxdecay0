#ifndef BXDECAY0_PD104LOW_H
#define BXDECAY0_PD104LOW_H

namespace bxdecay0 {

  class i_random;
  class event;

  void Pd104low(i_random & prng_,
		event & event_,
		const int levelkev_);

} // end of namespace bxdecay0

#endif // BXDECAY0_PD104LOW_H

// Local Variables: --
// mode: c++ --
// End: --
