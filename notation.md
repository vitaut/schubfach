# Mapping between the notation used in the paper and in this implementation

| Paper         | Code                                     |
|---------------|------------------------------------------|
| $v$           | `value`                                  |
| $c$           | `bin_sig`                                |
| $q$           | `bin_exp`                                |
| $k$           | `dec_exp`                                |
| $K_{\min}$    | `dec_exp_min`                            |
| $\bar{c}$     | `bin_sig_shifted`                        |
| $\bar{c}_l$   | `lower`                                  |
| $\bar{c}_r$   | `upper`                                  |
| $h$           | `shift`                                  |
| $c'$          | `bin_sig_shifted << shift`               |
| $c_l'$        | `lower << shift`                         |
| $c_r'$        | `upper << shift`                         |
| $g_1$         | `pow10_hi`                               |
| $g_0$         | `pow10_lo`                               |
| $r_o'$        | `umul192_upper64_modified`               |
| $\bar{v}$     | `scaled_sig`                             |
| $\bar{v}_l$   | `lower` after `umul192_upper64_modified` |
| $\bar{v}_r$   | `upper` after `umul192_upper64_modified` |
| $s$           | `dec_sig_under`                          |
| $t$           | `dec_sig_over`                           |
| $10 s'$       | `dec_sig_under2`                         |
| $10 t'$       | `dec_sig_over2`                          |
| $u$           | `dec_sig_under * 10**dec_exp`            |
| $w$           | `dec_sig_over * 10**dec_exp`             |
| $u'$          | `dec_sig_under2 * 10**dec_exp`           |
| $w'$          | `dec_sig_over2 * 10**dec_exp`            |
| $Q$           | `fixed_precision`                        |
