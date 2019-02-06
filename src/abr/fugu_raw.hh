#ifndef FUGU_RAW_HH
#define FUGU_RAW_HH

#include "fugu.hh"

#include <deque>

class FuguRaw : public Fugu
{
public:
  FuguRaw(const WebSocketClient & client,
          const std::string & abr_name, const YAML::Node & abr_config);

private:
  static constexpr double ST_VAR_COEFF = 0.7;
  static constexpr double HIGH_SENDING_TIME = 10000;

  double st_var_coeff_ {ST_VAR_COEFF};

  void reinit_sending_time() override;
};

#endif /* FUGU_RAW_HH */
