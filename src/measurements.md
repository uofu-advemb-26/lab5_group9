# Activity 1 Measurements
## sleep.c
### Original Code
- 10 ms delay = 20 ms expected period
  - Period: 20.001 ms
    - Std Dev: 500 ns
  - Frequency: 49.998 Hz
    - Std Dev: 1000 uHz
  - Duty Cycle: 49.998%
    - Std Dev: 0.00188%

  - Jitter: ~500 ns
  - Drift: 180 ms per hour

- 1 ms delay = 2 ms expected period
  - Period: 2.0000 ms
    - Std Dev: 30 ns
  - Frequency: 500.00 Hz
    - Std Dev: 400 uHz
  - Duty Cycle: 49.99%
    - Std Dev: 0.0018%

  - Jitter: ~30 ns
  - Drift: Too small to measure

### With Busy Wait Loop
- 10 ms delay = 20 ms expected period
  - Period: 21.600 ms
    - Std Dev: 500 ns
  - Frequency: 46.296 Hz
    - Std Dev: 500 uHz
  - Duty Cycle: 50.00%
    - Std Dev: 0.0017%

  - Jitter: ~500 ns
  - Drift: 288 seconds per hour

## timer.c
### Original Code
- 10 ms delay = 20 ms expected period
  - Period: 20.001 ms
    - Std Dev: 500 ns
  - Frequency: 49.998 Hz
    - Std Dev: 1000 uHz
  - Duty Cycle: 49.998%
    - Std Dev: 0.00188%

  - Jitter: ~500 ns
  - Drift: 180 ms per hour

- 1 ms delay = 2 ms expected period
  - Period: 2.0000 ms
    - Std Dev: 0 ms
  - Frequency: 500.00 Hz
    - Std Dev: 0 Hz
  - Duty Cycle: 50.00%
    - Std Dev: 0.0018%

  - Jitter: Too small to measure
  - Drift: Too small to measure

### With Busy Wait Loop
- 10 ms delay = 20 ms expected period
  - Period: 20.001 ms
    - Std Dev: 500 ns
  - Frequency: 50.000 Hz
    - Std Dev: 1000 uHz
  - Duty Cycle: 49.998%
    - Std Dev: 0.0015%

  - Jitter: ~500 ns
  - Drift: 180 ms per hour

## task_delay.c
### Original Code
- 10 ms delay = 20 ms expected period
  - Period: 20.001 ms
    - Std Dev: 500 ns
  - Frequency: 49.998 Hz
    - Std Dev: 1000 uHz
  - Duty Cycle: 49.998%
    - Std Dev: 0.00188%

  - Jitter: ~500 ns
  - Drift: 180 ms per hour

- 1 ms delay = 2 ms expected period
  - Period: 2.0000 ms
    - Std Dev: 0 ms
  - Frequency: 500.00 Hz
    - Std Dev: 0 Hz
  - Duty Cycle: 49.99%
    - Std Dev: 0.0018%

  - Jitter: Too small to measure
  - Drift: Too small to measure

### With Busy Wait Loop
- 10 ms delay = 20 ms expected period
  - Period: 20.000 ms
    - Std Dev: 500 ns
  - Frequency: 50.000 Hz
    - Std Dev: 1000 uHz
  - Duty Cycle: 50.00%
    - Std Dev: 700 u%

  - Jitter: ~500 ns
  - Drift: Too small to measure

## Measurements of Function Generator
- 10 ms delay = 20 ms expected period
  - Period: 20.000 ms
    - Std Dev: ~1.1 us
  - Frequency: 50.000 Hz
    - Std Dev: ~0.003 Hz
  - Duty Cycle: 50.00%
    - Std Dev: ~0.004%

  - Jitter: ~1.1 us
  - Drift: Too small to measure

# Activity 2 Measurements
- Interrupt Handler Latency (no busy loop): 1.81 us
- Interrupt Handler Latency (with busy loop): 802.0 us

# Activity 3 Measurements
## With 2 Total Tasks
*Expected result: 2 ms period*

- Period: 2.0000 ms
  - Std Dev: 0.0 ms
- Frequency: 500.00 Hz
  - Std Dev: 0.0 Hz
- Duty Cycle: 49.99%
  - Std Dev: 0.001%