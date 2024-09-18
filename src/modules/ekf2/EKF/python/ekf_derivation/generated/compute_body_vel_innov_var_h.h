// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <matrix/math.hpp>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: compute_body_vel_innov_var_h
 *
 * Args:
 *     state: Matrix25_1
 *     P: Matrix24_24
 *     R: Matrix31
 *
 * Outputs:
 *     innov_var: Matrix31
 *     Hx: Matrix24_1
 *     Hy: Matrix24_1
 *     Hz: Matrix24_1
 */
template <typename Scalar>
void ComputeBodyVelInnovVarH(const matrix::Matrix<Scalar, 25, 1>& state,
                             const matrix::Matrix<Scalar, 24, 24>& P,
                             const matrix::Matrix<Scalar, 3, 1>& R,
                             matrix::Matrix<Scalar, 3, 1>* const innov_var = nullptr,
                             matrix::Matrix<Scalar, 24, 1>* const Hx = nullptr,
                             matrix::Matrix<Scalar, 24, 1>* const Hy = nullptr,
                             matrix::Matrix<Scalar, 24, 1>* const Hz = nullptr) {
  // Total ops: 371

  // Input arrays

  // Intermediate terms (63)
  const Scalar _tmp0 = 2 * state(5, 0);
  const Scalar _tmp1 = _tmp0 * state(3, 0);
  const Scalar _tmp2 = 2 * state(6, 0);
  const Scalar _tmp3 = _tmp2 * state(2, 0);
  const Scalar _tmp4 = _tmp1 - _tmp3;
  const Scalar _tmp5 = (Scalar(1) / Scalar(2)) * state(2, 0);
  const Scalar _tmp6 = _tmp0 * state(2, 0);
  const Scalar _tmp7 = _tmp2 * state(3, 0);
  const Scalar _tmp8 = _tmp6 + _tmp7;
  const Scalar _tmp9 = (Scalar(1) / Scalar(2)) * state(3, 0);
  const Scalar _tmp10 = 4 * state(4, 0);
  const Scalar _tmp11 = _tmp0 * state(0, 0);
  const Scalar _tmp12 = 2 * state(1, 0);
  const Scalar _tmp13 = _tmp12 * state(6, 0);
  const Scalar _tmp14 = -_tmp10 * state(3, 0) + _tmp11 + _tmp13;
  const Scalar _tmp15 = (Scalar(1) / Scalar(2)) * state(1, 0);
  const Scalar _tmp16 = _tmp0 * state(1, 0);
  const Scalar _tmp17 = _tmp2 * state(0, 0);
  const Scalar _tmp18 = -_tmp10 * state(2, 0) + _tmp16 - _tmp17;
  const Scalar _tmp19 = (Scalar(1) / Scalar(2)) * state(0, 0);
  const Scalar _tmp20 = -_tmp14 * _tmp15 + _tmp18 * _tmp19 - _tmp4 * _tmp5 + _tmp8 * _tmp9;
  const Scalar _tmp21 = 2 * state(2, 0);
  const Scalar _tmp22 = _tmp21 * state(0, 0);
  const Scalar _tmp23 = _tmp12 * state(3, 0);
  const Scalar _tmp24 = -_tmp22 + _tmp23;
  const Scalar _tmp25 = 2 * state(0, 0) * state(3, 0);
  const Scalar _tmp26 = _tmp12 * state(2, 0);
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -2 * std::pow(state(3, 0), Scalar(2));
  const Scalar _tmp29 = 1 - 2 * std::pow(state(2, 0), Scalar(2));
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp14 * _tmp19 + _tmp15 * _tmp18 - _tmp4 * _tmp9 - _tmp5 * _tmp8;
  const Scalar _tmp32 = _tmp14 * _tmp5 - _tmp15 * _tmp4 - _tmp18 * _tmp9 + _tmp19 * _tmp8;
  const Scalar _tmp33 = -_tmp25 + _tmp26;
  const Scalar _tmp34 = _tmp21 * state(3, 0);
  const Scalar _tmp35 = _tmp12 * state(0, 0);
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = -2 * std::pow(state(1, 0), Scalar(2));
  const Scalar _tmp38 = _tmp28 + _tmp37 + 1;
  const Scalar _tmp39 = 2 * state(4, 0);
  const Scalar _tmp40 = _tmp39 * state(3, 0);
  const Scalar _tmp41 = _tmp13 - _tmp40;
  const Scalar _tmp42 = _tmp39 * state(1, 0);
  const Scalar _tmp43 = _tmp42 + _tmp7;
  const Scalar _tmp44 = _tmp39 * state(0, 0);
  const Scalar _tmp45 = 4 * state(5, 0);
  const Scalar _tmp46 = _tmp3 - _tmp44 - _tmp45 * state(3, 0);
  const Scalar _tmp47 = _tmp39 * state(2, 0);
  const Scalar _tmp48 = _tmp17 - _tmp45 * state(1, 0) + _tmp47;
  const Scalar _tmp49 = _tmp15 * _tmp43 + _tmp19 * _tmp46 - _tmp41 * _tmp9 - _tmp48 * _tmp5;
  const Scalar _tmp50 = -_tmp15 * _tmp46 + _tmp19 * _tmp43 - _tmp41 * _tmp5 + _tmp48 * _tmp9;
  const Scalar _tmp51 = -_tmp15 * _tmp41 + _tmp19 * _tmp48 - _tmp43 * _tmp9 + _tmp46 * _tmp5;
  const Scalar _tmp52 = _tmp42 + _tmp6;
  const Scalar _tmp53 = -_tmp16 + _tmp47;
  const Scalar _tmp54 = 4 * state(6, 0);
  const Scalar _tmp55 = _tmp1 + _tmp44 - _tmp54 * state(2, 0);
  const Scalar _tmp56 = -_tmp11 + _tmp40 - _tmp54 * state(1, 0);
  const Scalar _tmp57 = -_tmp15 * _tmp52 + _tmp19 * _tmp55 - _tmp5 * _tmp53 + _tmp56 * _tmp9;
  const Scalar _tmp58 = _tmp34 - _tmp35;
  const Scalar _tmp59 = _tmp22 + _tmp23;
  const Scalar _tmp60 = _tmp29 + _tmp37;
  const Scalar _tmp61 = _tmp15 * _tmp55 + _tmp19 * _tmp52 - _tmp5 * _tmp56 - _tmp53 * _tmp9;
  const Scalar _tmp62 = -_tmp15 * _tmp53 + _tmp19 * _tmp56 + _tmp5 * _tmp52 - _tmp55 * _tmp9;

  // Output terms (4)
  if (innov_var != nullptr) {
    matrix::Matrix<Scalar, 3, 1>& _innov_var = (*innov_var);

    _innov_var(0, 0) = R(0, 0) +
                       _tmp20 * (P(0, 1) * _tmp32 + P(1, 1) * _tmp20 + P(2, 1) * _tmp31 +
                                 P(3, 1) * _tmp30 + P(4, 1) * _tmp27 + P(5, 1) * _tmp24) +
                       _tmp24 * (P(0, 5) * _tmp32 + P(1, 5) * _tmp20 + P(2, 5) * _tmp31 +
                                 P(3, 5) * _tmp30 + P(4, 5) * _tmp27 + P(5, 5) * _tmp24) +
                       _tmp27 * (P(0, 4) * _tmp32 + P(1, 4) * _tmp20 + P(2, 4) * _tmp31 +
                                 P(3, 4) * _tmp30 + P(4, 4) * _tmp27 + P(5, 4) * _tmp24) +
                       _tmp30 * (P(0, 3) * _tmp32 + P(1, 3) * _tmp20 + P(2, 3) * _tmp31 +
                                 P(3, 3) * _tmp30 + P(4, 3) * _tmp27 + P(5, 3) * _tmp24) +
                       _tmp31 * (P(0, 2) * _tmp32 + P(1, 2) * _tmp20 + P(2, 2) * _tmp31 +
                                 P(3, 2) * _tmp30 + P(4, 2) * _tmp27 + P(5, 2) * _tmp24) +
                       _tmp32 * (P(0, 0) * _tmp32 + P(1, 0) * _tmp20 + P(2, 0) * _tmp31 +
                                 P(3, 0) * _tmp30 + P(4, 0) * _tmp27 + P(5, 0) * _tmp24);
    _innov_var(1, 0) = R(1, 0) +
                       _tmp33 * (P(0, 3) * _tmp51 + P(1, 3) * _tmp50 + P(2, 3) * _tmp49 +
                                 P(3, 3) * _tmp33 + P(4, 3) * _tmp38 + P(5, 3) * _tmp36) +
                       _tmp36 * (P(0, 5) * _tmp51 + P(1, 5) * _tmp50 + P(2, 5) * _tmp49 +
                                 P(3, 5) * _tmp33 + P(4, 5) * _tmp38 + P(5, 5) * _tmp36) +
                       _tmp38 * (P(0, 4) * _tmp51 + P(1, 4) * _tmp50 + P(2, 4) * _tmp49 +
                                 P(3, 4) * _tmp33 + P(4, 4) * _tmp38 + P(5, 4) * _tmp36) +
                       _tmp49 * (P(0, 2) * _tmp51 + P(1, 2) * _tmp50 + P(2, 2) * _tmp49 +
                                 P(3, 2) * _tmp33 + P(4, 2) * _tmp38 + P(5, 2) * _tmp36) +
                       _tmp50 * (P(0, 1) * _tmp51 + P(1, 1) * _tmp50 + P(2, 1) * _tmp49 +
                                 P(3, 1) * _tmp33 + P(4, 1) * _tmp38 + P(5, 1) * _tmp36) +
                       _tmp51 * (P(0, 0) * _tmp51 + P(1, 0) * _tmp50 + P(2, 0) * _tmp49 +
                                 P(3, 0) * _tmp33 + P(4, 0) * _tmp38 + P(5, 0) * _tmp36);
    _innov_var(2, 0) = R(2, 0) +
                       _tmp57 * (P(0, 1) * _tmp62 + P(1, 1) * _tmp57 + P(2, 1) * _tmp61 +
                                 P(3, 1) * _tmp59 + P(4, 1) * _tmp58 + P(5, 1) * _tmp60) +
                       _tmp58 * (P(0, 4) * _tmp62 + P(1, 4) * _tmp57 + P(2, 4) * _tmp61 +
                                 P(3, 4) * _tmp59 + P(4, 4) * _tmp58 + P(5, 4) * _tmp60) +
                       _tmp59 * (P(0, 3) * _tmp62 + P(1, 3) * _tmp57 + P(2, 3) * _tmp61 +
                                 P(3, 3) * _tmp59 + P(4, 3) * _tmp58 + P(5, 3) * _tmp60) +
                       _tmp60 * (P(0, 5) * _tmp62 + P(1, 5) * _tmp57 + P(2, 5) * _tmp61 +
                                 P(3, 5) * _tmp59 + P(4, 5) * _tmp58 + P(5, 5) * _tmp60) +
                       _tmp61 * (P(0, 2) * _tmp62 + P(1, 2) * _tmp57 + P(2, 2) * _tmp61 +
                                 P(3, 2) * _tmp59 + P(4, 2) * _tmp58 + P(5, 2) * _tmp60) +
                       _tmp62 * (P(0, 0) * _tmp62 + P(1, 0) * _tmp57 + P(2, 0) * _tmp61 +
                                 P(3, 0) * _tmp59 + P(4, 0) * _tmp58 + P(5, 0) * _tmp60);
  }

  if (Hx != nullptr) {
    matrix::Matrix<Scalar, 24, 1>& _hx = (*Hx);

    _hx.setZero();

    _hx(0, 0) = _tmp32;
    _hx(1, 0) = _tmp20;
    _hx(2, 0) = _tmp31;
    _hx(3, 0) = _tmp30;
    _hx(4, 0) = _tmp27;
    _hx(5, 0) = _tmp24;
  }

  if (Hy != nullptr) {
    matrix::Matrix<Scalar, 24, 1>& _hy = (*Hy);

    _hy.setZero();

    _hy(0, 0) = _tmp51;
    _hy(1, 0) = _tmp50;
    _hy(2, 0) = _tmp49;
    _hy(3, 0) = _tmp33;
    _hy(4, 0) = _tmp38;
    _hy(5, 0) = _tmp36;
  }

  if (Hz != nullptr) {
    matrix::Matrix<Scalar, 24, 1>& _hz = (*Hz);

    _hz.setZero();

    _hz(0, 0) = _tmp62;
    _hz(1, 0) = _tmp57;
    _hz(2, 0) = _tmp61;
    _hz(3, 0) = _tmp59;
    _hz(4, 0) = _tmp58;
    _hz(5, 0) = _tmp60;
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym