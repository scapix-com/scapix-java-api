// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class DoubleAccumulator_SerializationProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::DoubleAccumulator_SerializationProxy>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/DoubleAccumulator$SerializationProxy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::atomic::DoubleAccumulator_SerializationProxy : public jni::object_base<"java/util/concurrent/atomic/DoubleAccumulator$SerializationProxy",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	DoubleAccumulator_SerializationProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_SERIALIZATIONPROXY