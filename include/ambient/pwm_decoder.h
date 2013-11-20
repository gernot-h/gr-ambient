/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_AMBIENT_PWM_DECODER_H
#define INCLUDED_AMBIENT_PWM_DECODER_H

#include <ambient/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace ambient {

    /*!
     * \brief <+description of block+>
     * \ingroup ambient
     *
     */
    class AMBIENT_API pwm_decoder : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<pwm_decoder> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ambient::pwm_decoder.
       *
       * To avoid accidental use of raw pointers, ambient::pwm_decoder's
       * constructor is in a private implementation
       * class. ambient::pwm_decoder::make is the public interface for
       * creating new instances.
       */
      static sptr make(int zero_len=10, int one_len=5, float slack=0.1, float threshold=0.5);
    };

  } // namespace ambient
} // namespace gr

#endif /* INCLUDED_AMBIENT_PWM_DECODER_H */

