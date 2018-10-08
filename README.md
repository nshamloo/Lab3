# Lab3
# Niloufar Shamloo, worked with Yikai Peng
# 2. We can detect the overflow problem because when the input is 256 or higher, the result turns into a negative number which is not the correct answer.
# This value is 256, as mentioned before.
# 3. The value that causes an overflow in this case is 2147483647.
# 4. By testing different values we can see that 35 is the number to cause an overflow, because the product reported at that time is infinity instead of an actual value.
# 5. By testing different values we can see that 171 is the number to cause an overflow, because the product reported at that time is infinity.
# 6. The expected value of this function if the computations are exact is a very small number. Because double is a more precise data type than float, we get a more exact value when using double. Even when the input is large enough for float to stop reporting the result as ZERO, double still gives us a more accurate answer.
# 7. This for loop does not work with a floating point becasue it includes the last value which is 4.4. This needs to be omitted because we are only asking for values less than 4.4 to be displayed.
# 8. Changing this data type to double fixes this problem because double is a more precise data type that does use more memory. 
