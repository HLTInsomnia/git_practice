import numpy as np
import urllib2

a = np.random.randn(1e4,1e4)
b = a.dot(a)

print b

req = urllib2.Request("www.wikicfp.com")
response = urllib2.urlopen(req)

