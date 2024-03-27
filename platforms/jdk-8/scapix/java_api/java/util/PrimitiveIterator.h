// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class PrimitiveIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::PrimitiveIterator>
{
	static constexpr fixed_string class_name = "java/util/PrimitiveIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/PrimitiveIterator_OfInt.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfLong.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfDouble.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::PrimitiveIterator : public jni::object_base<"java/util/PrimitiveIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	using OfInt = PrimitiveIterator_OfInt;
	using OfLong = PrimitiveIterator_OfLong;
	using OfDouble = PrimitiveIterator_OfDouble;

	void forEachRemaining(jni::ref<java::lang::Object> p1) { return call_method<"forEachRemaining", void>(p1); }

protected:

	PrimitiveIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PRIMITIVEITERATOR
