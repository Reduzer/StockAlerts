using System;
using System.Collections.Generic;
using System.Text;

namespace DBConnection.Redis
{
  public class RedisConnector
  {
    //============================================================================
    // Constants
    //============================================================================

    //Will be adjusted to fit the application | Reprisents ms
    private const int m_nDefaultTimeout = 100;

    //============================================================================
    // Members
    //============================================================================

    private string m_sRedisHostIP;             // IP of the Redis Host
    private short m_nRedisPort;                  // Used Port of the Redis DB
    private string m_sRedisUser;                // User for the Redis DB
    private string m_sRedisPassword;        // Password for the Redis DB

    private int m_nInstanceCount;               // Used to keep track of the redis instances
    private Dictionary<Guid, int> 
                    m_monMessagePoolLength; // Used for measuring load on the service 

    private Dictionary<Guid, string> 
                                  m_mosInstancesIDs; // 

    public object m_oLockObject;               //Used for syncronizing threads / tasks

    //============================================================================
    // Events
    //============================================================================

    //============================================================================
    // Constructors & Finalizer
    //============================================================================

    public RedisConnector()
    {
      m_nInstanceCount = 0;
      m_monMessagePoolLength = new Dictionary<Guid, int>();
      m_mosInstancesIDs = new Dictionary<Guid, string>();
    }

    ~RedisConnector()
    {
      
    }

    //============================================================================
    // Static Methods
    //============================================================================

    //============================================================================
    // Private Methods
    //============================================================================

    private void MakeHealthCheck()
    {
      foreach (KeyValuePair<Guid, string> oPair in m_mosInstancesIDs)
      {

      }
    }

    private void SpinUpInstance()
    {

    }

    private void KillInstance()
    {

    }

    //============================================================================
    // Protected Methods
    //============================================================================

    //============================================================================
    // Public Methods
    //============================================================================
    
    public RedisInteraction GetRedisInteraction()
    {
      return new RedisInteraction();
    }
  }
}
