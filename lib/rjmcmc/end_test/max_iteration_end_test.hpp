#ifndef MAX_ITERATION_END_TEST
#define MAX_ITERATION_END_TEST

class max_iteration_end_test {
  public:
    max_iteration_end_test(unsigned int i) : m_iterations(i) {}
    template<typename Configuration, typename Sampler>
    inline bool operator()(Configuration&, Sampler&, double, unsigned int i) {
      return i<=m_iterations;
    }
    void stop () { m_iterations=0; }
  private:
    unsigned int m_iterations;
};

#endif