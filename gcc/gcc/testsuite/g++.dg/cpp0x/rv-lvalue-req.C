// { dg-do compile { target c++11 } }

template <class T> T&& declval();

int main()
{
  &declval<int>();		        // { dg-error "xvalue" }
  declval<int>() = declval<int>();	// { dg-error "xvalue" }
  declval<int>()++;			// { dg-error "xvalue" }
  --declval<int>();			// { dg-error "xvalue" }
  declval<int>() += 1;			// { dg-error "xvalue" }
}
