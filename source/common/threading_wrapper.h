class Lock
{
public:
  Lock();
  ~Lock();
  void Acquire();
  void Release();
protected:
#ifdef _WIN32
  CRITICAL_SECTION m_handle;
#else  //  POSIX
  pthread_mutex_t  m_handle;
#endif // _WIN32
};
