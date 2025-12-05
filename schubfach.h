// Implementation of the Schubfach algorithm:
// https://fmt.dev/papers/Schubfach4.pdf.
// Copyright (c) 2025 - present, Victor Zverovich
// Distributed under the MIT license (see LICENSE).

namespace schubfach {

constexpr int buffer_size = 25;

/// Writes the shortest correctly rounded decimal representation of `value` to
/// `buffer`. `buffer` should point to a buffer of size `buffer_size` or larger.
void dtoa(double value, char* buffer) noexcept;

}  // namespace schubfach
