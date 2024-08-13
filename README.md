# Pi-Approximation
Find pi by different methods

# Polygon (Fast)
Approximate pi by summing up the change of area of a regular polygon when its edges are doubled.

Algorithm based on equations:

$$ \beta _{1} = \sqrt{2}$$

$$\beta _{n} = \sqrt{2 + \beta _{n-1}} $$

$$ \pi = 2 \sqrt{2} + \sum^{\infty}_{n=1} \Big( 2^{n} (2 - \beta _{n+1}) \sqrt{2 - \beta _{n}} \Big) $$

# Integral (Slow)
Approximate integral by dividing it into rectanglular slices, doubling slice count each iteration, summing up difference in slices' total area:

$$\frac{\pi}{4} = \int\limits_0^1 \sqrt{1-x^2} dx$$

Algorithm based on equation:

$$\frac{\pi}{4} = 1 - \sum\limits_{i=1}^{\infty} \Bigg( \sum\limits_{j=0}^{2^{i-1}-1} \frac{ \sqrt{1 - (\frac{2j}{2^i} )^2 } - \sqrt{1 - (\frac{2j+1}{2^i} )^2 } }{2^i} \Bigg) $$

# Quadtree (Very slow)
Approximate pi by finding area of 45º sector of circle using quadtree. I don't bother converting it to math.
