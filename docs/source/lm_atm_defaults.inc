* section: [driver]

  +----------------------------------+----------------+----------------------------------------------------+
  | option                           | value          | description                                        |
  +==================================+================+====================================================+
  | cfl                              | ``0.8``        |                                                    |
  +----------------------------------+----------------+----------------------------------------------------+

* section: [eos]

  +----------------------------------+----------------+----------------------------------------------------+
  | option                           | value          | description                                        |
  +==================================+================+====================================================+
  | gamma                            | ``1.4``        | pres = rho ener (gamma - 1)                        |
  +----------------------------------+----------------+----------------------------------------------------+

* section: [lm-atmosphere]

  +----------------------------------+----------------+----------------------------------------------------+
  | option                           | value          | description                                        |
  +==================================+================+====================================================+
  | limiter                          | ``2``          | limiter (0 = none, 1 = 2nd order, 2 = 4th order)   |
  +----------------------------------+----------------+----------------------------------------------------+
  | proj_type                        | ``2``          | what are we projecting? 1 includes -Gp term in U*  |
  +----------------------------------+----------------+----------------------------------------------------+
  | grav                             | ``-2.0``       |                                                    |
  +----------------------------------+----------------+----------------------------------------------------+
